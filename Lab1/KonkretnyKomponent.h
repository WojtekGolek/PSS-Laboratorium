#pragma once
#include "Komponent.h"

/** @class KonkretnyKomponent
 * Klasa %KonkretnyKomponent.
 */
class KonkretnyKomponent : public Komponent
{ 
	public:
		///Metoda implementująca generowanie wartości.
		double Generuj() override;
};

