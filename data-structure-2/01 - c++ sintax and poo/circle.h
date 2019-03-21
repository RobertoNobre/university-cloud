/*
   Voc� j� deve saber que as classes s�o caixas com tr�s
   compartimentos:

   1 - Nome: apenas um identificado para a classe

   2 - Atributos: vari�veis globais que s�o vistas por todos os
   m�todos dentro da classe.

   3- M�todos: conjunto de fun��es que definem o comportamento da
   classe.

   Vamos continuar o estudo com novas caracter�sticas de classes.
 */

#include <string> // Vamos usar o tipo string.

/*
  O tipo string est� dentro do namespace "std". Nesse caso, sempre que
  quisermos declarar uma nova string, devemos usar "std::string". Como
  � meio chato ficar escrevendo isso todo o tempo, � prefer�vel
  declarar que estamos usando o namespace std no c�digo inteiro para
  podermos passar a usar apenas a palavra "string".
 */
using namespace std;

class Circle {         // Nome da Classe. O nome nos indica que esta
		       // classe � uma abstra��o de um c�rculo.
 private:
  double radius;       // Os nossos c�rculos devem possuir um raio e
  string color;	       // uma cor.
 public:
  /*
    Este m�todo � visivelmente diferente dos outros. Perceba que ele
    n�o possui um tipo de retorno! Note tamb�m que ele possui o mesmo
    nome da classe.

    Quando isso ocorre, dizemos que ele � um m�todo construtor. Ele
    serve para criar inst�ncias da classe.
   */
  Circle(double r = 1.0, string c = "red");
  /*
    O que mais voc� percebe de diferente no m�todo acima? Ele est�
    declarando par�metros e imediatamente atribui um valor ao
    par�metro!

    Quando isso ocorre, o valor que est� sendo atribu�do deve ser
    usado como padr�o caso o m�todo seja invocado sem que o usu�rio
    forne�a valores.
   */


  /*
    Os m�todos abaixo permitem visualizar o conte�do dos
    atributos. Observe que n�o � permitido que o atributo seja
    atualizado. � sempre interessante criar m�todos de acessos como
    esses em suas pr�prias classes.

    Caso voc� quisesse atualizar os atributos, seria necess�rio criar
    m�todos setRadius e setColor para atualizar o raio e a cor,
    respectivamente.
   */
  double getRadius() const;
  string getColor()  const;

  /*
    O m�todo abaixo fornece um valor processado a partir dos
    atributos.
   */
  double getArea()   const;
};
