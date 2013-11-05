#include "Arduino.h"
class CSegment
///
///@class CSegment  
///@brief CSegment odpowiada za obsługę
///Będzie to wykorzystane do wyświetlenia kodów błędów na wyświetlaczach
{
  public: 
    CSegment(void);
    ~CSegment(void);  
  protected:
    ///
    ///@brief Wyświetli jeden na wyświetlaczu segmentowym
    ///
    void displayOne(byte p_A, byte p_B, byte p_C, byte p_D, byte p_E, byte p_G, byte p_F, byte p_DF);
    ///
    ///@brief Inicjuje wyświetlacz.
    ///Prarametrami są numery pinów które są podłączone do wyświetlacza. Wywołanie będzie w metodzie CKernel::bootUp();
    void initDisplay(byte A, byte B, byte C, byte D, byte E, byte G, byte F, byte DF);
    ///
    ///@brief Przypisuje wartości pinów do zmiennych
    ///Prarametrami są numery pinów które są podłączone do wyświetlacza. Wywołanie będzie w metodzie CKernel::bootUp();
    byte initPins(byte A, byte B, byte C, byte D, byte E, byte G, byte F, byte DF);
    ///Zmienne przechowujące numery pinów wyświetlacza
    byte m_A;
    byte m_B;
    byte m_C;
    byte m_D;
    byte m_E;
    byte m_G;
    byte m_F;
    byte m_DF;
};
