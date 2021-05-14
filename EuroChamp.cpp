#include "EuroChamp.h"




void EuroChamp::emplace_back(const EuroChamp &euroChamp) {

}



const string &EuroChamp::getPavadinimasKlubo() const {
    return pavadinimasKlubo;
}

const string &EuroChamp::getLaikoData() const {
    return laikoData;
}

const string &EuroChamp::getVietosAdresas() const {
    return vietosAdresas;
}

const string &EuroChamp::getTestas() const {
    return testas;
}

EuroChamp::EuroChamp(const string &pavadinimasKlubo, const string &laikoData, const string &vietosAdresas,
                     const string &testas) : pavadinimasKlubo(pavadinimasKlubo), laikoData(laikoData),
                                             vietosAdresas(vietosAdresas), testas(testas) {}
