/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <iostream>
#include <vector>

#include "Menu.hpp"
#include "MenuTest.hpp"

using namespace std;

MenuTest::MenuTest(string programName){
   this->programName = programName;
}

void MenuTest::go(){
   vector<string> options({ "Exit Program", "Do something 1", "Do something 2", "Do something 3", "Do anything" });
   Menu* menu = new Menu("Main Menu", options);
   
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << "Program " << programName << endl;
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << endl;
   
   int choice = -1;
   
   do {
      choice = menu->getChoice();

      switch(choice){
 	     case 1: { doSomething01(); }; break;
 	     case 2: { doSomething02(); }; break;
 	     case 3: { doSomething03(); }; break;
         default:{ doDefault();    }; break;
         };
      } while(choice);
   
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << "Program " << programName << " finished" << endl;
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << endl;
   };

void MenuTest::doSomething01(){
   cout << "Doing something 1..." << endl;
   cout << "something 1 done !" << endl;
   };

void MenuTest::doSomething02(){
   cout << "Doing something 2..." << endl;
   cout << "something 2 done !" << endl;
   };

void MenuTest::doSomething03(){
   cout << "Doing something 3..." << endl;
   cout << "something 3 done !" << endl;
   };
   
void MenuTest::doDefault(){
   cout << "Doing default operation..." << endl;
   cout << "Default operation done !" << endl;
   };
   
/* end of file */
