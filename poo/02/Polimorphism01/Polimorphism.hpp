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

#ifndef POLIMORPHISM_HPP
   #define POLIMORPHISM_HPP

class Polimorphism
   {
   private:
       vector<Product*> * products;
      
   public:
       
      Polimorphism(); 
      ~Polimorphism(); 
      
      void go(void);
      void addScrew();
      void addNut();
      void listChart();
   };

#endif
   
/* end of file */
