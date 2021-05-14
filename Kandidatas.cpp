//
// Created by Gediminas on 2021-05-07.
//

#include "Kandidatas.h"

Kandidatas::Kandidatas(const string &vardas) : vardas(vardas) {}

const string &Kandidatas::getVardas() const {
    return vardas;
}
