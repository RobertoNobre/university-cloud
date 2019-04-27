#include <iostream>
#include "hash.h"
#include "account.h"

using namespace std;



int main(){
  Hash hash;
    hash.print();
  int numbers [7] = {12704, 31300, 1234, 49001, 52202, 65606, 91234};
  int balances[7] = {10,    100,   1000,     5,    15,    20, 25   }; 
	    
  for (int i = 0; i < 7; i++) {
    Account account = Account(numbers[i], balances[i]);
    hash.insertItem(account);

  }

  hash.print();
  
  cout << "------------------------------" <<  endl;

  /*
    Para procurar uma determinada conta no banco, devemos
    primeiramente criar a região de memória onde ela será alocada.
   */
  Account account(12704);
  bool     found = false;

  hash.retrieveItem(account, found);
  cout << account.getAccountNumber() << " -> " << found << endl;

  cout << "------------------------------" <<  endl;

  hash.deleteItem(account);

  cout << "------------------------------" <<  endl;

  hash.print();
  cout << "Fim Original" << endl;

  /*
    Verificando a presença da lápide
   */
  Account account1(1234);
  hash.deleteItem(account1);
  Account account2(91234); // Ainda deve ser achada, mesmo na ausência
			  // de 1234
  cout << "------------------------------" <<  endl;  
  hash.retrieveItem(account2, found);
  cout << account2.getAccountNumber() << " -> " << found << endl;
  
}
