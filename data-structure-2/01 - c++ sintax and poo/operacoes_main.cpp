/*
  Agora vamos criar o arquivo que inicia a execu��o do programa. Este
  c�digo enviar� informa��es para a tela do usu�rio, o que exige a
  biblioteca iostream. Ele tamb�m far� uso da classe Operations que
  est� no arquivo operacoes.h. Nesse caso, precisamos incluir tamb�m
  esse arquivo.
 */
#include <iostream>
#include "operacoes.h"

int main() {
  /*
    Usaremos number1 e number2 para receber os dados do terminal.
   */
  int number1;
  int number2;

  /*
    Veja como declaramos uma inst�ncia da classe Operations. O nome da
    classe � um Tipo Abstrato de Dados. A partir desse momento, voc�
    pode chamar os m�todos das classes.
   */
  Operations op;

  /*
    Aprenda a ler do terminal e a enviar as mensagens que ser�o vistas
    pelo usu�rio. Isso � muito diferente do que o que voc� fazia no
    terminal.
   */
  std::cout << "Digite o primeiro n�mero: ";
  std::cin >> number1;

  std::cout << "Digite o segundo n�mero: ";
  std::cin >> number2;

  /*
    Vamos usar um dos m�todos da classe, que � o m�todo setNumber.
   */
  op.setNumbers(number1, number2);


  /*
    Agora vamos invocar os outros m�todos. Veja como � invocada a soma
    e enviada para a sa�da padr�o.
   */
  std::cout << "Soma:            " << op.sum()  << std::endl;

  /* Apenas descomente a linha abaixo para enviar a subtra��o para a sa�da padr�o */
  std::cout << "Subtra��o:       " << op.sub()  << std::endl;

  /* Agora fa�a todo o resto */
  std::cout << "Multiplica��o:   " << op.mul()  << std::endl;
  std::cout << "Divis�o Inteira: " << op.idiv()  << std::endl;
  std::cout << "Divis�o Real:    " << op.fdiv()  << std::endl;
  std::cout << "Resto:           " << op.res()  << std::endl;

  return 0;
}

/*
  Agora compile e execute o seu programa.

g++ operacoes*.cpp
./a.out

*/
