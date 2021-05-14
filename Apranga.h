//
// Created by Gediminas on 2021-05-03.
//

#ifndef KREPSINIS_APRANGA_H
#define KREPSINIS_APRANGA_H
#include <iostream>
#include <string>

using namespace std;


class Apranga {
private:
    string avaline;
    string apsilimoApranga;
    string varzybineApranga;



public:
    Apranga(const string &avaline, const string &apsilimoApranga, const string &varzybineApranga);

    const string &getAvaline() const;

    const string &getApsilimoApranga() const;

    const string &getVarzybineApranga() const;


};


#endif //KREPSINIS_APRANGA_H
