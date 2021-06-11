class Nodo{
    public:
        int valor;
        Nodo *sgte;
        Nodo(int);  //constructor
       // Nodo(int , Nodo* );
        int getValor();

};

class ListaE{
    Nodo *head;
    int size;
    public:
        ListaE();    //constructor
        ~ListaE();      //destructor
        void insertar(int);            //insertar
        void print();            //print
        void remover(int);           //remover posis
        void ordenar();

};