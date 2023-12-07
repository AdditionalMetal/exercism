#include "hamming.h"
#include <stddef.h>

int compute(const char *lhs, const char *rhs){
  int hamming = 0;

  if (lhs == NULL || rhs == NULL) // valid strings?
    return -1;

  while ( *lhs != 0 || *rhs != 0){
    if  ( *lhs == 0 || *rhs == 0){ // length mismatch
      return -1;
    }

    if ( *lhs != *rhs ){
      hamming++;
    }
    
    lhs++; rhs++;
  }
  return hamming;
}

