
#include <iostream>
#include <iomanip>
#include "Drink.h"

using namespace std;

Drink::Drink(string n, double ppl, string oc, string d) : name(n), pricePerLiter(ppl),
	originCoutry(oc), derivative(d) { }

string Drink::getName() const{
	return name;
}

double Drink::getPricePerLiter()const{
	return pricePerLiter;
}
string Drink::getOriginCoutry()const{
	return originCoutry;		
}
string Drink::getDerivate()const{
	return derivative;
}

int Drink::getHash(int max_number) const{
    return getName().at(0) * getOriginCoutry().at(0) * getDerivate().at(0) % max_number;
}

void Drink::print() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome:"<< name<< "Preco por litro:"<< pricePerLiter<< "Pais de origem:"<< originCoutry<< "Derivado de:"<<derivative<<endl;
}

Drink::Drink(const Drink& obj) {
    name = obj.name;
    pricePerLiter = obj.pricePerLiter;
    originCoutry = obj.originCoutry;
	derivative = obj.derivative;
}
