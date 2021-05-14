#ifndef KREPSINIO_KOMANDA_EUROCHAMP_H
#define KREPSINIO_KOMANDA_EUROCHAMP_H


#include "Rungtynes.h"
#include <vector>
#include <iostream>
using namespace std;

class EuroChamp //: public Rungtynes
        {
private:
    string pavadinimasKlubo;
    string laikoData;
    string vietosAdresas;
    string testas;
    string  cempionatasEU;



public:

    EuroChamp(const string &pavadinimasKlubo, const string &laikoData, const string &vietosAdresas,
              const string &testas);

    const string &getPavadinimasKlubo() const;

    const string &getLaikoData() const;

    const string &getVietosAdresas() const;

    const string &getTestas() const;


    void emplace_back(const EuroChamp &euroChamp);


};


#endif //KREPSINIO_KOMANDA_EUROCHAMP_H