#include "MyQTimer.h"

MyQTimer::MyQTimer()
{
  mili = 1000;
}

MyQTimer::~MyQTimer()
{}

void MyQTimer::run()
{
  while(s){
    mutex.lock();
    int aux = mili;
    mutex.unlock();
    
    msleep(aux);
    emit timeout(); 
    
  }
}



void MyQTimer::stop()
{
s=false;
}

void MyQTimer::setInterval(int m)
{
  
  mutex.lock();
  s=true;
  mili = m;
  mutex.unlock();
  
 
}
