#ifndef KREPSINIO_KOMANDA_RUNGTYNIUTVARKARASTIS_H
#define KREPSINIO_KOMANDA_RUNGTYNIUTVARKARASTIS_H
#include <iostream>
#include <vector>
using namespace std;


class RungtyniuTvarkarastis {
private:
    string pavadinimas;
    string varzybos;
    int premija;
public:
    RungtyniuTvarkarastis(const string &pavadinimas, const string &varzybos, int premija);
    const string &getPavadinimas() const;
    const string &getVarzybos() const;
    int getPremija() const;
    void Informacija();

    void emplace_back(const RungtyniuTvarkarastis &tvarkarastis);
};


#endif //KREPSINIO_KOMANDA_RUNGTYNIUTVARKARASTIS_H
