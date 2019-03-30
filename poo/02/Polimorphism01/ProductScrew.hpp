/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <iostream>
#include <vector>

#include "Product.hpp"

using namespace std;

#ifndef PRODUCTSCREW_HPP
   #define PRODUCTSCREW_HPP

class ProductScrew : public Product
   {
   private:
      string description;
      
   protected:
      string getFormat();
      
   public:
      ProductScrew(string name, double price, string description);
   };

#endif
   
/* end of file */
