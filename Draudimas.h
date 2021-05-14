//
// Created by Gediminas on 2021-04-30.
//

#ifndef KREPSINIS_DRAUDIMAS_H
#define KREPSINIS_DRAUDIMAS_H
#include <iostream>
#include <string>
#include <vector>
#include "Polisas.h"

using namespace std;


class Draudimas {

private:
    string pavadinimas;
    string nuoData, ikiData;
    double kaina;
    vector<string> polisas;


public:
    //Draudimas(const string &pavadinimas, double kaina);

    Draudimas(const string &pavadinimas, const string &nuoData, const string &ikiData, double kaina,
              const vector<string> &polisas);

    const string &getPavadinimas() const;

    double getKaina() const;

    const vector<string> &getPolisas() const;

    const string &getNuoData() const;

    const string &getIkiData() const;

};


#endif //KREPSINIS_DRAUDIMAS_H
