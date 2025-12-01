#include<iostream>
using namespace std;

  int main(){
    
    double temp[7];
    double gradosFarenheight[7];
    double mayor, promedio;
    double menor = 1000;
    double aux;
     for (int i = 0; i < 7; i++){
      cout<<"Introduce la temperatura del dia en grados celcius: "<<i + 1<<endl;
        cin>>temp[i];
     }
     for (int i = 0; i < 7; i++){
          if (mayor<temp[i]){
           mayor = temp[i];
          }    
     }
     for (int i = 0; i < 7; i++){
       if (menor>temp[i]){
         menor = temp[i];
       }
     }
     for (int i = 0; i < 7; i++){
       aux += temp[i];
     }
     promedio = aux/7;

     for (int i = 0; i < 7; i++){
      gradosFarenheight[i] = temp[i] * 1.8 + 32.0 ;
     } 
      cout<<"\n========================Temperaturas en grados celcius=============================\n"<<endl;
     for (int i = 0; i < 7; i++){
      cout<<temp[i]<<" ";
     }
     cout<<"\n========================Temperaturas en grados farenheit=============================\n"<<endl;
     
     for (int i = 0; i < 7; i++){
       cout<<gradosFarenheight[i]<<" ";
     }
     cout<<"\n==========Mayor, menor y promedio de temperaturas===============\n"<<endl;
     cout.precision(2);
     cout<<"La mayor temperatura registrada fue de: "<<mayor<<" grados celcius"<<endl;
     cout<<"La menor temperatura registrada fue de: "<<menor<<" grados celcius"<<endl;
     cout<<"El promedio de temperaturas en la semana fue de: "<<promedio<<" grados celcius"<<endl;
     cout<<"Los dias con temperaturas por encima del promedio son: "<<endl;
      for (int i = 0; i < 7; i++){
          if (temp[i] > promedio){
            cout<<"\nDia "<< i+1 << ": "<<temp[i]<<" grados celcius";
          }
          
     }
    return 0;
  }