#include <iostream>
#include <typeinfo>
#include "CodaPtr.h"

using namespace std;

int main() {
    CodaPtr<int> c1;
    c1.inserisci(10);
    c1.inserisci(20);
    c1.inserisci(30);
    c1.stampaCoda();
    c1.stampaCoda();
    c1.stampaValori();
    c1.stampaValori();
    c1.cancella();
    c1.stampaValori();
    c1.cancella();
    c1.cancella();
    c1.stampaValori();
    return 0;
}