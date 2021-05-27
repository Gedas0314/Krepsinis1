#include "LKL.h"

LKL::LKL(){
//(const string &pavadinimas, const string &nuoData, const string &ikiData, const string &adresas)
  //      : Rungtynes(pavadinimas, nuoData, ikiData, adresas) {
    RungtyniuTvarkarastis zalgiris("Varžybos", "Kaunas", 100);
    RungtyniuTvarkarastis lietkapelis("Varžybos", "Panevežys", 500);
    RungtyniuTvarkarastis neptunas("Varžybos", "Klaipėda", 200);
    RungtyniuTvarkarastis siauliai("Varžybos", "Šiauliai", 400);
    RungtyniuTvarkarastis alytus("Aštunfinalis", "Alytus", 500);
    RungtyniuTvarkarastis prienai("Pusfinalis", "Prienai", 300);
    RungtyniuTvarkarastis vilnius("Finalas", "Vilnius", 1000);


    rungtyniuTvarkarastis.emplace_back(zalgiris);
    rungtyniuTvarkarastis.emplace_back(lietkapelis);
    rungtyniuTvarkarastis.emplace_back(neptunas);
    rungtyniuTvarkarastis.emplace_back(siauliai);
    rungtyniuTvarkarastis.emplace_back(alytus);
    rungtyniuTvarkarastis.emplace_back(prienai);
    rungtyniuTvarkarastis.emplace_back(vilnius);



}

const vector<RungtyniuTvarkarastis> &LKL::getRungtyniuTvarkarastis() const {
    return rungtyniuTvarkarastis;
}

void LKL::IdetiNaujasVarzybas(RungtyniuTvarkarastis rungtyniuTvarkarastis) {
    rungtyniuTvarkarastis.emplace_back(rungtyniuTvarkarastis);

}

const vector<RungtyniuTvarkarastis> &LKL::getRungtyviuTvarkarastis() const {
    return rungtyviuTvarkarastis;
}

void LKL::setRungtyviuTvarkarastis(const vector<RungtyniuTvarkarastis> &rungtyviuTvarkarastis) {
    LKL::rungtyviuTvarkarastis = rungtyviuTvarkarastis;
}
