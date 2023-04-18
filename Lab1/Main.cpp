#include <iostream>
#include <fstream>
#include "SISO.h"
#include "ARX.h"

int main() {
    ARX obiekt({ -0.5 }, { 1 }, -1, 0);
    obiekt.WypiszParametry();
    double wyjscie;
    std::ofstream outfile("output.txt");
    
    
    for (int i = 0; i < 25; i++) {
        if (i == 0) {
            wyjscie = obiekt.symuluj(0.0);
        }
        else {
            wyjscie = obiekt.symuluj(1.0);
        }
        std::cout << "Wyjscie: " << wyjscie << std::endl;
        if (outfile.is_open()) {
            outfile << wyjscie << std::endl;
        }
        else {
            std::cout << "Nie uda�o si� otworzy� pliku do zapisu." << std::endl;
        }
    }
    outfile.close();
    return 0;
};
