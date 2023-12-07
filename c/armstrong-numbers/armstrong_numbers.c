#include "armstrong_numbers.h"

// Armstrong number is a number such that it is the sum of each of its
// digits raised to the power of the number of digits.
//
// 9   = 9^1 = 9
// 153 = 1^3 + 5^3 + 3^3 = 3 + 125 + 27 = 153 

int _number_of_digits(int);
int _number_of_digits(int candidate){
  int power = 0;
  while( (int)(candidate/10) != 0){
    candidate = (int)(candidate / 10);
    power++;
  }
  return(power+1);
}

int _ipow(int, int);
int _ipow(int val, int pow){
  int rv = 1;
  for (int i=0; i<pow; i++){
    rv *= val;
  }
  return(rv);
}

bool is_armstrong_number(int candidate){
  int digits = _number_of_digits(candidate);
  int testCandidate = 0;
  
  int tmp = candidate;
  for (int i = 0; i < digits; i++){
    testCandidate += _ipow(tmp % 10, digits);
    tmp = (int)(tmp / 10);
  }
  return(testCandidate == candidate);
}
