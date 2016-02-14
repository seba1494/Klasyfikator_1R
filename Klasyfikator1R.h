 // Sebastian Wcisło gr. 2I1
 // Projekt II
 // Klasyfikatory 1R 
 // PLik nagłówkowy dla podklasy "1R"
 
#ifndef KLASYFIKATOR1R_H
#define KLASYFIKATOR1R_H
 
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Klas.h"

using namespace std;
 
 class Klasyfikator1R : virtual public  Klas 
 {
 public:
   
   vector<char> wek_p;
   vector<char> wek_e;
   int bladx;
   int kolumna;
   int znajdzkolumne();
   double oblicz_blad();
   void czy_jadalny();
   
   Klasyfikator1R(){}
   ~Klasyfikator1R()
   {
     wek_p.clear();
     wek_e.clear();
   
   }
   
};
#endif