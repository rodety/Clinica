/*
Created: 2/29/2012
Modified: 1/8/2013
Model: clinica
Database: MySQL 5.5
*/

-- Create tables section -------------------------------------------------

-- Table e_dni

CREATE TABLE e_dni
(
  dni_pk Varchar(8) NOT NULL,
  apellido_paterno Text,
  apellido_materno Text,
  primer_nombre Text,
  segundo_nombre Text,
  sexo Text,
  fecha_nacimiento Date,
  donacion_organos Text,
  estado_civil Text,
  pais Text,
  departamento Text,
  provincia Text,
  distrito Text,
  direccion Text
) ENGINE = InnoDB
;

ALTER TABLE e_dni ADD PRIMARY KEY (dni_pk)
;

-- Create triggers for table e_dni

CREATE TRIGGER Trigger1 BEFORE INSERT
 ON e_dni
 FOR EACH ROW
BEGIN
    /*trigger_body*/
END
;

-- Table e_persona

CREATE TABLE e_persona
(
  dni_pk Varchar(8) NOT NULL,
  tipo Text
) ENGINE = InnoDB
;

ALTER TABLE e_persona ADD PRIMARY KEY (dni_pk)
;

-- Table e_paciente

CREATE TABLE e_paciente
(
  dni_pk Varchar(8) NOT NULL,
  alergias Text,
  ocupacion Text,
  telefono_paciente Text,
  celular_paciente Text,
  email Text,
  cirujias_previas Text,
  medicacion_actual Text,
  persona_recurrir Text,
  telefono_persona_recurrir Text,
  antecedentes Text
) ENGINE = InnoDB
;

ALTER TABLE e_paciente ADD PRIMARY KEY (dni_pk)
;

-- Table e_antecedentes

CREATE TABLE e_antecedentes
(
  historia_clinica_pk Int UNSIGNED,
  historial_documento_pk Int UNSIGNED,
  fecha_creacion Date,
  fecha_ingreso Date,
  fecha_ultima_menstruacion Date,
  regimen_catamental Text,
  tabaco Bool,
  alcohol Bool,
  medicacion_actual Text,
  antecedentes_patologicos_personales Text,
  antecedentes_patologicos_familiares Text,
  observaciones Text,
  cama Int,
  servicio Text,
  medico_tratante Text,
  operaciones Text
) ENGINE = InnoDB
;

-- Table e_examen_clinico

CREATE TABLE e_examen_clinico
(
  historial_documento_pk Int UNSIGNED,
  historia_clinica_pk Int UNSIGNED,
  fecha_creacion Date,
  talla Text,
  peso Text,
  peso_habitual Text,
  temperatura Text,
  pulso Text,
  respiracion Text,
  estado_general Text,
  mental Text,
  facies Text,
  piel_anexos Text,
  color Text,
  celular_subcutaneo Text,
  osteo_mio_articular Text,
  sistema_linfatico Text,
  cabeza Text,
  ojos Text,
  pupila Text,
  fondo_ojo Text,
  nariz Text,
  oidos Text,
  labios Text,
  mucosas Text,
  lengua Text,
  dientes Text,
  paladar Text,
  admigdalas_faringe Text,
  cuello Text,
  tiroides Text,
  torax Text,
  mamas Text,
  presion_arterial Text,
  frecuencia Text,
  ritmo Text,
  amplitud Text,
  pared Text,
  pulso_cardiaco Text,
  femoral Text,
  pedio Text,
  otros Text,
  corazon_choque_punta Text,
  ruidos_cardiacos Text,
  soplos Text,
  ruidos_adventicios Text,
  tipo_respiracion Text,
  frecuencia_respiratoria Text,
  retracciones Text,
  abovedamientos Text,
  movilidad Text,
  vibraciones_vocales Text,
  percusion Text,
  auscultacion Text,
  piel_abdomen Text,
  deformaciones Text,
  movilidad_abdomen Text,
  circulacion_colateral Text,
  pared_palpacion Text,
  sensibilidad Text,
  tension_abdominal Text,
  puntos_dolorosos Text,
  palpacion_profunda Text,
  percusion_abdomen Text,
  auscultacion_abdomen Text,
  higado Text,
  baso Text,
  tacto_rectal Text,
  tacto_vaginal Text,
  genitales Text,
  neurologico Text,
  impresiones_diagnosticas Text,
  cama Int,
  servicio Text,
  medico_tratante Text,
  biotipo Text
) ENGINE = InnoDB
;

