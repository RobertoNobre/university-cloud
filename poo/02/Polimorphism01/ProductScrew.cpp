/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <string>
#include "ProductScrew.hpp"

ProductScrew::ProductScrew(string name, double price, string description) : Product(name, price){
   this->description = description;
};
   
string ProductScrew::getFormat(){
   return(this->description); 
};
      
/* end of file */
