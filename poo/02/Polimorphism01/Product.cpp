/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <string>
#include "Product.hpp"

Product::Product(string name, double price)
   {
   this->name = name;
   this->price = price;
   };
   
string Product::getName()
   {
   return(this->name); 
   };
   
double Product::getPrice()
   {
   return(this->price); 
   };
   
/* end of file */
