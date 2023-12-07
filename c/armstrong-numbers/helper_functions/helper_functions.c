#include "helper_functions.h"

int _number_of_digits(int candidate){
  int power = 0;
  while( (int)(candidate/10) != 0){
    candidate = (int)(candidate / 10);
    power++;
  }
  return(power+1);
}

int _ipow(int val, int pow){
  int rv = 1;
  for (int i=0; i<pow; i++){
    rv *= val;
  }
  return(rv);
}
