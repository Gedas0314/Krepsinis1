#include "Rungtynes.h"

Rungtynes::Rungtynes(const string &pavadinimas, const string &nuoData, const string &ikiData, const string &adresas)
        : pavadinimas(pavadinimas), nuoData(nuoData), ikiData(ikiData), adresas(adresas) {
    tvarkarastis.emplace_back("Žalgiris - L.Rytas");
    tvarkarastis.emplace_back("Neptunas - L.Rytas");
    tvarkarastis.emplace_back("Lietkabelis - L.Rytas");
    tvarkarastis.emplace_back("Šiauliai - L.Rytas");
}

const string &Rungtynes::GetPavadinimas() const {
    return pavadinimas;
}

const string &Rungtynes::GetNuoData() const {
    return nuoData;
}

const string &Rungtynes::GetIkiData() const {
    return ikiData;
}

const string &Rungtynes::GetAdresas() const {
    return adresas;
}

const vector<string> &Rungtynes::GetTvarkarastis() const {
    return tvarkarastis;
}

const string &Rungtynes::getCempionatas() const {
    return cempionatas;
}
