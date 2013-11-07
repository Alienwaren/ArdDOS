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
 delay(100); 
  
}
void CSegment::lightB()
{
 
 digitalWrite(b, LOW);
 delay(100); 
  
}
void CSegment::lightC()
{
 
 digitalWrite(c, LOW);
 delay(100); 
  
}
void CSegment::lightD()
{
 
 digitalWrite(d, LOW);
 delay(100); 
  
}
void CSegment::lightE()
{
 
 digitalWrite(e, LOW);
 delay(100); 
  
}
void CSegment::lightF()
{
 
 digitalWrite(f, LOW);
 delay(100); 
  
}
void CSegment::lightG()
{
 
 digitalWrite(g, LOW);
 delay(100); 
  
}
void CSegment::lightDP()
{
 
 digitalWrite(DP, LOW);
 delay(100); 
  
}
void CSegment::lightNumberOne()
{
  lightA();
  lightC();
}
void CSegment::lightNumberTwo()
{
  lightA();
  lightB();
  lightG();
  lightE();
  lightD();
}
void CSegment::lightNumberThree()
{
  lightA();
  lightB();
  lightG();
  lightC();
  lightD(); 
  
}
void CSegment::lightNumberFour()
{
  lightF();
  lightG();
  lightB();
  lightC();
}
void CSegment::lightNumberFive()
{
  lightA();
  lightF();
  lightG();
  lightC();
  lightD();
  
}
void CSegment::lightNumberSix()
{
  lightA();
  lightF();
  lightG();
  lightC();
  lightD();
  lightE();
  
}
CSegment::~CSegment(void)
{
  
  
  
}
