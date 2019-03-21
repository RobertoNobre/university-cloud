#include <iostream>
#include "circle.h"


/*
  A fun��o abaixo � a principal. Estamos preocupados apenas com as
  chamadas ao construtor.
 */
int main() {
  /*
    Para gerar a inst�ncia c1, estamos invocando o construtor e
    passando dois par�metros. Isso quer dizer que n�o vamos usar
    nenhum dos valores padr�o.
   */
  Circle c1(1.2, "blue");
  cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
       << " Color=" << c1.getColor() << endl;


  /*
    Para gerar a inst�ncia c2, estamos invocando o construtor e
    passando apenas um par�metro referente ao raio. Isso quer dizer
    que a cor do nosso c�rculo deve usar o valor padr�o, que � "red".
   */
  Circle c2(3.4);
  cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
       << " Color=" << c2.getColor() << endl;


  /*
    Estamos gerando a inst�ncia c3 sem passar nenhum par�metro. Isso
    quer dizer que a inst�ncia dever usar apenas o que possui como
    padr�o. Em outas palavras, o raio ser� "1" e a cor ser� "red".
   */
  Circle c3;
  cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
       << " Color=" << c3.getColor() << endl;
  return 0;
}

/*

Compile o c�digo e execute com:

g++ circle*.cpp
./a.out

 */
