#ifndef KREPSINIO_KOMANDA_ZAIDEJAS_H
#define KREPSINIO_KOMANDA_ZAIDEJAS_H
#include "ASMUO.h"
#include "Rungtynes.h"
#include <vector>
#include "Draudimas.h"
#include "Apranga.h"
#include <windows.h>

using namespace std;


class Zaidejas : public ASMUO{
public:
    Zaidejas(const string &vardas, const string &pavarde, int amzius, string pozicija);
    void Meniu();

    void Sastatas();

    void Sudetis();
    void RinktisDraudima(Draudimas draudimas);
    void AtvaizduotiDraudima();
    //Zaidejas(const string &vardas);//
    //const string &GetVardas() const;//




    const string &GetPozicija() const;
    const string &GetVardas() const;//

    const string &getPavarde() const;




private:
    string pavarde;
    string pozicija;
    string vardas;
    vector<Rungtynes>rungtynes;
    vector<Draudimas>draudimas;



};


#endif //KREPSINIO_KOMANDA_ZAIDEJAS_H