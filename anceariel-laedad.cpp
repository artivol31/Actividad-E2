//================================================
//==> Nombre del programa: Suma de dos n�mero
//==> Archivo : anceariel-laedad.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboraci�n: 2022-05-16
//==>Fecha ultima actualizaci�n: 2022-05-21
//=================================================
#include<iostream>
  using namespace std;
  int main(){
           int aa, ma, da, an, mn, dn, a, m, d;
           cout<<"ingrese la fecha actual y su fecha de nacimiento";
          cin>>aa>>ma>>da>>an>>mn>>dn;
          if(da>=dn){
                  d=da-dn;                                               }
          else{                                                    ma=ma-1;                                                 da=da+30;
        d=da-dn;
          }
       if(ma>=mn){
         m=ma-mn;
       }
       else{
           aa=aa-1;
           ma=ma+12;
          m=ma-mn;
       }
         a=aa-an;
          cout<<"tienes "<<a<<" a�os "<<endl;
           cout<<"Con "<<m<<" meses"<<endl;
          cout<<"y dias"<<d<<endl;
         



  return 0;
  }
