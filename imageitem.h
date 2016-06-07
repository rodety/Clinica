#ifndef IMAGEITEM_H
 #define IMAGEITEM_H

 #include <QtCore>
 #include <QtGui/QGraphicsPixmapItem>

 class ImageItem : public QObject, public QGraphicsPixmapItem
 {
     Q_OBJECT

 public:
     ImageItem(int id, const QPixmap &pixmap, QGraphicsItem *parent = 0,
               QGraphicsScene *scene = 0);

     void adjust();
     int id();

 protected:
     void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
     void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

 private slots:
     void setFrame(int frame);
     void updateItemPosition();

 private:
     QTimeLine timeLine;
     int recordId;
     double z;
     QPixmap image;
 };

 #endif
