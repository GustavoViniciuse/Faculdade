#include <iostream>

using namespace std;

class horario{
protected:

    int hora,minuto, segundo;

public:


    //Parte 1
    horario(){
        hora=00;
        minuto=00;
        segundo=00;
    }


    //Parte 2
    horario(int hora, int minuto, int segundo){

        this->hora=hora;
        this->minuto=minuto;
        this->segundo=segundo;

    }

    //Parte 3
    int gethora(){
        return hora;
    }
    int getminuto(){
        return minuto;
    }
    int getsegundo(){
        return segundo;
    }


    //Parte 4 e 5
    void calcular(int novahora, int novominuto, int novosegundo){
        while(novosegundo+segundo>=60){
            minuto++;
        }
        while(novominuto+minuto>=60){
            hora++;
        }
    };

     // Parte 6 e 7
    horario diferencaHorario(horario horarioPassado) {
        int difSegundo = segundo - horarioPassado.segundo;
        int difMinuto = minuto - horarioPassado.minuto;
        int difHora = hora - horarioPassado.hora;

        while (difSegundo < 0) {
            difSegundo += 60;
            difMinuto--;
        }

        while (difMinuto < 0) {
            difMinuto += 60;
            difHora--;
        }

        return horario(difHora, difMinuto, difSegundo);
    }



};

int main()
{
    //Parte 8
    horario x;

    cout<<x.gethora()<<":"<<x.getminuto()<<":"<<x.getsegundo()<<endl;


    return 0;
}

