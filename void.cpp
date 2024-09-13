#include <iostream>

using namespace std;

int main() {
    int ganhoporhora,horastrabalhadas;
    

    cout<< "quanto voce ganha por hora?\n";
    cin>> ganhoporhora;

    cout<< "quantas horas por mes voce trabalha?\n";
    cin>> horastrabalhadas;

    float salariobruto = ganhoporhora*horastrabalhadas;
    cout<< "salario bruto e igual a\n" <<salariobruto;

    float ir= salariobruto*0.11;
    cout<< "imposto de renda e igual a\n"<< ir;

    float inss = salariobruto*0.08;
    cout<< "o inss e igual a\n "<< inss;

    float sindicato= salariobruto*0.05;
    cout<< "o sindicato é igual a \n"<< sindicato;

    float salarioliquido= salariobruto-ir-inss-sindicato;
    cout<< "o salario liquido e igual a \n" << salarioliquido;


   

 


}
   



