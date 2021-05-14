//
// Created by Gediminas on 2021-05-07.
//

#ifndef KREPSINIS_RINKTINE_H
#define KREPSINIS_RINKTINE_H
#include "Kandidatas.h"
#include <iostream>
#include <vector>
using namespace std;


class Rinktine {
private:
    vector<Kandidatas>kandidatai;
public:
    bool Itraukti(const Kandidatas& kandidatas);
    void Atvaizduoti();
    const vector< Kandidatas> & GetKandidatai() const;

};


#endif //KREPSINIS_RINKTINE_H
