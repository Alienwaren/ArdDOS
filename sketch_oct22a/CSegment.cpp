#include "CSegment.h"

CSegment::CSegment(void)
  :
  a(0), b(0), c(0),
     e(0), f(0),
       g(0), DP(0), d(0)
{
  
  
}
void CSegment::initPins(byte p_a, byte p_b, byte p_c, byte p_d, byte p_e, byte p_f, byte p_g, byte p_DP)
{
  a = p_a;
  b = p_b;
  c = p_c;
  d = p_d;
  e = p_e;
  f = p_f;
  g = p_g;
  DP = p_DP;
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(DP, OUTPUT);
  offAll();
}
void CSegment::lightA()
{
 
 digitalWrite(a, LOW);
 delay(10); 
  
}
void CSegment::lightB()
{
 
 digitalWrite(b, LOW);
 delay(10); 
  
}
void CSegment::lightC()
{
 
 digitalWrite(c, LOW);
 delay(10); 
  
}
void CSegment::lightD()
{
 
 digitalWrite(d, LOW);
 delay(10); 
  
}
void CSegment::lightE()
{
 
 digitalWrite(e, LOW);
 delay(10); 
  
}
void CSegment::lightF()
{
 
 digitalWrite(f, LOW);
 delay(10); 
  
}
void CSegment::lightG()
{
 
 digitalWrite(g, LOW);
 delay(10); 
  
}
void CSegment::lightDP()
{
 
 digitalWrite(DP, LOW);
 delay(10); 
  
}
void CSegment::lightNumberOne()
{
  lightC();
  lightB();
  offA();
  offF();
  offE();
  offD();
  offG();
}
void CSegment::lightNumberTwo()
{
  lightA();
  lightB();
  lightG();
  lightE();
  lightD();
  offC();
  offF();
  offDP();
}
void CSegment::lightNumberThree()
{
  lightA();
  lightB();
  lightG();
  lightC();
  lightD();
  offF();
  offE(); 
  
}
void CSegment::lightNumberFour()
{
  lightF();
  lightG();
  lightB();
  lightC();
  offA();
  offD();
  offE();
}
void CSegment::lightNumberFive()
{
  lightA();
  lightF();
  lightG();
  lightC();
  lightD();
  offB();
  offE();
  
}
void CSegment::lightNumberSix()
{
  lightA();
  lightF();
  lightG();
  lightC();
  lightD();
  lightE();
  offB();
  offA();
  
}
void CSegment::lightNumberSeven()
{
  lightA();
  lightF();
  lightC();
  lightB();
  offG();
  offE();
  offD();
  
}
void CSegment::lightNumberEight()
{
  lightA();
  lightF();
  lightG();
  lightC();
  lightD();
  lightE();
  lightB();
  offDP();
}
void CSegment::lightNumberNine()
{
  lightA();
  lightF();
  lightG();
  lightB();
  lightC();
  offE();
  offD();
  
  
}
void CSegment::lightNumberZero()
{
  lightA();
  lightF();
  lightG();
  lightB();
  lightC();
  lightE();
  lightD();
  offG();
  offDP();
  
  
}
void CSegment::lightLetterA()
{
  lightA();
  lightF();
  lightB();
  lightG();
  lightE();
  lightC();
  offD();
  offDP();
  
}
void CSegment::lightLetterB()
{
  lightG();
  lightF();
  lightC();
  lightD();
  lightE();
  offB();
  offA();
}
void CSegment::lightLetterC()
{
  lightA();
  lightF();
  lightE();
  lightD();
  offB();
  offC();
  offG();
  
}
void CSegment::lightLetterD()
{
  lightB();
  lightG();
  lightC();
  lightD();
  lightC();
  offA();
  offF();
  offDP();
}
void CSegment::lightLetterE()
{
  lightE();
  lightF();
  lightG();      
  lightE();
  lightD();
  lightA();
  offB();
  offC();
  offDP();
}
void CSegment::lightLetterF()
{
  lightA();
  lightF();
  lightG();
  lightE();
  lightDP();
  offB();
  offC();
  offD();
}
void CSegment::offA()
{
 digitalWrite(a, HIGH); 
 delay(10); 
}
void CSegment::offB()
{
 digitalWrite(b, HIGH); 
 delay(10); 
}
void CSegment::offC()
{
 digitalWrite(c, HIGH); 
 delay(10); 
}
void CSegment::offD()
{
 digitalWrite(d, HIGH); 
 delay(10); 
}
void CSegment::offE()
{
 digitalWrite(e, HIGH); 
 delay(10); 
}
void CSegment::offF()
{
  digitalWrite(f, HIGH);
  delay(10);   
}
void CSegment::offG()
{
 digitalWrite(g, HIGH);
 delay(10);  
}
void CSegment::offDP()
{
  digitalWrite(DP, HIGH);
  delay(10);  
}
void CSegment::lightAll()
{
  lightA();
  lightB();
  lightC();
  lightD();
  lightE();
  lightF();
  lightG();
  lightDP();
}
void CSegment::offAll()
{
  offA();
  offB();
  offC();
  offD();
  offE();
  offF();
  offG();
  offDP();
}
void CSegment::testDisplay(int delayTime)
{
  offAll();
  delay(delayTime);
  lightA();
  delay(delayTime);
  lightB();
  delay(delayTime);
  lightC();
  delay(delayTime);
  lightD();
  delay(delayTime);
  lightE();
  delay(delayTime);
  lightF();
  delay(delayTime);
  lightG();
  delay(delayTime);
  lightDP();
  delay(delayTime);
  offA();
  delay(delayTime);
  offB();
  delay(delayTime);
  offC();
  delay(delayTime);
  offD();
  delay(delayTime);
  offE();
  delay(delayTime);
  offF();
  delay(delayTime);
  offG();
  delay(delayTime);
  offDP();
  delay(delayTime);
  lightAll();
  delay(delayTime);
  lightA();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightB();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightC();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightD();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightE();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightF();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightDP();
  delay(delayTime);
  offAll();
  delay(delayTime);
  lightNumberOne();
  delay(delayTime);
  lightNumberTwo();
  delay(delayTime);
  lightNumberThree();
  delay(delayTime);
  lightNumberFour();
  delay(delayTime);
  lightNumberFive();
  delay(delayTime);
  lightNumberSix();
  delay(delayTime);
  lightNumberSeven();
  delay(delayTime);
  lightNumberEight();
  delay(delayTime);
  lightNumberNine();
  delay(delayTime);
  lightNumberZero();
  delay(delayTime);
  lightLetterA();
  delay(delayTime);
  lightLetterB();
  delay(delayTime);
  lightLetterC();
  delay(delayTime);
  lightLetterD();
  delay(delayTime);
  lightLetterE();
  delay(delayTime);
  lightLetterF();
  delay(delayTime);
  
}
CSegment::~CSegment(void)
{
  
  
  
}
