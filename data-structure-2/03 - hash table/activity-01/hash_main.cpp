#include <iostream>
#include "basic.h"
#include "Drink.h"
#include "Alcoholic.h"
#include "NoAlcoholic.h"

using namespace std;

int main(){
    Hash hash;
    hash.print();

    string names[5] = {"Whisky", "Refrigerante", "Vodka", "Vinho", "Agua"};
    double pricePerLiter[5] = {10, 100, 1000, 5, 25 }; 
    string originCoutry[5] = {"Brazil", "Paris", "Alemanha", "EUA", "Africa"};
    string derivative[5] = {"Mel", "Acucar", "alcool", "Uva", "H20"};
    double alcoholContent[5] = {30, 0, 20, 10, 0};
    int timeDes[5] = {18, 0, 10, 1, 0};
    double qtdSugar[5] = {0, 30, 0, 10, 0};
    double qtdColor[5] = {10, 40, 0, 13, 0};

    for (int i = 0; i < 5; i++) {
        if ((i % 2) == 0) {
            NoAlcoholic NoAlcoholic(names[i], pricePerLiter[i], originCoutry[i], derivative[i], qtdSugar[i], qtdColor[i]);
            hash.insertItem(NoAlcoholic);
        } else {
            Alcoholic Alcoholic(names[i], pricePerLiter[i], originCoutry[i], derivative[i], alcoholContent[i], timeDes[i]);
            hash.insertItem(Alcoholic);
        }
    }

    cout << "------------------------------" << endl;

  hash.print();

  bool found = false;
  
  Alcoholic Alcoholic(names[0], 0, "Brazil", derivative[0], alcoholContent[0], timeDes[0]);

  hash.retrieveItem(Alcoholic, found);
  cout << Alcoholic.getName() << " nomes " << " -> " << found << endl;
  Alcoholic.print();

  cout << "------------------------------" <<  endl;

  hash.deleteItem(Alcoholic);

  cout << "------------------------------" <<  endl;
  
  NoAlcoholic NoAlcoholic(names[0], pricePerLiter[0], originCoutry[0], derivative[0], qtdSugar[0], qtdColor[0]);
  found = false;

  hash.retrieveItem(NoAlcoholic, found);
  cout << NoAlcoholic.getName() << " -> " << found << endl;
  NoAlcoholic.print();

  cout << "------------------------------" <<  endl;

  hash.deleteItem(NoAlcoholic);

  cout << "------------------------------" <<  endl;

  hash.print();
  cout << "Fim" << endl;  
}
