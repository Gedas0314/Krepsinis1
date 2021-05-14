//
// Created by Gediminas on 2021-04-30.
//

#include "Draudimas.h"

//Draudimas::Draudimas(const string &pavadinimas, double kaina) : pavadinimas(pavadinimas), kaina(kaina) {
  //  polisas.emplace_back("Tauma");
    //polisas.emplace_back("Luzis");


//}

const string &Draudimas::getPavadinimas() const {
    return pavadinimas;
}

double Draudimas::getKaina() const {
    return kaina;
}

//const vector<string> &Draudimas::getPolisas() const {
    //return polisas;
//}
const vector<string> &Draudimas::getPolisas() const {
    return polisas;
};

Draudimas::Draudimas(const string &pavadinimas, const string &nuoData, const string &ikiData, double kaina,
                     const vector<string> &polisas) : pavadinimas(pavadinimas), nuoData(nuoData), ikiData(ikiData),
                                                      kaina(kaina), polisas(polisas) {}

const string &Draudimas::getNuoData() const {
    return nuoData;
}

const string &Draudimas::getIkiData() const {
    return ikiData;
}
