//
// Created by Gediminas on 2021-05-06.
//

#ifndef KREPSINIS_KOMANDA_H
#define KREPSINIS_KOMANDA_H
#include "Zaidejas.h"
#include <iostream>
#include <vector>

using namespace std;


class Komanda {
private:
vector<Zaidejas>zaidejai;



public:
    //void RinktisZaideja(Zaidejas zaidejas);
//void AtvaizduotiZaidejus();
bool Itraukti(const Zaidejas&zaidejas);
    void Atvaizduoti();
    const vector<Zaidejas>&GetZaidejai()const;



};


#endif //KREPSINIS_KOMANDA_H
