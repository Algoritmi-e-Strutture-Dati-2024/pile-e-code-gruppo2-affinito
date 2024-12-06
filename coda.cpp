#include <iostream>

// Viene presa in considerazione la classe ListaPuntatori della scorsa lezione
template <typename T>
class Coda{

  private:
    ListaPuntatori<T> lista;
  
  public:
    //usiamo la lista per aggiungere 
    void enqueue(T elem){
      lista.inslista(elem, lista.lunghezza() + 1);
    }

   // Rimuove l’elemento in testa alla coda e lo restituisce. Gestire eventuali errori (ad esempio, coda vuota).
    T dequeue(){
        if(lista.listavuota(){
          return lista.lung==0;
        }else{
          T valore = lista.leggilista(1); 
          lista.canclista(1);
          return T();
    }

    // Restituisce l’elemento in testa alla coda senza rimuoverlo.
    T front() const{
        if(lista.listavuota(){
          return lista.lung==0;
        }else{
          return lista.leggilista(1);
        }
    }

    // Restituisce true se la coda è vuota, altrimenti false
    bool isEmpty() const{
      return lista.listavuota();
    }

    // Restituisce il numero di elementi nella coda.
    int size() const{
      return lista.lunghezza();
    }
   }
