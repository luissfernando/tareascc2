//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
//arreglo 1000000.
#include <iostream>
#include <time.h>   // incluyo las librerias (time.h) y  (cstdlib)  para generaar  numeros aleatorios
#include <cstdlib>
using namespace std;
void agregar(int V[],int n){    //funcion k solo agrega aleatoriamente los numeros  a un arreglo
    srand(time(NULL));      //inicialiso la variable en (0)  para guardar la suma mientras se recorre el arreglo
    for (int i = 0; i < n; i++) {   //recorre el arreglo
         V[i]= rand()%10;       //comiensa a guardar los numeros aleatorios en un rango de 10 al arreglo
    }
    
}
void mostrar(int V[],int n){    //funcion para mostrar el arreglo
    for(int i=0;i<n;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
void invertir_iterativ(int V[],int n){  //funcion iterativa
    int mid=n/2;            //declaro una variable mid k me guarde el tamaño del arreglo entre dos(mitad)
    int val_temp;           //inicializo una variaable  k me ayude a intercambiar los valores del arreglo
    for(int i=0;i<mid;i++){ //recorro el arreglo
        val_temp= V[i];     //guardo en la variable  del segundo valor al k se esta intercambiando
        V[i]=V[n-i];        // guardo el valor del primer valor al segundo
        V[n-i]=val_temp;    //guardo el valor dela segunda variable al primero
    }
}
//falta: la forma recursiva
/*void invertir_recursiv(int V[],int n,int i){ 
    int temp=V[n+i]; // 
    if(n==0){
        V[n]=V[n*2];
        V[n*2]=temp;
        i++;
    }
    else{
        V[n]=V[n*2];
        V[n*2]=temp;
        i++;
        invertir_recursiv(V,n-1,i);
    }
}*/
int main(){
int n=10;
//int n=1000000;
int A[n];
agregar(A,n);   //agrego el arreglo con n numeros aleatorios
mostrar(A,n);   //muetro el arreglo
cout<<endl;
invertir_iterativ(A,n-1);   //invierto el arreglo tomando el primer valor de (0)
mostrar(A,n); // muestro el arreglo
cout<<endl;
//invertir_recursiv(A,(n/2)-1,1); //n=3
//mostrar(A,n);
}
//ME FALTA LA FORMA RECURSIVA EL EJERCICIO FUNCIONA CON VALORES DE 1000000
//PERO PARA ASERLO MAS VISTOSO INICIALICE EL ARREGLO CON UN TAMAÑO DE 10