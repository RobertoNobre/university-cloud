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

double NoAlcoholic::getQtdSugar(){
	return qtdSugar;
}
void NoAlcoholic::setQtdSugar(double z){
	qtdSugar = z;
}
double NoAlcoholic::getQtdColor(){
	return qtdColor;
}
void NoAlcoholic::setQtdColor(double y){
	qtdColor = y;
}
