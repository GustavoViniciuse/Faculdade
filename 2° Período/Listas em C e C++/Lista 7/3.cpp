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

class data{
protected:
    int dia,mes,ano;
public:

    //parte 1
    data(){
       data(1,1,1);
    }

    //Parte 2
    data(int dia,int mes,int ano){
        this->dia=dia;
        this->mes=mes;
        this->ano=ano;
    }


    //Parte 3
    int getdia(){
        return dia;
    }
    int getmes(){
        return mes;
    }

    int getano(){
        return ano;
    }


    //Parte 4 e 5
    void somardata(int quantidade){
        dia+=quantidade;
        while(dia>30){
            mes++;
            dia=dia-30;
            if(mes>12){
                mes=mes-12;
                ano++;
            }
        }
    }

    //parte 6
    void amigo(){
       cout<<dia<<"/"<<mes<<"/"<<ano<<endl;
    }

    //Parte 7 e 8
    int diferencaDias(data dataPassada) {
        int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int totalDiasDataArmazenada = dia;
        for (int i = 0; i < mes - 1; i++) {
            totalDiasDataArmazenada += diasNoMes[i];
        }

        int totalDiasDataPassada = dataPassada.dia;
        for (int i = 0; i < dataPassada.mes - 1; i++) {
            totalDiasDataPassada += diasNoMes[i];
        }

        return totalDiasDataArmazenada - totalDiasDataPassada;
    }


};


int main()
{
    //Parte 8
    horario x;

    cout<<x.gethora()<<":"<<x.getminuto()<<":"<<x.getsegundo()<<endl;

    data d(1, 12, 2023);

    data dataPassada(13, 9, 2023);

    cout << "A diferenca de dias e: " << d.diferencaDias(dataPassada) << endl;



    return 0;
}

