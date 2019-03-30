#include <iostream>
using namespace std;

class Semaforo{
    private:
        string s = "Vermelho";
    public:
        string getS(){ return s; };
        string next(){
            return s == "Vermelho" ? s = "Verde" :
                s == "Amarelo" ? s = "Vermelho" :
                    s == "Verde" ? s = "Amarelo" : "cagaste no pau";
        }
};

class Pessoa{
    private:
        string doc, nome;
    public:
        void setDoc(string d){ doc = d; };
        void setNome(string n){ nome = n; };
        string getNome(){ return nome; };
        string getDoc(){ return doc; };
};

class Aluno: public Pessoa{
    private:
        int ra;
    public:
        void setRa(int r){ ra = r; };
        int getRa(){ return ra; };
};


class Aritmetico{
    private:
        int a;
        int b;
        int c;
    public:
        void setA(int n){ a = n; };
        void setB(int n){ b = n; };
        void setC(int n){ c = n; };
        int getA(){ return a; };
        int getB(){ return b; };
        int getC(){ return c; };
        int soma(int a, int b){ return a + b; };
        int soma(int a, int b, int c){ return a + b + c; };

};

int main(){
    cout << "************************** EX 1 *****************" << endl;
    /******* ex 1 ******/
    Semaforo semaforo;
    for(int a = 0; a<10; a++){
        cout << "Sinal atual: " << semaforo.getS() << endl;
        semaforo.next();
    }
    /******* ex 1 ******/
    cout << "************************** EX 2 *****************" << endl;
    /******* ex 2 ******/
    Aluno aluno;
    aluno.setNome("Roberto");
    aluno.setDoc("1234123");
    aluno.setRa(214581);

    cout << "Nome: " << aluno.getNome() << endl;
    cout << "Doc: " << aluno.getDoc() << endl;
    cout << "Ra: " << aluno.getRa() << endl;
    /******* ex 2 ******/

    cout << "************************** EX 3 *****************" << endl;
    /******* ex 3 ******/
    Aritmetico aritmetico;
    aritmetico.setA(10);
    aritmetico.setB(20);
    aritmetico.setC(15);

    cout << "SOMA A + B: " << aritmetico.soma(aritmetico.getA(), aritmetico.getB()) << endl;
    cout << "SOMA A + B + C: " << aritmetico.soma(aritmetico.getA(), aritmetico.getB(), aritmetico.getC()) << endl;
    /******* ex 3 ******/

}