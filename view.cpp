#include "view.h"

 View::View(const QString &offices, const QString &images, const QString &nombrecarpeta, QWidget *parent)
     : QGraphicsView(parent)
 {
     officeTable = new QSqlRelationalTableModel(this);
     officeTable->setTable(offices);
     officeTable->setRelation(1, QSqlRelation(images, "locationid", "file"));
     officeTable->select();
     scene = new QGraphicsScene(this);
     scene->setSceneRect(0, 0, 4366, 568);
     setScene(scene);
     carpeta = nombrecarpeta;

 #ifndef Q_OS_SYMBIAN
     setMinimumSize(766, 568);
     setMaximumSize(1366, 768);
 #else
     setDragMode(QGraphicsView::ScrollHandDrag);
 #endif
    setWindowTitle(tr("Imagenes del Paciente"));

 }
 View::~View()
 {
     delete scene;
     delete officeTable;
     delete window;
     delete visor;
     for(int i=0;i<punteros.size();i++)
     {
         delete punteros[i].first;
         delete punteros[i].second;
         qDebug()<<"Matando punteros";
     }

 }

 void View::addItems()
 {
     int imageOffset = 140;
     int leftMargin = 40;
     int topMargin = 40;

     if(comportamiento == 0)
     {
         query.prepare("select imagen_pk from e_imagen where (url = '"+carpeta+"' and reporte_operatorio_pk IS NULL)");
         qDebug()<<"Entro a NULL"<<endl;

     }
     else
     {
         query.prepare("select imagen_pk from e_imagen where (url = '"+carpeta+"' and reporte_operatorio_pk = '"+documento+"')");
         qDebug()<<"Entro a "<<documento<<endl;
         //qDebug("select imagen_pk from e_imagen where (url = '"+carpeta.toStdString()+"' and reporte_operatorio_pk = '"+documento.toStdString()+"')");

     }
     int i = 0;
     query.exec();
     while(query.next())
     {
         QGraphicsTextItem *label = new QGraphicsTextItem;
         int id = query.value(0).toInt();
         QString file = query.value(0).toString()+".JPG";
         qDebug()<<"Agregando al visor"<<file<<endl;
         QFileInfo fileInfo(file);
         //fecha de creacion de archivo
         QString location = fileInfo.created().toString();
         int columnOffset = ((i / 3) * 37);
         int x = ((i / 3) * imageOffset) + leftMargin + columnOffset;
         int y = ((i % 3) * imageOffset) + topMargin;
         ImageItem *image = new ImageItem(id, QPixmap(file));
         image->setData(0, i);
         image->setPos(x, y);
         scene->addItem(image);
         label = scene->addText(location);
         QPointF labelOffset((150 - label->boundingRect().width()) / 2, 120.0);
         label->setPos(QPointF(x, y) + labelOffset);
         i++;
         //Guardando los punteros para luego eliminarlos;
         QPair<QGraphicsTextItem*, ImageItem*> par_punteros;
         par_punteros.first = label;
         par_punteros.second = image;
         punteros.push_back(par_punteros);
     }
 }

 void View::mouseReleaseEvent(QMouseEvent *event)
 {
     if (QGraphicsItem *item = itemAt(event->pos())) {
         if (ImageItem *image = qgraphicsitem_cast<ImageItem *>(item))
             //showInformation(image);
               showViewer(image);
     }
     QGraphicsView::mouseReleaseEvent(event);
 }

 void View::showInformation(ImageItem *image)
 {
     int id = image->id();
     if (id < 0 || id >= officeTable->rowCount())
         return;

     InformationWindow *window = findWindow(id);
     if (window && window->isVisible()) {
         window->raise();
         window->activateWindow();
     } else if (window && !window->isVisible()) {
 #ifndef Q_OS_SYMBIAN
         window->show();
 #else
         window->showMaximized();
 #endif
     } else {

         window = new InformationWindow(id, officeTable, this);

         connect(window, SIGNAL(imageChanged(int,QString)),
                 this, SLOT(updateImage(int,QString)));

 #ifndef Q_OS_SYMBIAN
         window->move(pos() + QPoint(20, 40));
         window->show();
 #else
         window->showMaximized();
 #endif
         informationWindows.append(window);
     }
 }

 void View::updateImage(int id, const QString &fileName)
 {
     QList<QGraphicsItem *> items = scene->items();

     while(!items.empty()) {
         QGraphicsItem *item = items.takeFirst();

         if (ImageItem *image = qgraphicsitem_cast<ImageItem *>(item)) {
             if (image->id() == id){
                 image->setPixmap(QPixmap(":/" +fileName));
                 image->adjust();
                 break;
             }
         }
     }
 }

 InformationWindow* View::findWindow(int id)
 {
     QList<InformationWindow*>::iterator i, beginning, end;
     beginning = informationWindows.begin();
     end = informationWindows.end();
     for (i = beginning; i != end; ++i) {
         InformationWindow *window = (*i);
         if (window && (window->id() == id))
             return window;
     }
     return 0;
 }
void View::showViewer(ImageItem *image)
{
    int identificativo = image->id();
    cout<<identificativo<<endl;
    QString nameimage = QString::number(identificativo)+".JPG";
    visor = new ImageViewer(nameimage);
    visor->setDni(carpeta);
    visor->setPatch(abspatch);
    visor->setCurrentParent(this);
    visor->show();
    visor->open();
}
void View::setcarpeta(QString nombreCarpeta)
{
    carpeta = nombreCarpeta;
}
void View::setDocumento(QString nombreDocumento)
{
    documento = nombreDocumento;
}
void View::setPatch(QString patch)
{
    abspatch = patch;
}
void View::reload()
{
    this->close();
}
void View::setComportamiento(bool a)
{
    comportamiento = a;
}

