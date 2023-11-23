#include "grains.h"

uint64_t square(uint8_t index){
  if (index <= 0)
    return 0;
  if (index == 1)
    return 1;

  uint64_t rv = 2;
  for (int i=2; i < index; i++ ){
    rv *= 2;
  }
  return rv;
}

uint64_t total(void){
  uint64_t rv = 0;

  for (int i=0; i<65; i++){
    rv += square(i);
  }
  return rv;
}
