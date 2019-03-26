
#include <iostream>
#include "Drink.h"

using namespace std;

Drink::Drink(string n, double ppl, string oc, string d) : name(n), pricePerLiter(ppl),
	originCoutry(oc), derivative(d) { }
//-------------------------------NOME DA BEBIDA------------------------------------------//
string Drink::getName(){
	return name;
}
void Drink::setName(string a){
 name = a;
}

//-------------------------------PRE�O DA BEBIDA------------------------------------------//
double Drink::getPricePerLiter(){
	return pricePerLiter;
}
void Drink::setPricePerLiter(double b){
	pricePerLiter = b;
}

//-------------------------------PAIS DE ORIGEM-----------------------------------------------//
string Drink::getOriginCoutry(){
	return originCoutry;		
}
void Drink::setOriginCoutry(string c){
	originCoutry = c;
}
		
//-------------------------------DE ONDE � DERIVADA A BEBIDA---------------------------------------//
string Drink::getDerivate(){
	return derivative;
}
void Drink::setDerivate(string d ){
	derivative = d;
}

