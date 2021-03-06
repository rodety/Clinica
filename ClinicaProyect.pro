#-------------------------------------------------
#
# Project created by QtCreator 2012-02-20T23:20:28
#
#-------------------------------------------------

QT       += core gui\ core gui webkit
QT  += sql
QT  += network
QT += gui debug
TARGET = ClinicaProyect
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    agenda_ui.cpp \
    paciente_ui.cpp \
    newtask_agenda_ui.cpp \
    newpaciente_paciente_ui.cpp \
    consulta_paciente_ui.cpp \
    newconsulta_paciente_ui.cpp \
    historiaclinica_ui.cpp \
    seguridad_ui.cpp \
    alertas_ui.cpp \
    usuarios_ui.cpp \
    ayuda_ui.cpp \
    mailing_ui.cpp \
    tratamientos_ui.cpp \
    newalerta_alerta_ui.cpp \
    facebook_ui.cpp \
    newuser_usuarios_ui.cpp \
    newpersonal_personal_ui.cpp \
    configuracion_ui.cpp \
    funciones.cpp \
    historia_clinica_documento.cpp \
    reporte_operatorio_documento.cpp \
    antecedentes_documento.cpp \
    fotos_ui.cpp \
    clinica_tab_documento.cpp \
    informationwindow.cpp \
    imageitem.cpp \
    view.cpp \
    imageviewer.cpp \
    ftpwindow.cpp \
    terapeutica_medica_documento.cpp \
    examen_clinico_documento.cpp \
    documentos_historial_ui.cpp \
    configprogram.cpp \
    login_ui.cpp \
    epicrisis_documento.cpp \
    item_terapeutica.cpp \
    riesgo_quirurgico_documento.cpp \
    configurador.cpp \
    conexionbd.cpp \
    conexionftp.cpp \
    ftpconfigprogram.cpp \
    agenda_list_documento.cpp \
    caja_ui.cpp \
    caja/tipo_activo_ui.cpp \
    caja/nuevo_ingreso_ui.cpp

HEADERS  += mainwindow.h \
    agenda_ui.h \
    paciente_ui.h \
    newtask_agenda_ui.h \
    newpaciente_paciente_ui.h \
    consulta_paciente_ui.h \
    newconsulta_paciente_ui.h \
    historiaclinica_ui.h \
    documentos_historial_ui.h \
    seguridad_ui.h \
    alertas_ui.h \
    usuarios_ui.h \
    ayuda_ui.h \
    mailing_ui.h \
    tratamientos_ui.h \
    newalerta_alerta_ui.h \
    facebook_ui.h \
    newuser_usuarios_ui.h \
    Clinica_database.h \
    newpersonal_personal_ui.h \
    configuracion_ui.h \
    funciones.h \
    examen_clinico_documento.h \
    historia_clinica_documento.h \
    reporte_operatorio_documento.h \
    antecedentes_documento.h \
    fotos_ui.h \
    clinica_tab_documento.h \
    informationwindow.h \
    imageitem.h \
    view.h \
    imageviewer.h \
    connection.h \
    ftpwindow.h \
    terapeutica_medica_documento.h \
    configprogram.h \
    login_ui.h \
    epicrisis_documento.h \
    item_terapeutica.h \
    riesgo_quirurgico_documento.h \
    ui_historiaclinica_ui.h \
    ui_historiaclinica_ui.h \
    configurador.h \
    conexionbd.h \
    conexionftp.h \
    ftpconfigprogram.h \
    agenda_list_documento.h \
    caja_ui.h \
    caja/tipo_activo_ui.h \
    caja/nuevo_ingreso_ui.h

FORMS    += mainwindow.ui \
    agenda_ui.ui \
    paciente_ui.ui \
    newtask_agenda_ui.ui \
    newpaciente_paciente_ui.ui \
    consulta_paciente_ui.ui \
    newconsulta_paciente_ui.ui \
    documentos_historial_ui.ui \
    seguridad_ui.ui \
    alertas_ui.ui \
    usuarios_ui.ui \
    ayuda_ui.ui \
    mailing_ui.ui \
    tratamientos_ui.ui \
    newalerta_alerta_ui.ui \
    facebook_ui.ui \
    newuser_usuarios_ui.ui \
    newpersonal_personal_ui.ui \
    configuracion_ui.ui \
    fotos_ui.ui \
    configprogram.ui \
    login_ui.ui \
    item_terapeutica.ui \
    historiaclinica_ui.ui \
    ftpconfigprogram.ui \
    caja_ui.ui \
    caja/tipo_activo_ui.ui \
    caja/nuevo_ingreso_ui.ui

RESOURCES += \
    rc.qrc \
    ftp.qrc

win32:RC_FILE = MyApp.rc

OTHER_FILES += \
    logo.png \
    drupal-logo.png \
    dinero.png

# install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/qftp
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro images
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/qftp
 INSTALLS += target sources

 symbian {
     TARGET.UID3 = 0xA000A648
     include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
     INCLUDEPATH += $$APP_LAYER_SYSTEMINCLUDE
     TARGET.CAPABILITY="NetworkServices ReadUserData WriteUserData"
 }

# install
 target.path = $$[QT_INSTALL_EXAMPLES]/sql/drilldown
 sources.files = $$SOURCES *.h $$RESOURCES $$FORMS drilldown.pro *.png *.jpg images
 sources.path = $$[QT_INSTALL_EXAMPLES]/sql/drilldown

 symbian {
     TARGET.UID3 = 0xA000C612
     include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
 }
