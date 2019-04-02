#include <iostream>
#include <iomanip>
#include "NoAlcoholic.h"
using namespace std;

NoAlcoholic::NoAlcoholic(string name, double pricePerLiter,
		string originCoutry, string derivative, 
		double qtdSugar, double qtdColor) : Drink(name, pricePerLiter,
		originCoutry, derivative){
			this->qtdSugar = ( qtdSugar < 0.0 ) ? 0.0 : qtdSugar;
			this->qtdColor = ( qtdColor < 0.0 ) ? 0.0 : qtdColor;
}

double NoAlcoholic::getQtdSugar()const{
	return qtdSugar;
}
double NoAlcoholic::getQtdColor()const{
	return qtdColor;
}

void NoAlcoholic::print() const{
    cout<< fixed<< setprecision(2); 
    cout << "  NOME: " << getName() << endl;
    cout << "  PRECO POR LITRO: " << getPricePerLiter() << endl;
    cout << "  PAIS DE ORIGEM: " << getOriginCoutry() << endl;
    cout << "  DERIVADA A BASE DE (SABOR):  " << getDerivate() << endl;
    cout << "  QUANTIDADE DE ACUCAR:  " << getQtdSugar() << endl;
    cout << "  QUANTIDADE DE CORANTE:  " << getQtdColor() << endl;
}

int NoAlcoholic::getHash(int max_number) const{
    return ((getName().at(0) * getOriginCoutry().at(0) * getDerivate().at(0)) * 12) % max_number;
}