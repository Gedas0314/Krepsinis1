//
// Created by Gediminas on 2021-05-02.
//

#include "Polisas.h"

Polisas::Polisas(const string &pavadinimas, const string &kategorija, int kaina) : pavadinimas(pavadinimas),
                                                                                   kategorija(kategorija),
                                                                                   kaina(kaina) {
}

const string &Polisas::getPavadinimas() const {
    return pavadinimas;
}

const string &Polisas::getKategorija() const {
    return kategorija;
}

int Polisas::getKaina() const {
    return kaina;
}
void Polisas::emplace_back(const Polisas &polisas) {}