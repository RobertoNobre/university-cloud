#include <iostream>
#include <cstddef> // Para usar o NULL
#include "hash.h" 


/*
  O construtor já foi feito para você, apenas memorize a sintaxe de
  alocação de um array. Observe que a chamada "new Account[size]" vai
  gerar novos objetos Account
 */
Hash::Hash(int size) {
  MAX_ITEMS = size;
  cadastro  = new Account*[size];

  /* 
     É sempre interessante garantir que os valores serão inicializados com NULL.
   */
  for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
  }
  length   = 0;
}

int Hash::getLength() const
{
  return length;

}

void Hash::retrieveItem(Account& account, bool& found){
  int location = account.getHash(MAX_ITEMS);
  if(cadastro[location] == NULL){
    found = false;
  }else{
    found = true;
    account = *cadastro[location];
  }


  // Todo Implemente o método para obter um valor de um lugar.
}


/*
  Agora use explicitamente o copy constructor para colocar o elemento
  que veio por parâmetro na posição correta. Em outras palavras, use: 

  new Account(account);
 */
void Hash::insertItem(Account account){  
  int location = account.getHash(MAX_ITEMS);
  cadastro[location] = new Account(account);
  length++;
}

void Hash::deleteItem(Account account){
  int location = account.getHash(MAX_ITEMS);
  delete cadastro[location];
  cadastro[location] = NULL;
  length--;
}


/*
  O método print já foi implementado para você.
 */
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