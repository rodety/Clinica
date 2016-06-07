 #ifndef IMAGEVIEWER_H
 #define IMAGEVIEWER_H

 #include <QMainWindow>
 #include <QPrinter>
 #include<QSqlQuery>
 #include "view.h"
 class View;
 class QAction;
 class QLabel;
 class QMenu;
 class QScrollArea;
 class QScrollBar;

 class ImageViewer : public QMainWindow
 {
     Q_OBJECT

 public:
     ImageViewer(QString);
     ~ImageViewer();
     void setDni(QString);
     void setPatch(QString);
     void setCurrentParent(View* parent);
 public slots:
     void open();


 private slots:

     void print();
     void zoomIn();
     void zoomOut();
     void normalSize();
     void fitToWindow();
     void about();
     void deleteImage();
     void rotateImage();
 private:
     void createActions();
     void createMenus();
     void updateActions();
     void scaleImage(double factor);
     void adjustScrollBar(QScrollBar *scrollBar, double factor);
     QLabel *imageLabel;
     QScrollArea *scrollArea;
     double scaleFactor;
     int angle;
     View * currentParent;

 #ifndef QT_NO_PRINTER
     QPrinter printer;
 #endif
     QAction *openAct;
     QAction *printAct;
     QAction * deleteAct;
     QAction * rotateAct;
     QAction *exitAct;
     QAction *zoomInAct;
     QAction *zoomOutAct;
     QAction *normalSizeAct;
     QAction *fitToWindowAct;
     QAction *aboutAct;
     QAction *aboutQtAct;
     QMenu *fileMenu;
     QMenu *viewMenu;
     QMenu *helpMenu;
     QString namefile;
     QSqlQuery query;
     QString abspatch;
     QString dni_var;
 };
 #endif
