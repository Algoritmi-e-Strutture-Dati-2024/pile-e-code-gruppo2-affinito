#include <iostream>

// In questo esercizio viene utilizzata la classe ListaPuntatori della scorsa lezione
// Definizione della classe Lista come template
template <typename T>
class Pila {
  private:
    //usiamo  un'istanza di ListaPunatori come base
    ListaPuntatori<T> lista;

  public:
    //usa l'oggetto lista con la sua relativa funzione per inserire un elemento nella posizione in testa
    void push(T elem){
      lista.inslista(elem, 1);
    }

    //qui viene letto il valore in testa e viene cancellato
    T pop(){
      if(lista.listavuota()){
          return lista.lung==0;
      }else{
        T valore=lista.leggilista(1);
        lista.canclista(1);
        return T();
      }
    }

    T top(){
      if(lista.listavuota()){
          return lista.lung==0;
      }else{
        return lista.leggilista(1);
      }

    // Restituisce true se la pila è vuota, altrimenti false
    bool isEmpty() const{
      return lung==0;
    }

    // Restituisce il numero di elementi nella pila.
    int size() const{
      return lista.lunghezza();
    }
  }
