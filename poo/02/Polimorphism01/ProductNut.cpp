/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <string>
#include "ProductNut.hpp"

ProductNut::ProductNut(string name, double price, string description) : Product(name, price){
   this->description = description;
};
   
string ProductNut::getFormat(){
   return(this->description); 
};
      
/* end of file */
