#include <iostream>
#include "time.h"
using namespace std;

int main() {
  /*
    Neste primeiro objeto, passamos todos os par�metros. Em outras
    palavras, nenhum valor padr�o foi usado.
   */

  Time t1(23, 59, 59);
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);

  t1.print();       // 12:30:15
  cout << "Hour is "   << t1.getHour()   << endl;
  cout << "Minute is " << t1.getMinute() << endl;
  cout << "Second is " << t1.getSecond() << endl;

  /*
    Nesta segunda inst�ncia, todos os valores padr�o foram usados.
   */
  Time t2;
  t2.print();  // 00:00:00
  t2.setTime(1, 2, 3);
  t2.print();  // 01:02:03

  /*
    Nesta terceira inst�ncia, usamos o padr�o apenas para minutos e
    segundos.
   */
  Time t3(12);
  t3.print();  // 12:00:00

  // Nesta quarta inst�ncia, vamos fazer um teste com o seu m�todo
  // nextSecond. Verifique se o que est� sendo impresso � o valor que
  // eu indico abaixo.
  Time t4(23, 59, 58);
  t4.print();  // 23:59:58
  t4.nextSecond();
  t4.print();  // 23:59:59
  t4.nextSecond();
  /* Cuidado com o print abaixo, veja o que ele est� retornando */
  t4.print();  // 00:00:00

  /*
    A classe que estamos criando n�o possui valida��o da
    entrada. Nesse caso, uma hora inv�lida pode ser impressa
  */
  Time t5(25, 61, 99); // Valores fora do intervalo
  t5.print();  // 25:61:99

  /*
    ToDo: Altere a classe time.cpp para fazer valida��o da
    entrada. Caso o usu�rio queira inserir um valor x+n para um
    atributo cujo intervalo � [0..x], insira o valor x ao inv�s de
    x+n.

    Al�m disso, caso o usu�rio queira inserir um valor negativo,
    insira zero.
   */
}
