#include "KompozytRownolegle.h"

/**
 * Symulowanie obiektu o zadanej strukturze.
 * @return obliczone wyjscie struktury równoległej.
 */
double KompozytRownolegle::symuluj(double we) {
    double wartosc = 0.0;
    for (KompozytKomponent* c : s_elementy) {
        wartosc += c->symuluj(we);
    }
    return wartosc;
}