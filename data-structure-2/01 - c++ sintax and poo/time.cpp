/* Implementa��o da classe Time */
#include <iostream>  // A fun��o std::cout ser� usada para implementar
		     // a fun��o print.
#include "time.h"    // Para visualizar a classe Time
#include <iomanip>   // Para ter mais op��es na hora de escrever o
		     // std::cout

using namespace std; // Para podermos escrever cout ao inv�s de
		     // std::cout.



/*
   Eu j� implementei o m�todo getHour para voc� ter como refer�ncia,
   implemente os demais.
 */
int Time::getHour() const {
  return hour;
}

int Time::getMinute() const {
    return minute;
}
int Time::getSecond() const {
    return second;
}

/*
  Nos m�todos "set", a classe est� recebendo como par�metro uma
  vari�vel com o mesmo nome do atributo. Esse fato faz com que o
  atributo seja "escondido". Por exemplo, no m�todo setHour abaixo,
  quando usarmos a vari�vel "hour", estaremos nos referindo ao
  par�metro e n�o ao atributo da classe.

  Para contornar esse problema, usamos a palavra reservada
  "this". Assim:

  this->hour, this->minute e this->second se referem aos atributos.

  hour, minute e second se referem aos par�metros dos m�todos abaixo.
 */
void Time::setHour(int hour) {
  this->hour = hour;
}

void Time::setMinute(int minute) {
  minute = minute;
}

void Time::setSecond(int sec) {
    second = sec;
}

void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}


// Imprimir esta inst�ncia no formato "hh:mm:ss". Use a internet para
// entender por conta pr�pria o que os m�todos setfill e setw est�o
// fazendo. Voc� tem a op��o tamb�m de comentar c�digo e executar o
// programa para ver o que muda.
void Time::print() const {
  cout << setfill('0');
  cout << setw(2) << hour
       << ":" << setw(2) << minute
       << ":" << setw(2) << second << endl;
}

// O pr�ximo m�todo aumenta um segundo nesta inst�ncia. Escreva esse
// m�todo.
void Time::nextSecond() {
    if(second == 59){
        if(minute == 59){
            hour += 1;
        }else{
            minute += 1;
        }
    }else{
        second += 1;
    }
}


/*
  Deixei o construtor para o fim para voc� conhecer uma sintaxe
  alternativa para inicializa��o de atributos. Colocamos uma lista de
  inicializa��o ap�s a declara��o dos par�metros. Para separar os
  par�metros da lista de inicializa��o, usamos ":". A lista possui a
  sintaxe:

  atributo1(par�metroA), atributo2(par�metroB), ..., atributoN(par�metroM).
 */

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {
  /*
    O corpo do m�todo executa ap�s as inicializa��es. Neste caso, ele
    est� vazio porque as inicialia��es eram tudo o que quer�amos
    fazer.
   */
}
