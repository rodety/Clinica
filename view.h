#ifndef VIEW_H
 #define VIEW_H

 #include <QtGui>
 #include <QtSql>
#include<QImage>
#include<QFileInfo>
#include<QSqlQuery>
#include "informationwindow.h"
#include "imageitem.h"
#include"imageviewer.h"
#include<QFileInfo>
#include<iostream>
#include<QVector>
#include<QPair>
using namespace std;
 class ImageItem;
 class InformationWindow;
 class ImageViewer;

 class View : public QGraphicsView
 {
     Q_OBJECT

 public:
     View(const QString &offices, const QString &images, const QString &nombrecarpeta, QWidget *parent = 0);
     ~View();
     void setcarpeta(QString);
     void setDocumento(QString);
     void addItems();
     void setPatch(QString);
     void reload();
     void setComportamiento(bool);

 protected:
     void mouseReleaseEvent(QMouseEvent *event);

 private slots:
     void updateImage(int id, const QString &fileName);

 private:

     InformationWindow* findWindow(int id);
     void showInformation(ImageItem *image);
     void showViewer(ImageItem *image);
     QGraphicsScene *scene;
     QList<InformationWindow *> informationWindows;
     QSqlRelationalTableModel *officeTable;
     QString carpeta;
     QSqlQuery query;
     QString documento;
     QString abspatch;
     InformationWindow *window;
     ImageViewer *visor;
     QVector< QPair<QGraphicsTextItem*, ImageItem*> > punteros;
     bool comportamiento;

 };

 #endif
