/*
   Voc� ir� escreve agora uma classe chamada Time que modela uma
   inst�ncia de tempo: hora, minuto e segundo. Nesse caso, a classe
   possui os seguintes membros.

   - Tr�s atributos (hora, minuto e segundo).
   - Um construtor p�blico que inicializa os atributos.
   - M�todos "get" e "set" para permitir gerenciamento dos atributos.
   - Um m�todo p�blico "print" paa imprimir esta inst�ncia de tempo
     no formato hh:mm:ss.
*/


/*
  As primeiras linhas de c�digo deste arquivo servem para evitar que
  m�ltiplas defini��es da classe Time ocorram. Isso poderia ocorrer se
  voc� der include de dois pacotes que d�o include em "time.h"
 */

#ifndef TIME_H   // Inclua esse bloco apenas se TIME_H n�o est� definido
#define TIME_H   // Na primeira inclus�o, defina TIME_H para que este
		 // bloco n�o seja inclu�do mais de uma vez.

class Time {
 private:  // Se��o Privada
  // Membros privados
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59

 public:   // Se��o P�blica
  // Prot�tipo das fun��es p�blicas.

  // Construtor
  Time(int hour = 0, int minute = 0, int second = 0);

  // M�todos "get" e "set" para os atributos.
  int getHour() const;
  void setHour(int hour);
  int getMinute() const;
  void setMinute(int minute);
  int getSecond() const;
  void setSecond(int second);
  void setTime(int hour, int minute, int second);

  // M�todo para mprimir esta inst�ncia no formato "hh:mm:ss"
  void print() const;

  // M�todo para aumentar esta inst�ncia em 1 segundo.
  void nextSecond();
};

#endif  // Final do bloco "#ifndef"
