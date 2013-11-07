#ifndef _H_SEGMENT_
#define _H_SEGMENT_
#include "Arduino.h"
///
///@class CSegment
///@brief Odpowiada za obsługę i wyświetlanie danych na wyświetlaczach segmentowych.
///Note: Datasheet: http://pdf1.alldatasheet.com/datasheet-pdf/view/228839/ETC2/FND500.html
///Normalnie zainicjowany wyświetlacz jest na pinach 13,12,11,10,9,8,7,6 w CKernel
class CSegment
{
  public:
  CSegment(void);
  ~CSegment(void);
  protected:
  ///
  ///@brief Metoda inicjuje piny na wyjście, aby było możliwe korzystanie z wyswietlacza
  ///
  void initPins(byte p_a, byte p_b, byte p_c, byte p_d, byte p_e, byte p_f, byte p_g, byte p_DP);
  ///
  ///Zmienne przechowujące wartości pinów
  ///
  byte a;
  byte b;
  byte c;
  byte d;
  byte e;
  byte f;
  byte g;
  byte DP;
  ///
  ///@brief Metoda zapala segment A
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightA();
  ///
  ///@brief Metoda zapala segment B
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightB();
  ///
  ///@brief Metoda zapala segment C
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightC();
  ///
  ///@brief Metoda zapala segment D
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightD();
  ///
  ///@brief Metoda zapala segment D
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightE();
  ///
  ///@brief Metoda zapala segment F
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightF();
  ///
  ///@brief Metoda zapala segment G
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightG();
  ///
  ///@brief Metoda zapala segment DP
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightDP(); 
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się jeden
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberOne();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się Dwa
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberTwo();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się trzy
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberThree();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się cztery
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberFour();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się pięć
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberFive();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się Sześć
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberSix();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się siedem
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberSeven();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się osiem
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberEight();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się dziewięć
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberNine();
  ///
  ///@brief Metoda zapala segmenty aby wyświetliło się zero
  ///UWAGA: metoda dostowsowana do wyświetlaczy z wspólną anodą.
  ///Jeśli stan wysoki to gasi, jeśli niski to zapali
  void lightNumberZero();
  
};


#endif //_H_SEGMENT_
