#ifndef KREPSINIO_KOMANDA_VADYBININKAS_H
#define KREPSINIO_KOMANDA_VADYBININKAS_H


#include "Treneris.h"
#include "RungtyniuTvarkarastis.h"
#include "LKL.h"

class Vadybininkas : public Treneris {
public:
    // Vadybininkas(const string &vardas, const string &pavarde, int amzius, LKL lkl);

    Vadybininkas(const string &vardas, const string &pavarde, int amzius, LKL lkl);

    void IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis);
    void PerziuretiAnonsus();
    void Meniu();


private:
    LKL lkl;
};


#endif //KREPSINIO_KOMANDA_VADYBININKAS_H

