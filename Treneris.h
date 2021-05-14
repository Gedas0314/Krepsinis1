#ifndef KREPSINIO_KOMANDA_TRENERIS_H
#define KREPSINIO_KOMANDA_TRENERIS_H

#include <vector>
#include "ASMUO.h"
#include "Zaidejas.h"
#include "Komanda.h"
#include "Rinktine.h"

using namespace std;
class Treneris : public ASMUO {
public:
    Treneris(const string&vardas, const string &pavarde, int amzius);
const string &GetVardas() const;//
const Komanda &GetKomanda() const;//
    Treneris(const string &vardas, const string &pavarde, int amzius, const string &name);

    const Rinktine &getRinktine() const;
    void SudarytiRinktine(vector<Kandidatas>kandidatai);

    void  SudarytiKomanda(vector<Zaidejas> zaidejas);//
    void Meniu();

    void IdetiInformacija();

    const string &getName() const;

    void Sastatas();

    void Sudetis();

    void PerziuretiAnonsus();
    void UzregistruotiZaideja(Zaidejas zaidejas);

    //const vector <Zaidejas> &GetKomanda() const;

private:
    vector<Zaidejas> komanda;
    string vardas;//
    string name;
    Rinktine rinktine;
    //Komanda komanda;//
};


#endif //KREPSINIO_KOMANDA_TRENERIS_H