#include "CSegment.h"

CSegment::CSegment(void)
{
  
  
}
void CSegment::displayOne(byte p_A, byte p_B, byte p_C, byte p_D, byte p_E, byte p_G, byte p_F, byte p_DF)
{
  
  digitalWrite(p_A, LOW);
  digitalWrite(p_B, HIGH);
  digitalWrite(p_C, HIGH);
  digitalWrite(p_D, LOW);
  digitalWrite(p_E, LOW);
  digitalWrite(p_F, LOW);
  digitalWrite(p_G, LOW);
  digitalWrite(p_DF, HIGH);
}
void CSegment::initDisplay(byte A, byte B, byte C, byte D, byte E, byte G, byte F, byte DF)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);  
  pinMode(C, OUTPUT);  
  pinMode(D, OUTPUT);  
  pinMode(E, OUTPUT);  
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(DF, OUTPUT);
}
byte CSegment::initPins(byte A, byte B, byte C, byte D, byte E, byte G, byte F, byte DF)
{
  m_A = A;
  m_B = B;
  m_C = C;
  m_D = D;
  m_E = E;
  m_G = G;
  m_F = F;
  m_DF = DF;
  return A,B,C,D,E,G,F,DF;
}
CSegment::~CSegment(void)
{
  
  
}
