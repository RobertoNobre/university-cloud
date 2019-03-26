//Nome: Alexsander Matheus Nascimento    RA:212360
//Nome: Cicero Roberto Nobre de Oliveira RA: 214581


#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#include "Drink.h" 
#include "Alcoholic.h" 
#include "NoAlcoholic.h" 

void printDrinks(vector<Drink*> drink) {
    cout << "========================" << endl;
    cout << "===> BEBIDAS DEFAULT <==" << endl;
    cout << "========================" << endl;
  for (int i = 0; i < drink.size(); i++) {
    cout << i +1 << " ) " << endl;
    cout << "  NOME: " << drink[i]->getName() << endl;
    cout << "  PRECO POR LITRO: " << drink[i]->getPricePerLiter() << endl;
    cout << "  PAIS DE ORIGEM: " << drink[i]->getOriginCoutry() << endl;
    cout << "  DERIVADA A BASE DE (SABOR):  " << drink[i]->getDerivate() << endl;
  }  
}

void printAlcoholics(vector<Alcoholic*> alcoholics) {
    cout << "===================" << endl;
    cout << "===> ALCOOLICAS <==" << endl;
    cout << "===================" << endl;
  for (int i = 0; i < alcoholics.size(); i++) {
    cout << i +1 << " ) " << endl;
    cout << "  NOME: " << alcoholics[i]->getName() << endl;
    cout << "  PRECO POR LITRO: " << alcoholics[i]->getPricePerLiter() << endl;
    cout << "  PAIS DE ORIGEM: " << alcoholics[i]->getOriginCoutry() << endl;
    cout << "  DERIVADA A BASE DE (SABOR):  " << alcoholics[i]->getDerivate() << endl;
    cout << "  TEOR ALCOOLICO:  " << alcoholics[i]->getAlcoholContent() << endl;
    cout << "  TEMPO DE DESTILACAO:  " << alcoholics[i]->getTimeDes() << endl;
  }  
}

void printNoAlcoholics(vector<NoAlcoholic*> no_alcoholics) {
    cout << "=======================" << endl;
    cout << "===> NAO ALCOOLICAS <==" << endl;
    cout << "=======================" << endl;
  for (int i = 0; i < no_alcoholics.size(); i++) {
    cout << i +1 << " ) " << endl;
    cout << "  NOME: " << no_alcoholics[i]->getName() << endl;
    cout << "  PRECO POR LITRO: " << no_alcoholics[i]->getPricePerLiter() << endl;
    cout << "  PAIS DE ORIGEM: " << no_alcoholics[i]->getOriginCoutry() << endl;
    cout << "  DERIVADA A BASE DE (SABOR):  " << no_alcoholics[i]->getDerivate() << endl;
    cout << "  QUANTIDADE DE ACUCAR:  " << no_alcoholics[i]->getQtdSugar() << endl;
    cout << "  QUANTIDADE DE CORANTE:  " << no_alcoholics[i]->getQtdColor() << endl;
  }  
}

int main() {
  int NUM_DRINKS = 5;
  vector <Drink*> drinks;
  vector <Alcoholic*> alcoholics;
  vector <NoAlcoholic*> no_alcoholics;


  cout << "Vamos adicionar "<<NUM_DRINKS<<" bebidas" << endl;
  for (int i =0; i < NUM_DRINKS; i++) {
    int tipo;
    double pricePerLiter;
    string name, originCoutry, derivative;

    cout << "Tipo: (0: Bebida, 1: Alcoolica , 2: Nao Alcoolica): ";
    cin  >> tipo;
    cout << "Nome: ";
    cin  >> name;
    cout << "Preco por litro: ";
    cin  >> pricePerLiter;
    cout << "Pais de origem: ";
    cin  >> originCoutry;
    cout << "Derivada a base de (sabor): ";
    cin  >> derivative;

    if (tipo == 1) {
        double alcoholContent;
        int  timeDes;
        cout << "Teor Alcoolico: ";
        cin  >> alcoholContent;
        cout << "Tempo de destilacao: ";
        cin  >> timeDes;
        alcoholics.push_back(new Alcoholic(name, pricePerLiter, originCoutry, derivative, alcoholContent, timeDes));
    } else if (tipo == 2) {
        double qtdSugar, qtdColor;
        cout << "Quantidade de Acucar: ";
        cin  >> qtdSugar;
        cout << "Quantidade de Corante: ";
        cin  >> qtdColor;
        no_alcoholics.push_back(new NoAlcoholic(name, pricePerLiter, originCoutry, derivative, qtdSugar, qtdColor));
    } else {
        drinks.push_back(new Drink(name, pricePerLiter, originCoutry, derivative));   
    }
    cout << endl;
  }

  printDrinks(drinks);
  printAlcoholics(alcoholics);
  printNoAlcoholics(no_alcoholics);
  return 0;
}