-- Table e_historia_clinica

CREATE TABLE e_historia_clinica
(
  historia_clinica_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  dni_pk Varchar(8) NOT NULL,
  nick Text,
 PRIMARY KEY (historia_clinica_pk)
) ENGINE = InnoDB
;

-- Table e_reporte_operatorio

CREATE TABLE e_reporte_operatorio
(
  reporte_operatorio_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  historia_clinica_pk Int UNSIGNED,
  historial_documento_pk Int UNSIGNED,
  fecha_creacion Date,
  inicio_operacion Datetime,
  fin_operacion Datetime,
  tipo_anestecia Text,
  inicio_anestecia Datetime,
  fin_anestecia Datetime,
  cuenta_gasa Text,
  drenes Text,
  apositos Text,
  otros Text,
  dx_pre_op Text,
  dx_post_op Text,
  procedimiento Text,
  hallazgo Text,
  firma Text,
  habitacion Int,
  cama Int,
  convenio Text,
  primer_ayudante Text,
  segundo_ayudante Text,
  anestesiologo Text,
  instrumentista Text,
  circulante Text,
  medico_tratante Text,
  cirujano Text,
 PRIMARY KEY (reporte_operatorio_pk)
) ENGINE = InnoDB
;

-- Table e_terapeutica_medica

CREATE TABLE e_terapeutica_medica
(
  historial_documento_pk Int UNSIGNED NOT NULL,
  historia_clinica_pk Int UNSIGNED NOT NULL,
  fecha_creacion Date,
  cama Int UNSIGNED,
  servicio Text,
  medico_tratante Text
) ENGINE = InnoDB
;

ALTER TABLE e_terapeutica_medica ADD PRIMARY KEY (historial_documento_pk,historia_clinica_pk)
;

-- Table e_agenda

CREATE TABLE e_agenda
(
  agenda_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  dni_pk Varchar(8) NOT NULL,
  nombre Text,
  fecha Date,
  hora Time,
  descripcion Text,
  ficha Text,
  color Text,
  telefono Text,
 PRIMARY KEY (agenda_pk,dni_pk),
 UNIQUE Key25 (agenda_pk)
) ENGINE = InnoDB
;

-- Table e_imagen

CREATE TABLE e_imagen
(
  reporte_operatorio_pk Int UNSIGNED,
  imagen_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  tipo Text,
  url Text,
  comentario Text,
 PRIMARY KEY (imagen_pk)
) ENGINE = InnoDB
;

-- Table e_alerta

CREATE TABLE e_alerta
(
  alerta_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  fecha Date,
  hora Time,
  descripcion Text,
  color Text,
  tipo Text,
 PRIMARY KEY (alerta_pk)
) ENGINE = InnoDB
;

-- Table e_consulta

CREATE TABLE e_consulta
(
  historia_clinica_pk Int UNSIGNED,
  historial_documento_pk Int UNSIGNED,
  fecha Date,
  motivo Text
) ENGINE = InnoDB
;

-- Table e_usuario

CREATE TABLE e_usuario
(
  usuario_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  nombre Text,
  nick Text,
  clave Text,
  agenda Int,
  paciente Int,
  historia_clinica Int,
  tratamientos Int,
  usuarios Int,
  mailing Int,
  facebook Int,
  alertas Int,
  personal Int,
  login Int,
 PRIMARY KEY (usuario_pk)
) ENGINE = InnoDB
;

-- Table r_historial_documento

CREATE TABLE r_historial_documento
(
  historial_documento_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
  historia_clinica_pk Int UNSIGNED NOT NULL,
  tipo Text,
  fecha_creacion Date,
  comentario Text,
  fecha_modificacion Date,
  nombre_usuario Text,
 PRIMARY KEY (historial_documento_pk,historia_clinica_pk)
) ENGINE = InnoDB
;

