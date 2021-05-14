
#include "RungtyniuTvarkarastis.h"
RungtyniuTvarkarastis::RungtyniuTvarkarastis(const string &pavadinimas, const string &varzybos, int premija)
        : pavadinimas(pavadinimas), varzybos(varzybos), premija(premija) {}

const string &RungtyniuTvarkarastis::getPavadinimas() const {
    return pavadinimas;
}

const string &RungtyniuTvarkarastis::getVarzybos() const {
    return varzybos;
}

int RungtyniuTvarkarastis::getPremija() const {
    return premija;
}
void RungtyniuTvarkarastis::Informacija() {
    cout<<"-------------------------------"<<endl;
    cout<<"PAVADINIMAS: "<<pavadinimas<<endl;
    cout<<"VARŽYBOS: "<<varzybos<<endl;
    cout<<"PREMIJA: "<<premija<<endl;
    cout<<"-------------------------------"<<endl;

}
void RungtyniuTvarkarastis::emplace_back(const RungtyniuTvarkarastis &tvarkarastis) {

}
