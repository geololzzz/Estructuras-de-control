#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,promedio;

    cout<<"Ingrese nota 1: ";
    cin>>n1;

    cout<<"Ingrese nota 2: ";
    cin>>n2;

    cout<<"Ingrese nota 3: ";
    cin>>n3;

    promedio = (n1+n2+n3)/3;
    
    string resultado = (promedio >= 61) ? "Aprobado" : "Reprobado";

    cout<<"Promedio: "<<promedio<<endl;
    cout<<resultado<<endl;

    return 0;
}
