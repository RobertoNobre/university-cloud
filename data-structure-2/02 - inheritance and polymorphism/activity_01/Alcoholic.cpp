#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double pricePerLiter,
		string originCoutry, string derivative, 
		double alcoholContent, int timeDes) : Drink(name, pricePerLiter,
		originCoutry, derivative) {
			this->alcoholContent = ( alcoholContent < 0.0 ) ? 0.0 : alcoholContent;
			this->timeDes = ( timeDes < 0.0 ) ? 0.0 : timeDes;
}

double Alcoholic::getAlcoholContent(){
	return alcoholContent;
}
void Alcoholic::setAlcoholContent(double x){
	alcoholContent = x;
}
int Alcoholic::getTimeDes(){
	return timeDes;
}
void Alcoholic::setTimeDes(int t){
	timeDes = t;
}
