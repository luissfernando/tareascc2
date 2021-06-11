//prac2ejer3
//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
#include <iostream>
#include <time.h>
#include <cstdlib>          // incluyo las librerias (time.h) y  (cstdlib)  para generaar  numeros aleatorios
using namespace std;
void agregar(int V[],int n){    //funcion para agreegar aleatoriamente  numeros enteros al arreglo
    srand(time(NULL));          //inicialiso la variable en (0)  para guardar la suma mientras se recorre el arreglo
    for (long long int i = 0; i < n; i++) { //recorre el tamaño del arreglo
         V[i]= rand()%10;               //comiensa a guardar los numeros aleatorios en un rango de 10 al arreglo
    } 
}
void mostrar(int V[],int n){            //funcion para mostrar el arreglo
    for(long long int i=0;i<n;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
void ordenar(int V[],int n){                    //funcion para ordenar el arreglo de forma ascendente
    for(long long int i=1;i<n;i++){             //for para recorrer los elementos del arreglo
        for(long long int j=0;j<n;j++){            //for para comparar de a uno los elementos del arreglo
            long long int temp=V[i];            //declaroavrible temp  k me guarde el segundo valor que estoy comparando
            if(V[i]<V[j]){                      //si el segundo valor  es menor 
                V[i]=V[j];                      // ase el cambio
                V[j]=temp;
            }
        }
    }
}
int main(){
    long long int n=10000; //funciona un max de 10000  
    int V[n];
    agregar(V,n);   
   // mostrar(V,n);
    ordenar(V,n);
    mostrar(V,n);
}
//ESTE PROGRAMA ES INEFICIENTE FUNCIONA PARA UN MAX DE 10000  POR GUARDAR LAS VALIABLES EN MEMORIA 
//SE DEBIO TRABAJAR CON ARCHIVOS 