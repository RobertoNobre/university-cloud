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

#ifndef PRODUCTNUT_HPP
   #define PRODUCTNUT_HPP

class ProductNut : public Product
   {
   private:
      string description;
      
   protected:
      string getFormat();
      
   public:
      ProductNut(string name, double price, string description);
   };

#endif
   
/* end of file */