-- Table e_epicrisis

CREATE TABLE e_epicrisis
(
  historial_documento_pk Int UNSIGNED,
  historia_clinica_pk Int UNSIGNED,
  medico_tratante Text,
  servicio Text,
  cama Int,
  fecha_ingreso Date,
  fecha_alta Date,
  dias_hospitalizados Int,
  condicion_alta Text,
  resumen_h_clinica Text,
  resumen_ex_clinico Text,
  examenes_auxiliares Text,
  diagnostico_ingreso Text,
  tratamiento Text,
  evolucion Text,
  diagnostico_final Text,
  indicaciones Text
)
;

-- Table E_RIESGO_QUIRURGICO

CREATE TABLE E_RIESGO_QUIRURGICO
(
  historia_clinica_pk Int UNSIGNED,
  historial_documento_pk Int UNSIGNED,
  medico_tratante Text,
  procedencia Text,
  hta Text,
  asma Text,
  tbc Text,
  dm Text,
  motivo_rqcv Text,
  pa Text,
  fc Text,
  corazon Text,
  pulmones Text,
  pulsos_prerifericos Text,
  sistema_venoso Text,
  ekg Text,
  fc1 Text,
  p Text,
  pr Text,
  qrc Text,
  qt Text,
  st Text,
  onda_t Text,
  aqrs Text,
  id Text,
  rqcv Text,
  sugerencias Text,
  fecha Date
)
;

-- Table datos_terapeutica

CREATE TABLE datos_terapeutica
(
  datos_teraputica_pk Int NOT NULL AUTO_INCREMENT,
  historial_documento_pk Int UNSIGNED,
  historia_clinica_pk Int UNSIGNED,
  fecha_inicio Date,
  hora_inicio Time,
  terapeutica Text,
  fecha_fin Date,
  hora_final Time,
 PRIMARY KEY (datos_teraputica_pk)
)
;

-- Table e_invalid_dni

CREATE TABLE e_invalid_dni
(
  dni_pk Int UNSIGNED NOT NULL AUTO_INCREMENT,
 PRIMARY KEY (dni_pk)
) ENGINE = InnoDB
;

-- Create relationships section ------------------------------------------------- 

ALTER TABLE e_paciente ADD CONSTRAINT Relationship9 FOREIGN KEY (dni_pk) REFERENCES e_persona (dni_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_historia_clinica ADD CONSTRAINT Relationship18 FOREIGN KEY (dni_pk) REFERENCES e_paciente (dni_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_persona ADD CONSTRAINT Relationship5 FOREIGN KEY (dni_pk) REFERENCES e_dni (dni_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_agenda ADD CONSTRAINT Relationship44 FOREIGN KEY (dni_pk) REFERENCES e_persona (dni_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE r_historial_documento ADD CONSTRAINT Relationship47 FOREIGN KEY (historia_clinica_pk) REFERENCES e_historia_clinica (historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_antecedentes ADD CONSTRAINT Relationship53 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_consulta ADD CONSTRAINT Relationship54 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_reporte_operatorio ADD CONSTRAINT Relationship57 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_examen_clinico ADD CONSTRAINT Relationship60 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_imagen ADD CONSTRAINT Relationship62 FOREIGN KEY (reporte_operatorio_pk) REFERENCES e_reporte_operatorio (reporte_operatorio_pk) ON DELETE NO ACTION ON UPDATE NO ACTION
;

ALTER TABLE e_epicrisis ADD CONSTRAINT Relationship67 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE E_RIESGO_QUIRURGICO ADD CONSTRAINT Relationship69 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE e_terapeutica_medica ADD CONSTRAINT Relationship81 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES r_historial_documento (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;

ALTER TABLE datos_terapeutica ADD CONSTRAINT Relationship87 FOREIGN KEY (historial_documento_pk, historia_clinica_pk) REFERENCES e_terapeutica_medica (historial_documento_pk, historia_clinica_pk) ON DELETE CASCADE ON UPDATE CASCADE
;


