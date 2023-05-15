#pragma once
#include "Komponent.h"

/** @class KonkretnyKomponent
 * Klasa %KonkretnyKomponent.
 */
class KonkretnyKomponent : public Komponent
{
private:
	double s_wartStala;
public:
	KonkretnyKomponent(double wartStala) : s_wartStala(wartStala) {

	}
	///Metoda implementująca generowanie wartości.
	double Generuj() override;
};

