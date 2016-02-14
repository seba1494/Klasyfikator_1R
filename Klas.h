 // Sebastian Wcisło gr. 2I1
 // Projekt II
 // Klasyfikatory 1R
 // PLik z deklaracja nadklasy "Klas"
#ifndef KLASYFIKATOR_H
#define KLASYFIKATOR_H
 
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Klas
{

public:
  vector < string> wektor;
  
    
    void wczytaj();
    Klas(){}
    ~Klas()
    {
      wektor.clear();
    }
};
#endif