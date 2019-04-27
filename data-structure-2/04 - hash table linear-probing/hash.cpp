#include <iostream>
#include <cstddef> // Para usar o NULL
#include "hash.h" 

Hash::Hash(int size) {
  MAX_ITEMS = size;
  cadastro  = new Account*[size];
  for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
  }
  length    = 0;
  lapide    = new Account(-1,-1);
}

int Hash::getLength() const{
  return length;
}

void Hash::retrieveItem(Account& account, bool& found){
    int hashNumber = account.getHash(Hash::MAX_ITEMS);
    if (cadastro[hashNumber] == NULL ) { 
        found = false;
    } else {
        found = true;
        account = *cadastro[hashNumber];
    }
}

/*
  A chamada da função invoca o copy constructor.
 */
void Hash::insertItem(Account account){  
    int hashNumber = account.getHash(Hash::MAX_ITEMS);

    while(cadastro[hashNumber] != NULL){
      hashNumber = (hashNumber+1) % Hash::MAX_ITEMS;
    }
    cadastro[hashNumber] = new Account(account);
    length++;

}

void Hash::deleteItem(Account account){
    int hashNumber = account.getHash(Hash::MAX_ITEMS);

    while(cadastro[hashNumber] != NULL) { 
      //if node found 
      if(cadastro[hashNumber]->getAccountNumber() == account.getAccountNumber()) { 
        cadastro[hashNumber] = lapide;
        length--; 
      }
      hashNumber += 1;
    } 
}

void Hash::print() const {
  std::cout << "INI" << std::endl;
  for (int i = 0; i < MAX_ITEMS; i++) {
    Account* acc = cadastro[i];    
    if (acc != NULL) { 
	std::cout << i << ":" << acc->getAccountNumber() <<", "  <<acc->getBalance() << std::endl;
      }
  }
  std::cout << "FIM" << std::endl;
}

