
 // Sebastian Wcisło gr. 2I1
 // Projekt II
 // Klasyfikatory 1R 
 // Plik z definicja klasy "1R"
 
 
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include"Klasyfikator1R.h"

using namespace std;


   
    
    
    
int Klasyfikator1R::znajdzkolumne()
{


string tmp;
bool wyst;

int suma,kolumna, linijki=4062;

for(int k=2; k<46; k=k+2)
 {
  wek_p.clear();
  wek_e.clear();
   tmp=wektor.at(0);
    
    suma=0;

      if(tmp[0]=='p'){

	  wek_p.push_back(tmp[k]);
 
 } 

  else
    {
      wek_e.push_back(tmp[k]);

    }

    for( int w=1; (w<8124/2); ++w)
    {
      tmp=wektor.at(w);
      wyst=0;

  if(tmp[0]=='p')
  {


  for(unsigned int i=0; i<wek_e.size();i++)
  {
    if(tmp[k]==wek_e.at(i))
    {

      suma++;

      wyst=1;

    }
  }
  
  
  for(unsigned int i=0; i<wek_p.size(); i++)
  {
    if(tmp[k]==wek_p.at(i))
    {
    wyst=1;
      
    }
  }

  if(wyst==0)
  {
    wek_p.push_back(tmp[k]);
  }
  
    
  }


    if(tmp[0]=='e')
    {

	for(unsigned int i=0;i<wek_p.size();i++)
	{
	    if(tmp[k]==wek_p.at(i))
	    {
	      suma++;
	      wyst=1;
	  break;
	 }
    }

    for(unsigned int i=0;i<wek_e.size();i++)
    {

      if(tmp[k]==wek_e.at(i))
      {
	wyst=1;
	break;
      }
    }

    if(wyst==0)
    {
      wek_e.push_back(tmp[k]);
    }


    }
  }

  if(suma<linijki)
    {
      linijki=suma;
      kolumna=(k/2)-1;
    }


  }

return kolumna;
}






double Klasyfikator1R::oblicz_blad()
{
  vector<char> wek_p;
  vector<char> wek_e;

    kolumna=4;
    string tmp;
    bool wyst;
    double suma=0.0;
    double bladx;
    tmp=wektor.at(8124/2);

    if(tmp[0]=='p')
    {
      wek_p.push_back(tmp[(2*kolumna+2)]);

    }

      else
      {
	wek_e.push_back(tmp[(2*kolumna+2)]);
	
      }	
      
      for( int w=(8124/2) ; w < 8124; ++w)
      {
	  tmp=wektor.at(w);
	   wyst=0;

	  if(tmp[0]=='p')
	  {


	      for(unsigned int i=0; i < wek_e.size() ; ++i)
	      {
		if(tmp[(2*kolumna+2)]==wek_e.at(i))
		{
		  ++suma;
		  wyst=1;

		}
	      }
	  for(unsigned int i=0; i < wek_p.size() ; ++i)
	  {
	    if(tmp[(2*kolumna+2)]==wek_p.at(i))
	    {
	      wyst=1;

	    }
	  }
      if(wyst==0)
      {
	wek_p.push_back(tmp[(2*kolumna+2)]);
      }
     }
  
  if(tmp[0]=='e')
  {

      for(unsigned int i=0 ; i < wek_p.size() ; ++i)
      {
	if(tmp[(2*kolumna+2)]==wek_p.at(i))
	{
	  ++suma;
	  wyst=1;
	  break;
	}
      }
	  for(unsigned int i=0 ; i < wek_e.size() ; ++i)
	  {
	    if(tmp[(2*kolumna+2)]==wek_e.at(i))
	    {
	      wyst=1;
	      break;
	    }
	   }
	if(wyst==0)
	{
	  wek_e.push_back(tmp[(2*kolumna+2)]);
	}


      }

  }

  cout << suma << endl;

  bladx=suma/(8124/2);

  bladx=bladx*100;

return bladx;
}



void Klasyfikator1R::czy_jadalny()
{
  string wiersz;
  
  cin>>wiersz;
  
  if(wiersz[0]=='e')
    cout<<"jadalny\n";
  else
    cout<<" niejadalny\n";
}