//pract2ejer1
//1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//Tamaño del arreglo 1000000. (Iterativa y recursiva).
#include<cstdlib>  
#include<time.h>            // incluyo las librerias (time.h) y  (cstdlib)  para generaar  numeros aleatorios
#include<iostream>
using namespace std;                
long long int sum_itera(int V[],int t){     //forma iterativa
    long long int sum=0;        // inicialiso la variable en (0)  para guardar la suma mientras se recorre el arreglo
    srand(time(NULL));    //  inicialza para generar numeros aleatorios
    for(int i=0;i<t;i++){   //recorre  todo el arreglo 
        V[i]= rand()%10;    //comiensa a guardar los numeros aleatorios en un rango de 10 al arreglo
        sum+=V[i];          //guardo la suma mientras siga con la iteraccion 
        //cout<<V[i]<<" ";  //mostrar el arreglo
    }
    return sum;             //finalmente retorno la suma 
}
long long int sum_recur(int V[], int  t){   //forma recursiva
    if(t==0){               //cuando t sea (cero ) llegara a ser el primer valor del arreglo
        return V[t];        //retornara el primer valor
    }
    t--;
    return V[t+1] + sum_recur(V,t); //delo contrario retornara el ultimo valor mas el valor anterior -1   OJO "el --t resta en 1 primero
                                    //antes de llamar a la funcion"
}
int main(){
    long long int n=100000; //declaramos el tamaño del arreglo 
    int A[n];                  //inicializamos el arreglo 
    cout<<"iterativa "<<sum_itera(A,n); //mostramos la suma iterativamente
    cout<<"\nrecursiva "<<sum_recur(A,n-1); //mostramos la suma recursivamente
}
//LA FORMA RECURCIVA SOLO FUNCIONA CON UN VALOR MAXIMO DE 100000 YA K LA MEMORIA NO LE PERMITE ALAMCENAR MAS DATOS
//YA K EN CADA ITERIACION SE VA CREANDO MAS DATOS 