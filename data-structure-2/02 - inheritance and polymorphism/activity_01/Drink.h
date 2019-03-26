#ifndef DRINK_H
#define DRINK_H

using namespace std;
#include <string>

class Drink {
	
	private :
		string name;
		double pricePerLiter;		
		string originCoutry;
		string derivative;
		
		
	public :
		Drink(string name = "", double pricePerLiter = 0.0,
		string originCoutry = "", string derivative = "");
		
		string getName();
		void setName(string a);
		
		double getPricePerLiter();
		void setPricePerLiter(double b);
		
		string getOriginCoutry();
		void setOriginCoutry(string c);
		
		string getDerivate();
		void setDerivate(string d );
		
};
		
		
#endif	
	
	
	
