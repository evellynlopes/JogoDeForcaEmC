#include <iostream>
#include <stack>

using namespace std;

int main(){

stack <string> cartas;
    if (cartas.empty() ){
        cout << "pilha vaziaz\n\n";
    }else{
        cout << "pilha com cartas\n\n";
    }
    
    
    cartas.push ("rei de copas");
    cartas.push ("rei de espada");
    cartas.push ("rei de ouros");
    cartas.push ("rei de paus");

    cout << "tamanho da pilha:"<< cartas.size()<< "\n";

    cout << "tamanho do topo" << cartas.top()<<"\n";

    cartas.pop();
     cartas.pop();

     cout << "nova carta do topo" << cartas.top();

    }