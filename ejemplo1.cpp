#include "ejemplo1.h"
#include "MyQTimer.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	connect(StartButton, SIGNAL(clicked()), this, SLOT(doButton2()) );
	connect(&timer, SIGNAL(timeout()), this, SLOT(doNumber()) );
	connect(Slider, SIGNAL(sliderMoved(int)), this,SLOT(doSlider(int)) );
	//timer.start(300);
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	//qDebug() << "click on button";
	timer.stop();
	lcdNumber->display(cont);
}
void ejemplo1::doButton2()
{
	//qDebug() << "click on button";

	lcdNumber->display(0);
	cont = 0;
	timer.setInterval(n);
	timer.start();
	
}
void ejemplo1::doNumber()
{
  lcdNumber->display(cont++);
  
}
void ejemplo1::doSlider(int m)
{
  n=m;
  timer.setInterval(m);
}





