/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <iostream>
#include <string>
#include "Menu.hpp"

#ifndef MENUTEST_HPP
   #define MENUTEST_HPP

using namespace std;

class MenuTest
   {
   private:
       
      string programName = "";
      
      void doSomething01(void);
      void doSomething02(void);
      void doSomething03(void);
      void doDefault(void);
      
   public:
       
      MenuTest(string programName); 
      void go(void);
   };
   
#endif

/* end of file */
