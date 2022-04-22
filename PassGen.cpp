#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


char c;
int r,b,g,p,ty,tpo;  


char num = rand() % 10 + 1;




char y;



// Generates random password
// https://www.cplusplus.com/forum/general/130902/  used 
// this for alphabet generation

int main() {
  srand(time(NULL));
  for (int i=0; i<num; i++)
    {    r = rand() % 30;   // generate a random number
          c = 'a' + r;            // Convert to a character from a-z. Basically adds that r's number to a, ie 1-26 / a-b
          cout << c;
    }
    for (int z=0; z<num; z++)
    {
      int randgenOne = rand() % 1000;
      int randMult = rand() % 10 + 1;
      b = rand() % randgenOne * randMult / 2;
      cout << b;
    }
  int booepo = rand() % 10 + 4;

    for (int yuop=0; yuop<booepo; yuop++)
    {    p = rand() % 26;   
          y = 'a' + p;           
          cout << y;
    }
} 

// haven't used this for long term, can't really remember much