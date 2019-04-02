#include <iostream>
#include <cstddef> // Para usar o NULL
#include "basic.h"


/*
O construtor já foi feito para você, apenas memorize a sintaxe de
alocação de um array. Observe que a chamada "new Account[size]" vai
gerar novos objetos Account
*/

Hash::Hash(int size) {
    MAX_ITEMS = size;
    cadastro = new Drink*[size];

    for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
}
    length = 0;
}

int Hash::getLength() const{
    return length;
}

void Hash::retrieveItem(Drink& drink, bool& found){
    int hashNumber = drink.getHash(Hash::MAX_ITEMS);
    if (cadastro[hashNumber] == NULL ) { 
        found = false;
    } else {
        found = true;
        // A atribuição invoca o copy constructor.
        drink = *cadastro[hashNumber];
    }
}


/*
A chamada da função invoca o copy constructor.
*/
void Hash::insertItem(Drink drink)
{ 
    int hashNumber = drink.getHash(Hash::MAX_ITEMS);

    cadastro[hashNumber] = new Drink(drink);
    length++;
}

void Hash::deleteItem(Drink drink)
{
    int hashNumber = drink.getHash(Hash::MAX_ITEMS);
    delete cadastro[hashNumber];
    cadastro[hashNumber] = NULL;
    length--; 
}


void Hash::print() const {
    std::cout << "INI" << std::endl;
    for (int i = 0; i < MAX_ITEMS; i++) {
        Drink* acc = cadastro[i]; 
        if (acc != NULL) { 
            std::cout << i << ":" << acc->getName() <<", " << std::endl;
        }
    }
    std::cout << "FIM" << std::endl;
}