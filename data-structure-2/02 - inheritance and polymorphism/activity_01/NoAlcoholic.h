#ifndef NOALCOHOLIC_H 
#define NOALCOHOLIC_H 

#include "Drink.h"

class NoAlcoholic :public Drink{
	
	private :
		double qtdSugar;
		double qtdColor;
	public	:
		NoAlcoholic(string name = "", double pricePerLiter = 0.0,
		string originCoutry = "", string derivative = "", 
		double qtdSugar = 0.0, double qtdColor = 0.0);

	 	double getQtdSugar();
		void setQtdSugar(double z);
		double getQtdColor();
		void setQtdColor(double y);
		
};

#endif


