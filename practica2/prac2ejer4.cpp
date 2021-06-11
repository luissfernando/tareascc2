//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>
#include <time.h>           // incluyo las librerias (time.h) y  (cstdlib)  para generaar  numeros aleatorios
#include <cstdlib>
using namespace std;
int tam_iterativ(char B[]){ //funcion para retornar el tam de forma iterativa
    int i=0;          //inicializo un i que comiense con el primer valor 
                        // y asu ves usarlo para k me retorne el tamanio
    while(B[i]|='\000'){ //mientras que el arreglo sea diferente del final de linea el 
        i++;                // i aumentara su valor
    }
    return i;           //retorna el tamaño
}
int tam_recursiv(char A[],int i){   //funcion de forma recursiva  donde el i comesara con un valor de cero para aserlo recursivo
    if(A[i]=='\000'){               //cuando la funcion de forma recursiva llegue al ultimo valor se retornara el i k es tamaño
        return i;
    }
    return tam_recursiv(A,++i);       //primero el i  aumeta en uno luego llama a su misma funcion ala funcion 
}


/*int tam_iterativ(int V[]){
    long long int i=0;
    while(V[i]|='\000'){
        cout<<V[i]<<" ";
        i++;
    }
}*/
int main(){

    char A[10]={'a','b','c','d','f'};  //se krea un arregl
    cout<<"iterariva ="<<tam_iterativ(A);  //imprime el tamaño en forma iterativa
    cout<<"\nrecursiva ="<<tam_recursiv(A,0);//imprime el tamaño en forma recursiva
    return 0;
}
/*EN EL CODIGO FUNCIONA PARA ARREGLOS DE TIPO CHAR PERO YO ESTABA INTENTANDO ASER CON ENTEROS
PERO ME LLEVABA A K CUANDO LOS NUMEROS SE GENERABAN EJEMPLO= {1,4,6,0,4,2} NO LLEGABA AL FINAL DE LIINEA
SE KEDABA EN CERO ,TOMABA EL ( 0 COMO SI FUERA  '\000')  */