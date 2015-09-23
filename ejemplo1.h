#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"

#include "MyQTimer.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    ejemplo1();
    virtual ~ejemplo1();
    
    
public slots:
	void doButton();
	void doButton2();
	void doNumber();
	void doSlider(int m);
private:
  MyQTimer timer;
  int cont;
  int n= 1000;
};

    

#endif // ejemplo1_H
