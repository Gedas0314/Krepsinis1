//
// Created by Gediminas on 2021-05-07.
//

#ifndef KREPSINIS_KANDIDATAS_H
#define KREPSINIS_KANDIDATAS_H
#include <iostream>
using namespace std;


class Kandidatas {
private:
    string vardas;
public:
    Kandidatas(const string &vardas);

    const string &getVardas() const;

};


#endif //KREPSINIS_KANDIDATAS_H
