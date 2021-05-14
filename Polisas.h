//
// Created by Gediminas on 2021-05-02.
//

#ifndef KREPSINIS_POLISAS_H
#define KREPSINIS_POLISAS_H
#include <iostream>
#include <vector>

using namespace std;


class Polisas {
private:
    string pavadinimas;
    string kategorija;
    int kaina;

public:
    Polisas(const string &pavadinimas, const string &kategorija, int kaina);

    const string &getPavadinimas() const;

    const string &getKategorija() const;

    int getKaina() const;
    void emplace_back(const Polisas &polisas);

};


#endif //KREPSINIS_POLISAS_H
