/*Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).*/
#include <iostream>
using namespace std;
void concatenar(char A[],char B[]){   //funcion para  concatenar sin el tamaño del arreglo
    int i=0,j=0;                //inicialiso dos variables (i para recorrer el primer arreglo y el j para el segundo )
    while(B[i]|='\000'){    //while para k recorra el primer arreglo asta k llegue al final de linea
                                //asi poder comensar a llenar ese arreglo con el segundo
        i++;           
    }
    i++;            //el i aumenta por que en el bucle cuando se llega al final de linea el i sigue valiendo el tamaño del
                    //ultimo valor para agregar y no perder el ultimo valor del array se debe aumentar en uno
    while(A[j]|='\000'){    //ahora recorremos  el primer arreglo k es menor su tamaño
        B[i-1]=A[j];        //agregamos al segundo arreglo los elementos del primero
        j++;                //aumentamos el i y j para seguir aumentando su tamaño 
        i++;
     }
}
void mostrar(char A[]){ // funcion para muestrar el arreglo
    int i=0;
    while(A[i]|='\000'){
        cout<<A[i]<<" ";
        i++;
    }
}

int main(){
    char A[10]={'l','u','i','s',};      //primer arreglo
    char B[20]={'f','e','r','n','a','n','d','o','_'};   //segundo arreglo
    concatenar(A,B);    //concatena al segundo arreglo el arreglo A
    mostrar(B);         //muestra el segundo arreglo concatenado 

}   
