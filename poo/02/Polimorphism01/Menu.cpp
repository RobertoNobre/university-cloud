/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <string>
#include <vector>
#include <iostream>

#include "Menu.hpp"

using namespace std;

Menu::Menu(string title, vector<string> options)
   {
   this->title = title;
   this->options = options;
   };
   
const int Menu::getChoice()
   { 
   int result = -1;
   int count;
   string buffer;
   
   vector<string>::iterator scan = options.begin();
   
   while((result < 0) || (result > options.size() - 1))
      {
      scan = options.begin();
      count = 0;
      cout << "\n------------------------------\n" 
           << title 
           << "\n------------------------------" << endl;

      while(scan != options.end())
         {
	     cout << count << ". " << *scan << "\n";
         scan++;
         count++;
         }; 
      
      cout << "------------------------------\n" 
           << "Escolha entre 0 e " << (count - 1) 
           << "\n------------------------------" << endl;
           
      buffer = "0";
      getline(cin, buffer);
      result = stoi(buffer);
      };
   
   return (result); 
   };
  
   
/* end of file */
