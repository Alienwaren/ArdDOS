#include "CKernel.h"
//TODO: Obsługa ekranów i pamięci, podstawowe programy, wiersz poleceń
CKernel kernel;
void setup()
{
 kernel.boot();
}


void loop()
{
  kernel.startSystem();
  
  
}
