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
		
		string getName()const;
		double getPricePerLiter()const;
		string getOriginCoutry()const;
		string getDerivate()const;

    	virtual void print()const;
		virtual int getHash(int max_number) const;
		Drink(const Drink& obj);
		
};
		
		
#endif	
	
	
	
