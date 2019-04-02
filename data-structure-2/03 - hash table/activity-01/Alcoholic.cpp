#include <iostream>
#include <iomanip>
#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double pricePerLiter,
		string originCoutry, string derivative, 
		double alcoholContent, int timeDes) : Drink(name, pricePerLiter,
		originCoutry, derivative) {
			this->alcoholContent = ( alcoholContent < 0.0 ) ? 0.0 : alcoholContent;
			this->timeDes = ( timeDes < 0.0 ) ? 0.0 : timeDes;
}

double Alcoholic::getAlcoholContent()const{
	return alcoholContent;
}
void Alcoholic::setAlcoholContent(double x){
	alcoholContent = x;
}
int Alcoholic::getTimeDes()const{
	return timeDes;
}
void Alcoholic::setTimeDes(int t){
	timeDes = t;
}

void Alcoholic::print() const{
    cout<< fixed<< setprecision(2);
    cout << "  NOME: " << getName() << endl;
    cout << "  PRECO POR LITRO: " << getPricePerLiter() << endl;
    cout << "  PAIS DE ORIGEM: " << getOriginCoutry() << endl;
    cout << "  DERIVADA A BASE DE (SABOR):  " << getDerivate() << endl;
    cout << "  TEOR ALCOOLICO:  " << getAlcoholContent() << endl;
    cout << "  TEMPO DE DESTILACAO:  " << getTimeDes() << endl;
}

int Alcoholic::getHash(int max_number) const {
    return ((getName().at(0) * getOriginCoutry().at(0) * getDerivate().at(0)) * 12) % max_number; 
}