//
// Created by Gediminas on 2021-05-07.
//

#ifndef KREPSINIS_VADOVAS_H
#define KREPSINIS_VADOVAS_H
#include "Rinktine.h"
#include "Kandidatas.h"
#include "iostream"
using namespace std;


class Vadovas {
private:
    string pareigos;
    Rinktine rinktine;
    string vardas;

public:
    Vadovas(const string &vardas);

    const string &getVardas() const;

    const Rinktine &getRinktine() const;
    void Meniu();

    //void SudarytiRinktine(vector<Kandidatas>kandidatai);
    void SudarytiRinktine(vector<Kandidatas>kandidatai);
};





#endif //KREPSINIS_VADOVAS_H
