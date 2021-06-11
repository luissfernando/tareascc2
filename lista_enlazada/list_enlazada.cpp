//lista enlazada
#include <iostream>
#include "list_enlazada.h"
using namespace std;
Nodo::Nodo(int val){
    valor=val;
    sgte = NULL;
}
int Nodo::getValor(){   
    return valor;
}
ListaE::ListaE(){
    head=NULL;
    size = 0;
}
//insertar en la lista
void ListaE::insertar(int val){        
     Nodo *temp = head;
     Nodo *nuevo_nodo= new Nodo (val);
     if(head==NULL){ 
         head = nuevo_nodo;
     }
     else{
         while(temp->sgte != NULL){
             temp = temp->sgte;
         }
         temp->sgte = nuevo_nodo;
     }
     size++;
 }
 //imprimer lista
void ListaE::print(){          
    Nodo *temp = head;
    if(!head){
        cout<<"lista vacia";
    }
    else{
        while (temp!=NULL){  //mientras exista algo en la lista
            cout<<temp->getValor()<<" ";
            temp = temp->sgte;
        }
    }
}
//eliminar posiscion de una elemento de la lista
void ListaE::remover(int pos){
    Nodo *temp = head;
    //Nodo *temp2 = head;
    Nodo *temp1 = temp->sgte;
    //int cont = 2;
    if(temp == NULL)
        cout<<"lista vacia";
    else if(pos==1){
        head = temp->sgte;
    }
    else if(pos>size){
        cout<<"fuera de rango";
    }
    else{
        for(int i=2;i<=pos;i++){
            if(i==pos){
                Nodo *aux = temp1;
                temp->sgte = temp1->sgte;
                delete aux;
                size--;
            }
            temp = temp->sgte;
            temp1 = temp1->sgte;
            //cont++;
        }
    }
}
//ordenar en forma ascendente lista;
void ListaE::ordenar(){
    int tem1;
    Nodo *temp = head;
    Nodo *temp2 = temp;
    while (temp != NULL){
        temp2 = temp;
        while(temp2->sgte != NULL){
            temp2 = temp2->sgte;
            if(temp->valor > temp2->valor){
                tem1 = temp->valor;
                temp->valor = temp2->valor;
                temp2->valor = tem1;
            }
        } 
        temp = temp->sgte;
    }
    
}
//destructor
ListaE::~ListaE(){
    delete[] head;
}

void menu(){
        cout<<"\tMENU\n";
    cout<<"1) insertar"<<endl;
    cout<<"2) mostrar lista"<<endl;
    cout<<"3) eliminar posicion "<<endl;
    cout<<"4) salir"<<endl;
}
int main(){
    ListaE P;
    int opc;
    do{ 
        menu();
        cout<<"elija una opcion\n";
        cin>>opc;   
        switch (opc)
        {   int a;
            case 1:
                cout<<"valor= ";cin>>a;
                P.insertar(a);
                P.ordenar();
                break;
            case 2:
                cout<<"lista: ";
                P.print();
                cout<<endl;
                break;
            case 3:
                cout<<"posiscion a eliminar";cin>>a;
                P.remover(a);
        }
    }
    while(opc != 4);
    return 0;
}




