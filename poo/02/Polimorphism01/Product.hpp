/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

using namespace std;

class Product
   {
   private:
      string name;
      double price;

   public:
      Product(string name, double price);
      string getName(void);
      double getPrice(void);
      virtual string getFormat(void) = 0;
   };
   
#endif
   
/* end of file */
