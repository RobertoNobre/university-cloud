/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <iostream>
#include "Polimorphism.hpp"

using namespace std;

int main(int argc, char* argv[])
  {
  try
     {
     Polimorphism * program = new Polimorphism();
     program->go();
     delete program;
     }
  catch(exception& myException)
     {
     cerr << "There is a problem in the program " << argv[0] << ": " << myException.what() << endl;
     };
  };
  
   
/* end of file */
