 // Sebastian Wcisło gr. 2I1
 // Projekt II
 // Klasyfikatory 1R 
 // Plik z definicja nadklasy "Klas"

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Klas.h"

using namespace std;




void Klas::wczytaj()
{
  fstream plik;
  plik.open("grzyby.txt", ios::in );
  
  string wiersz;
      
    for(int i=0; i<8124;++i)
    {

	plik >>wiersz;

	  wektor.push_back(wiersz);

	    cout << wektor.at(i) << endl;
	  }
	  
  plik.close();

}
  
  
  
  
  
 
