/*
  Voc� ir� agora programar no Paradigma Orientado a Objeto. Neste
  paradigma, voc� ir� criar pequenos m�dulos que podem ser
  instanciados no momento em que s�o necess�rios. Esses pequenos
  m�dulos s�o chamados de classes. As classes s�o instanciadas com a
  palavra reservada "class". Veja abaixo.
 */

/*
  Classes precisam de um nome. No nosso caso, a classe tem nome
  Operations.
 */
class Operations {

  /*
    As classes possuem uma se��o privada, onde voc� colocar� aquilo
    que deseja "esconder" das outras partes do c�digo. Isso quer dizer
    que ningu�m fora da classe ter� acesso �s vari�veis e fun��es
    privadas. Em outras palavras, adicionamos um n�vel de
    encapsulamento que protege essa �rea sens�vel e facilita a
    reutiliza��o do c�digo.
   */
 private :
  /*
    As vari�veis privadas declaradas abaixo s�o vis�veis em qualquer
    lugar dentro da classe e apenas dentro da classe. Dizemos que elas
    s�o "atributos" dessa classe.
   */
  int number1;
  int number2;
  /*
    Como as classes possuem uma regi�o privada, � de se esperar que
    tenha uma regi�o p�blica.
   */
 public :
    /*
    As fun��es em uma classe s�o normalmente chamdas de m�todos. Neste
    momento, estamos apenas declarando o prot�tipo desta fun��o em um
    arquivo de extens�o ".h". O c�digo dever� aparecer em um arquivo
    de extens�o ".cpp".
   */
  void      setNumbers(int number1, int number2); // recebe dois
						  // inteiros como
						  // par�metros e
						  // coloca no
						  // atributo.

  /*
    Note nos m�todos abaixo a presen�a da palavra "const". Ela serve
    para dizer que o m�todo n�o alterar� nenhum dos atributos da
    classe. Observe que o m�todo setNumbers n�o possuia essa
    indica��o, dado que ele precisa alterar tais atributos.
   */
  int    sum() const; // retorna a soma dos atributos.
  int    sub() const; // retorna a subtra��o de um atributo pelo
		      // outro.
  int    mul() const; // retorna a multiplica��o dos atributos.
  int   idiv() const; // retorna a divis�o inteira dos atributos.
  float fdiv() const; // retorna a divis�o real dos atributos.
  int    res() const; // retorna o resto da divis�o de um atributo
		      // pelo outro.
};
