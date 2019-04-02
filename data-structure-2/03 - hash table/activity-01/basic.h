#ifndef HASH_H
#define HASH_H


#include <iostream>
#include <string>
#include "Drink.h"


class Hash {
 private:
  int       MAX_ITEMS;
  int       length;

  Drink** cadastro;
  
  
 public:

  Hash(int size = 20); 

  int getLength() const;

  void retrieveItem(Drink& drink, bool& found);

 
  void insertItem(Drink drink);

 
  void deleteItem(Drink drink);  


  void print() const;

  
};

#endif