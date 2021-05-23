#include "Zaidejas.h"
#include <iostream>
using namespace std;

Zaidejas::Zaidejas(const string &vardas, const string &pavarde, int amzius, string pozicija) : ASMUO(vardas, pavarde, amzius),
                                                                                               pozicija(pozicija) {}

//void Draudimas::RinktisDraudima(Draudimas draudimas){
    //draudimas.emplace_back(draudimas);
//};

const string &Zaidejas::GetPozicija() const {
    return pozicija;
}
const string &Zaidejas::GetVardas() const {
    return vardas;
}


void Zaidejas::Sudetis() {

}

void Zaidejas::Sastatas() {

}

void Zaidejas::Meniu() {

}

void Zaidejas::AtvaizduotiDraudima() {
    cout<<"Draudimo variantai"<< endl;
    for (auto it: draudimas) {
        cout << it.getPavadinimas() << ",kaina"<< it.getKaina() << endl;


    }

}

void Zaidejas::RinktisDraudima(Draudimas draudimas) {
  //  draudimas.emplace_back(draudimas);

}

const string &Zaidejas::getPavarde() const {
    return pavarde;
}

const string &Zaidejas::getAmzius() const {
    return amzius;
}





