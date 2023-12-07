#include "grains.h"

uint64_t square(uint8_t index){
  if ((index <= 0) || (index > 64))
    return 0;

  uint64_t rv = 1;
  return(rv<<(index-1));
}

uint64_t total(void){
  uint64_t rv = 0;

  for (int i=0; i<65; i++){
    rv += square(i);
  }
  return rv;
}
