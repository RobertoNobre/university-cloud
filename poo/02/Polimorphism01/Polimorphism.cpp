/* Unicamp - University of Campinas
   FT - School of Technology
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2019
*/

#include <iostream>
#include <vector>

#include "Polimorphism.hpp"
#include "Menu.hpp"
#include "Product.hpp"
#include "ProductScrew.hpp"
#include "ProductNut.hpp"

using namespace std;

Polimorphism::Polimorphism(){
   this->products = new vector<Product *>();
}

Polimorphism::~Polimorphism(){}

void Polimorphism::go(){
   vector<string> options({ "Exit Program", "Add Screw", "Add Nut", "List Chart" });
   Menu* menu = new Menu("Main Menu", options);
   
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << endl;
   
   int choice = -1;
   
   do{
      choice = menu->getChoice();
   
      switch(choice){
 	     case 1: { addScrew();  }; break;
 	     case 2: { addNut();    }; break;
 	     case 3: { listChart(); }; break;
      };

   } while(choice);
   
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
   cout << endl;
};

void Polimorphism::addScrew(){
   products->push_back(new ProductScrew("Screw 01", 0.1, "1Kg package"));
};

void Polimorphism::addNut(){
   products->push_back(new ProductNut("Nut 01", 0.1, "1Kg package"));
};

void Polimorphism::listChart(){
   vector<Product *>::iterator scan = products->begin();
    
   while(scan != products->end()){
      cout << (*scan)->getName() << " \t " << (*scan)->getFormat() << (*scan)->getPrice() << endl;
      scan++;
   };
};
    
/* end of file */
