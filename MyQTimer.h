#ifndef MyQTimer_H
#define MyQTimer_H

//#include <QtGui>
//#include "ui_counterDlg.h"
//#include "ejemplo1.h"
#include <QThread>
#include "qmutex.h"

class MyQTimer : public QThread{
Q_OBJECT
public:
  
  MyQTimer();
  virtual ~MyQTimer();
  
public slots:
 
  void stop();
public:
  void setInterval(int m);
 
signals:
  void timeout();
protected:
   void run();
private:
  int mili;
  bool s= true;
  QMutex mutex;
  
};


#endif