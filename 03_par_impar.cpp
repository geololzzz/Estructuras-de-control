#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    // Usando IF ELSE
    if(num % 2 == 0){
        cout<<"El numero es PAR"<<endl;
    }
    else{
        cout<<"El numero es IMPAR"<<endl;
    }
    
    return 0;
}
