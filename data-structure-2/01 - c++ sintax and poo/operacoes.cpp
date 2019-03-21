/*
  No arquivo operacoes.h, n�s declaramos a exist�ncia de uma classe,
  que � um molde para cria��o de v�rias inst�ncias (objetos). Os
  atributos est�ticos e o comportamento da classe j� foram definidos,
  mas o c�digo que realmente implementa esse comportamento ainda n�o
  foi adicionado. Faremos isso neste arquivo.
 */

/*
  Para podermos escrever o c�digo da classe Operations, precisamos
  "ver" a declara��o da classe. Nesse caso, precisamos usar a diretiva
  "include" e indicar em qual arquivo a classe se encontra.
 */
#include "operacoes.h"

/*
  Para escrever um m�todo da classe Operations precisamos da seguinte sintaxe:



  <Tipo de Retorno> <Nome da Classe><Operador de resolu��o de escopo><Cabe�alho da Classe>



  <Tipo de Retorno>: deve ser o mesmo que foi declarado na defini��o
  da classe. Observe, por exemplo, que o tipo de retorno do m�todo
  "sum" � "int".

  <Nome da Classe>: depois do tipo de retorno, deve vir o nome da
  classe. No nosso caso, "Operations".

  <Operador de resolu��o de escopo>: serve para dizer quem � o "dono"
  do m�todo que estamos escrevendo. O operador � simplesmente dois
  dois-pontos. Ele serve para dizer que o m�todo pertence a
  "Operations".

  <Ap�s colocar o operador "::", basta repetir o cabe�alho da forma
  exata que estava na declara��o da classe no arquivo .h.
 */
int Operations::sum() const {
  /*
    Voc� deve ter notado que o m�todo sum obedece � sintaxe. Caso
    esteja em d�vida, cheque novamente.

    Agora, sabemos que estamos em um m�todo que pertence � classe
    Operations. Nesse caso, os atributos da classe s�o vis�veis e
    podem ser acessados. Abaixo n�s estamos simplesmente somando esses
    atributos.
   */
  return number1 + number2;
}

/*
  Descomente o c�digo abaixo. Esta � a implementa��o do m�todo sub,
  que subtrai os dois atributos e devolve o resultado.
 */

int Operations::sub() const {
   return number1 - number2;
}

/*
  Descomente as declara��es abaixo e implemente o que precisa ser
  feito para o c�digo funcionar.
 */

int Operations::mul() const {
return number1 * number2;
}

int Operations::idiv() const {
    return static_cast<int>(number1/number2);
}

float Operations::fdiv() const{
    return static_cast<float>(number1/number2);
}

int Operations::res() const{
    return number1 % number2;
}



/*
   O m�todo
 */
void Operations::setNumbers(int a, int b){
  number1 = a;
  number2 = b;
}
