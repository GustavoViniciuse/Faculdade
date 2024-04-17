#include <iostream>
#ifndef cabecalho_h
#define cabecalho_h


using namespace std;


class conta{
private:
    int numero;
    float saldo;
public:
    string pix;

    conta(int numero){
    }
    conta(){}

    float Saldo(){return saldo;}

    void sacar(float valor){}
    void depositar(float valor){}

    void getconta(){}

};

class corrente:private conta{};

class poupanca:private conta{
private:
    int aniversario;
    float valor;
public:
    void getaniversario(){}
    void aplicarjuros(){}
};

class especial:private conta{
public:
    float limite;
    especial(float limite){
        conta();
    }
};

class pessoa{
private:
    string nome;
public:
    conta contas;

    pessoa(){}
    pessoa(string nome, string cpf){}

    string getnome(){
        return nome;
    }
};


class fisica:public pessoa{
private:
    string cpf;
public:
    fisica(string cpf){}
    string getcpf(){return cpf;}
};

class juridica:public pessoa{
private:
    string cnpj;
public:
    juridica(string cpf){}

    string getcnpf(){return cnpj;}
};

class historico{
private:
    int numeroConta;
    int operacao;
    float valor;
public:

    void operar(conta contas, int operecao, float valor){}
};


int main()
{

    return 0;
}

#endif
