#include "isogram.h"
#include <stddef.h>

bool is_isogram(const char phrase[]){

  if ( phrase == NULL) // null pointer needs special handling
    return false;

  // Algorithm...
  //  Keeping count of each letter (26) and then checking if any is greater than two...
  //  Adds space cost of storing counts, and a second bounded time check of duplicates...
  char counts[26];
  for (int i =0; i<26; i++){
    counts[i] = 0;
  }

  // count each letter...
  int i = 0;
  while ( phrase[i] != 0 && i < 27){
    char letter = phrase[i];

    if ( 'a' <= letter && letter <= 'z' ){
      counts[letter - 'a']++;
    }
    if ( 'A' <= letter && letter <= 'Z' ){
      counts[letter - 'A']++;
    }
    i++;
  }

  // check for duplicates...
  for ( int i=0 ; i < 26; i++){
    if (counts[i] > 1)
      return false;
  }

  return true;
}
