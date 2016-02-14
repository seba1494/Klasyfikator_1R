 // Sebastian Wcisło gr. 2I1
 // Projekt II
 // Klasyfikatory 1R 
 // Plik główny



#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Klas.h"
#include "Klasyfikator1R.h"

using namespace std;

int main()
{
  
bool wyjscie = 0;
int wybor;

Klasyfikator1R all;

while(!wyjscie)
  
{
  
	
    cout<<"   Wcisnij numer operacji ktora chcesz wykonac\n\n";
    cout<<"1. Jesli chcesz otworzyc plik tekstowy z danymi"<<"\n";
    cout<<"2. Jesli chcesz chcesz porownac kolumny i wybrac ta z najmniejsza iloscia bledow\n";
    cout<<"3. Jesli chcesz porownac kolumne z reszta danych w naszym pliku i wyswietlic blad\n";
    cout<<"4. Sprawdz czy ten grzyb jest jadalny\n";
    cout<<"5. Jesli chcesz zakonczyc dzialanie tego programu\n";

    cin >> wybor;
   
    switch(wybor)

    {
      case 1:
      {
	
	all.wczytaj();
	
	wyjscie=false;
		
      }
	break;
      
      case 2:
      {
	
	cout<<all.znajdzkolumne()<<"\n";
	
      }
	break;
      
      case 3: 
      {
	cout<<all.oblicz_blad();
	cout<<"%\n";
      }
	break;
      case 4:
      {
	all.czy_jadalny();
      }
      break;
      case 5:
      {
	char affirmative;
	
	cout<<"Czy na pewno ?(T/N)";
	
	cin>> affirmative;
	
	if (affirmative=='T')
	
	  wyjscie=1;
	
	else
	  
	  wyjscie=0;
      }
      break;
    }
}

return 0;
}

