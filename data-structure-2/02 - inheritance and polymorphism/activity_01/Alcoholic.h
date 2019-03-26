#ifndef ALCOHOLIC_H
#define ALCOHOLIC_H

#include "Drink.h" 


class Alcoholic : public Drink {  
  
 private :

 	double alcoholContent;
  	int  timeDes;
  	
 public:
  	Alcoholic(string name = "", double pricePerLiter = 0.0,
		string originCoutry = "", string derivative = "", 
		double alcoholContent = 0.0, int timeDes = 0);

	double getAlcoholContent();
	void setAlcoholContent(double x);
	
	int getTimeDes();
	void setTimeDes(int t);
	
};
	
#endif
 	


