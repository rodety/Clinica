#include "imageitem.h"

 ImageItem::ImageItem(int id, const QPixmap &pixmap, QGraphicsItem *parent,
                      QGraphicsScene *scene)
     : QGraphicsPixmapItem(pixmap, parent, scene)
 {
     recordId = id;
     setAcceptsHoverEvents(true);
     image = pixmap;
     timeLine.setDuration(300);
     timeLine.setFrameRange(0, 300);
     connect(&timeLine, SIGNAL(frameChanged(int)), this, SLOT(setFrame(int)));
     connect(&timeLine, SIGNAL(finished()), this, SLOT(updateItemPosition()));
     adjust();
 }

 void ImageItem::hoverEnterEvent(QGraphicsSceneHoverEvent * /*event*/)
 {
     timeLine.setDirection(QTimeLine::Forward);

     if (z != 1.0) {
         z = 1.0;
         updateItemPosition();
     }

     if (timeLine.state() == QTimeLine::NotRunning)
         timeLine.start();
 }

 void ImageItem::hoverLeaveEvent(QGraphicsSceneHoverEvent * /*event*/)
 {
     timeLine.setDirection(QTimeLine::Backward);
     if (z != 0.0)
         z = 0.0;

     if (timeLine.state() == QTimeLine::NotRunning)
         timeLine.start();
 }

 void ImageItem::setFrame(int frame)
 {
     adjust();
     QPointF center = boundingRect().center();

     translate(center.x(), center.y());
     scale(1 + frame / 430.0, 1 + frame / 430.0);
     translate(-center.x(), -center.y());
 }

 void ImageItem::adjust()
 {
     QMatrix matrix;
     if(image.height() < image.width())//horizontal
        matrix.scale(90/ boundingRect().width(), 60/ boundingRect().height());
     else
         matrix.scale(55/ boundingRect().width(), 100/ boundingRect().height());

     setMatrix(matrix);
 }

 int ImageItem::id()
 {
     return recordId;
 }

 void ImageItem::updateItemPosition()
 {
     setZValue(z);
 }
