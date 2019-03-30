/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#ifndef MENU_HPP

#define MENU_HPP

#include <string>
#include <vector>

using namespace std;

class Menu
   {
   private:
      string title;
      vector<string> options;

   public:
      Menu(string title, vector<string> options);
      const virtual int getChoice();
   };
   
#endif
   
/* end of file */
