﻿#pragma once
#include "SISO.h"
#include <iostream>

/** @class PD
 * Klasa modelująca regulator typu %PD. Umożliwia obliczenie sterowania na podstawie zadanych nastaw oraz wejścia regulatora.
 */
class PD : virtual public  SISO{
	protected:
		/// Zmienna przechowująca wzmocnienie regulatora
		double s_Kp;
		/// Zmienna przechowująca stałą czasową różniczkowania
		double s_Td;
		/// Zmienna przechowująca czas próbkowania
		double s_Tp;
		/// Zmienna przechowująca wartość zadaną
		double s_WartZad;
		/// Zmienna przechowująca poprzednią wartość uchybu
		double s_ePoprzedni;
	public:
		/**  Konstruktor
		* @brief Inicjalizacja wartości klasy.
		*/
		PD(double Kp = 1, double Td = 1, double Tp = 1, double WartZad = 0) :s_Kp(Kp), s_Td(Td), s_Tp(Tp), s_WartZad(WartZad), s_ePoprzedni(0.0) {

		};
		///Metoda symulujaca regulator. Jako argument przyjmuje wejscie regulatora oraz zwraca obliczone wyjscie regulatora.
		double symuluj(double uchyb) override;
		///Metoda obliczająca człon proporcjonalny regulatora.
		double obliczP(double uchyb);
		///Metoda obliczająca człon różniczkujący regulatora.
		double obliczD(double uchyb);
		///Metoda zapisujaca parametry regulatora w pliku. Jako argumenty przyjmuje referencje do strumieni do odczytu i zapisu oraz zwraca referecje do strumienia do zapisu.
		std::fstream& ZapisKonfiguracji(std::fstream& strumienOdczyt, std::fstream& strumienZapis);
		///Metoda odczytyjaca parametry regulatora z pliku. Jako argument przyjmuje referencje do strumienia oraz zwraca referecje do strumienia.
		std::fstream& OdczytKonfiguracji(std::fstream& strumien);

};

