#include "CKernel.h"
//TODO: Obsługa ekranów i pamięci, podstawowe programy, wiersz poleceń
//Przepisać wysyłanie sygnałów do czystego C
#include "CVoltage.h"
CKernel kernel;
void setup()
{
 kernel.boot();
}


void loop()
{
 kernel.startSystem();

  
}
