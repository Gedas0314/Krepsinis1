#ifndef KREPSINIO_KOMANDA_AGENTAS_H
#define KREPSINIO_KOMANDA_AGENTAS_H
#include "ASMUO.h"
#include "Vadybininkas.h"
#include "RungtyniuTvarkarastis.h"
#include "Treneris.h"
#include "Zaidejas.h"


class Agentas : public ASMUO {
public:
    Agentas(const string &vardas, const string &pavarde, int amzius);
    void Info();
//void IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis);

    // {
    //   cout<<"Agentas"<< vardas<<" miestas: "<< pavarde<< endl;
    // }
    void IdetiInformacija(Vadybininkas vadybininkas);
    void Meniu(Vadybininkas vadybininkas);

    const vector <Zaidejas> &GetKomanda() const;

    const string &getInformacija() const;


private:
    vector<Zaidejas> komanda;
    // void IdetiInformacija();
    // void Meniu();
    void UzregistruotiZaideja(Zaidejas zaidejas);
    string  informacija;



};


#endif //KREPSINIO_KOMANDA_AGENTAS_H
