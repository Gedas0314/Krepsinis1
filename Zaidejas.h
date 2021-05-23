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
    void AtvaizduotiApranga();
    //Zaidejas(const string &vardas);//
    //const string &GetVardas() const;//




    const string &GetPozicija() const;
    const string &GetVardas() const;//

    const string &getPavarde() const;





private:
    string pavarde;
    string pozicija;
    string vardas;
    string amzius;
public:
    const string &getAmzius() const;

private:
    vector<Rungtynes>rungtynes;
    vector<Draudimas>draudimas;
    vector<Apranga>apranga;
    vector<Zaidejas>zaidejai;








};


#endif //KREPSINIO_KOMANDA_ZAIDEJAS_H