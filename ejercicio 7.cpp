#include<iostream>
#include<conio.h>
using namespace std;

float temp_grados[7];
float mayor, promedio_semanal = 0;
float menor = 100;
float aux = 0;

 void temp_grados_celcius();
 void convertir_temp();
 void temp_stats();


  void temp_grados_celcius(){
    // pedir al usuario q introduzca las 7 temperaruras  
	 for(int i = 0; i < 7; i++){
	 	cout<<"Introduzca la temperatura del dia "<< i + 1<<":" ; 
	 	cin>>temp_grados[i];
	 }
	 cout<<"======== temperaturas en grados celcius =========="<<endl;
   // imprime las temperaturas introducidas por el usuario
   for(int i = 0; i < 7; i++){
	 	cout<< temp_grados[i] <<" ";
	 }
}
 
  void convertir_temp(){
  	cout<<"\n======== temperaturas en grados fahrenheit =========="<<endl;
   for (int i = 0; i < 7; i++){
	 cout<<temp_grados[i] * 1.8 + 32.0 <<" ";
   }
   
}
  void temp_stats(){
  	cout<<"\n======== estadisticas de las temperaturas semanales =========="<<endl;
    //mayor 
	for (int i = 0; i < 7; i++){
          if (mayor<temp_grados[i]){
           mayor = temp_grados[i];
          }    
     }
     cout<<"La mayor temperatura en la semana fue de: "<<mayor<<endl;
     
	//menor
	for (int i = 0; i < 7; i++){
       if (menor>temp_grados[i]){
         menor = temp_grados[i];
       }
     }
      cout<<"La menor temperatura en la semana fue de: "<<menor<<endl;
  //promedio
  for (int i = 0; i < 7; i++){
       aux += temp_grados[i];
     }
     promedio_semanal = aux/7;
      cout<<"La temperarura semanal promedio fue de : "<<promedio_semanal<<endl;
      
      cout<<"Las temperaturas q estuvieron por encima del promedio son las siguientes: "<<endl;
	//temp por encima del promedio
	for (int i = 0; i < 7; i++){
		if (temp_grados[i] > promedio_semanal){
			cout<<"\n Dia "<< i+1 << ": "<<temp_grados[i] <<" grados celcius";
		}
		
	}
	
}
 int main(){
 	
 	 temp_grados_celcius();
     convertir_temp();
     temp_stats();
 	
 	
 getch();
 return 0;
 }
