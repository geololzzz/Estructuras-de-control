#include <iostream>
using namespace std;

int main(){
    char lapiz;
    char lapicero;

    cout<<"Trae lapiz (s/n): ";
    cin>>lapiz;
    cout<<"Trae lapicero (s/n): ";
    cin>>lapicero;
    // Usando operador OR
    if(lapiz == 's' || lapicero == 's'){
        cout<<"Puede ingresar a clase"<<endl;
    }
    else{
        cout<<"No puede ingresar a clase"<<endl;
    }

    return 0;
}
