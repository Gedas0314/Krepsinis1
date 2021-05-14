#ifndef KREPSINIO_KOMANDA_RUNGTYNES_H
#define KREPSINIO_KOMANDA_RUNGTYNES_H
#include <string>
#include <vector>
using namespace std;

class Rungtynes {
private:
    string pavadinimas;
    string nuoData, ikiData;
    string adresas;
    string cempionatas;
    vector<string> tvarkarastis;
public:

    Rungtynes(const string &pavadinimas, const string &nuoData, const string &ikiData, const string &adresas);

    const string &GetPavadinimas() const;

    const string &GetNuoData() const;

    const string &GetIkiData() const;

    const string &GetAdresas() const;

    const string &getCempionatas() const;

    const vector<string> &GetTvarkarastis() const;
};


#endif //KREPSINIO_KOMANDA_RUNGTYNES_H