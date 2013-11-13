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
  offB();
  offE();
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
  offG();
  offF();
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
  
}
void CSegment::lightNumberNine()
{
  lightA();
  lightF();
  lightG();
  lightB();
  lightC();
 
  
  
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
 
  
  
}
void CSegment::lightLetterA()
{
  lightA();
  lightF();
  lightB();
  lightG();
  lightE();
  lightC();
  
  
}
void CSegment::lightLetterB()
{
  lightG();
  lightF();
  lightC();
  lightD();
  lightE();
  
}
void CSegment::lightLetterC()
{
  lightA();
  lightF();
  lightE();
  lightD();
  
}
void CSegment::lightLetterD()
{
  lightB();
  lightG();
  lightC();
  lightD();
  lightC();
}
void CSegment::lightLetterE()
{
  lightE();
  lightF();
  lightG();      
  lightE();
  lightD();
}
void CSegment::lightLetterF()
{
	lightA();
	lightF();
	lightG();
	lightE();
	lightDP();
}
void CSegment::offA()
{
 digitalWrite(a, HIGH); 
}
void CSegment::offB()
{
 digitalWrite(b, HIGH); 
}
void CSegment::offC()
{
 digitalWrite(c, HIGH); 
}
void CSegment::offD()
{
 digitalWrite(d, HIGH); 
}
void CSegment::offE()
{
 digitalWrite(e, HIGH); 
}
void CSegment::offF()
{
  digitalWrite(f, HIGH);  
}
void CSegment::offG()
{
 digitalWrite(g, HIGH); 
}
void CSegment::offDP()
{
  digitalWrite(DP, HIGH); 
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
CSegment::~CSegment(void)
{
  
  
  
}
