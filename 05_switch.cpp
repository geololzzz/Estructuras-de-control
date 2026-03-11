#include <iostream>
using namespace std;

int main(){
    int codigo;
    cout<<"Ingrese codigo de area: ";
    cin>>codigo;
    // Usando SWITCH
    switch(codigo){

        case 501:
            cout<<"Belice"<<endl;
            break;

        case 502:
            cout<<"Guatemala"<<endl;
            break;

        case 503:
            cout<<"El Salvador"<<endl;
            break;

        case 504:
            cout<<"Honduras"<<endl;
            break;

        case 505:
            cout<<"Nicaragua"<<endl;
            break;

        default:
            cout<<"Codigo no valido"<<endl;
    }

    return 0;
}
