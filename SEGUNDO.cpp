#include <iostream>
#include <stdio.h>

using namespace std;

int main () {

    int num1=0;
    int num2=0;
    int batalhaNaval[][];
    char opc='s';
    string variavelQualquer;
    
    cout<< "Digite o valor da primeira nota =";
    cin >> num1;
     cout<< "\nDigite o valor da segunda nota =";
    cin >> num2;

    if (num1< num2){
        cout << "valor de num2 MAIOR que num1";
    }

    variavelQualquer = (num1>10) ? "EVELLYN" : "CRISTIANO";


    printf("\n ===================================== ");
    printf("\n O RESULTADO FOI ");
    printf("\n ===================================== ");
    printf("\n O VALOR DA VARIAVEL NUM1 E %d",num1);
    printf("\n O VALOR DA VARIAVEL NUM2 E %d",num2);


    cout<< "\n O VALOR DA VARIAVEL QUALQUER E " +variavelQualquer;

    return 0;
}
