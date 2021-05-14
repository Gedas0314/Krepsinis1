#ifndef KREPSINIO_KOMANDA_ASISTENTAS_H
#define KREPSINIO_KOMANDA_ASISTENTAS_H


#include "Treneris.h"
#include "Apranga.h"
#include <vector>

using namespace std;


class Asistentas : public Treneris
        {
private:
            vector<Apranga> aprangosKomplektas;




public:
            void IdetiApranga(Apranga apranga );
    Asistentas(const string &vardas, const string &pavarde, int amzius);
void AtvaizduotiAprangosKomplektus();

};


#endif //KREPSINIO_KOMANDA_ASISTENTAS_H