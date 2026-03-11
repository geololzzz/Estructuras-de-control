#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    // Usando IF
    if(num > 0){
        cout<<"El numero es positivo"<<endl;
    }
    if(num == 0){
        cout<<"El numero es neutro"<<endl;
    }
    if(num < 0){
        cout<<"El numero es negativo"<<endl;
    }
    
    return 0;
}
