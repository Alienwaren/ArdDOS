#include "Arduino.h"
///
///@class CCommand zapewnia obsługę i przetwarzanie wprowadzonych komend przez użytkownika
///
class CCommand

{
  public:
  
  CCommand(void);
  ~CCommand(void);
  protected:
  ///
  ///@brief Metoda sprawdza wprowadzoną komendę i odwołuje się do odpowiedniej klasy w celu wykonania polecenia
  ///
  char checkCommand(char insertedCommand[]);
  
  
  
  
  
};
