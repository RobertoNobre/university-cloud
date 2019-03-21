/*
  Vamos agora criar o comportamento da classe declarada em
  circle.h. Primeiramente, n�s temos que ver a classe, ent�o escreva o
  "include" apropriado.
 */

// ToDo: Insira o include apropriado.
#include "circle.h"

/*
  Abaixo eu j� escrevi os nomes dos m�todos para voc�
  implementar. Voc� ir� implementar todos eles com facilidade.
*/

// Veja que aqui eu n�o preciso repetir os par�metros default
Circle::Circle(double r, string c) {
  radius = r;
  color = c;
}

double Circle::getRadius() const {
    return ((2*3.14)*radius)/2*3.14;
}

string Circle::getColor() const {
  return color;
}

double Circle::getArea() const {
  return 3.14*(radius*radius);
}

