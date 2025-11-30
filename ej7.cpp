#include<iostream>
using namespace std;
  int main(){
    //arreglos para las temperaturas en grados celcius y grados farenheit de los 7 dias de la semana
    double temp[7];
    double gradosFarenheight[7];
    //variables para almacenar la mayor, menor temperatura y el promedio de estas
    double mayor, promedio;
    double menor = 1000;
    //variable auxiliar para calcular el promedio
    double aux;
    // ciclo for para pedir al usuario las temperaturas y almacenarlas en el arreglo
     for (int i = 0; i < 7; i++){
      cout<<"Introduce la temperatura del dia: "<<i + 1<<endl;
        cin>>temp[i];
     }
     // buscando la mayor temperatura
     for (int i = 0; i < 7; i++){
          if (mayor<temp[i]){
           mayor = temp[i];
          }    
     }
     // buscando la menor temperatura
     for (int i = 0; i < 7; i++){
       if (menor>temp[i]){
         menor = temp[i];
       }
     }
     // hallando el promedio 
     for (int i = 0; i < 7; i++){
       aux += temp[i];
     }
     promedio = aux/7;
      //hacer la convercion de grados celcius a farenheit
     for (int i = 0; i < 7; i++){
      gradosFarenheight[i] = temp[i] * 33.8;
     }
      // imprimir el arreglo de las temperaturas
      cout<<"\n========================Temperaturas en grados celcius============================="<<endl;
     for (int i = 0; i < 7; i++){
      cout<<temp[i]<<" ";
     }
     cout<<"\n========================Temperaturas en grados farenheit============================="<<endl;
     // imprimir las temperaturas en grados farenheith
     for (int i = 0; i < 7; i++){
       cout<<gradosFarenheight[i]<<" ";
     }
      cout<<"\n==========Mayor, menor y promedio de temperaturas==============="<<endl;
    // mostra la mayor y menor temperatura y el promedio de estas
     cout<<"La mayor temperatura registrada fue de: "<<mayor<<" grados celcius"<<endl;
     cout<<"La menor temperatura registrada fue de: "<<menor<<" grados celcius"<<endl;
     cout<<"El promedio de temperaturas en la semana fue de: "<<promedio<<" grados celcius";
      
    return 0;
  }