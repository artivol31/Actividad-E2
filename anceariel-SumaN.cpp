//================================================
//==> Nombre del programa: Suma de dos n�mero
//==> Archivo : anceariel-SumaN.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboraci�n: 2022-05-16
//==>Fecha ultima actualizaci�n: 2022-05-21
//=================================================
#include<iostream>
using namespace std;
int main ()    {
        float aa_x,aa_c=0,aa_a=0,aa_N;                                         cout<<"ingrese la catidad de numeros que vas a sumar:"; cin>>aa_N;                                               do{
        cout<<"ingrese el numero :"; cin>>aa_x;                              aa_c=aa_c+1;                                                     aa_a=aa_a+aa_x;                                             }while(aa_c<aa_N);                                       
                cout<<"suma total:"<<aa_a;


  return 0;
}
