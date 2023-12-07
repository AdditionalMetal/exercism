#include "square_root.h"

// No guidance on function signature...
//  Tests are lsited as comparing uint16_t, but tests are perfect squares and end at 255...
//  Not sure what the creaters of this exercise want...

uint16_t square_root(uint16_t radicand){
  for (uint8_t i=0; i < UCHAR_MAX; i++){
    if ( i*i == radicand)
      return (uint16_t)i;
  }
  return (uint16_t)0;
}
