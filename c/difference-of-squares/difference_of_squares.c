#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
  unsigned int sos = 0;

  for (unsigned int i=0; i<= number; i++){
    sos += i*i;
  }
  
  return sos;
}

unsigned int square_of_sum(unsigned int number){
  unsigned int sum = 0;

  for (unsigned int i=0; i<= number; i++){
    sum += i;
  }

  unsigned int square = sum * sum;
  return (square);
}

unsigned int difference_of_squares(unsigned int number){
  unsigned int rv = (square_of_sum(number)) -
                    (sum_of_squares(number)); 
  return rv;
}

