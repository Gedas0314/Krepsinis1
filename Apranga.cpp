//
// Created by Gediminas on 2021-05-03.
//

#include "Apranga.h"

Apranga::Apranga(const string &avaline, const string &apsilimoApranga, const string &varzybineApranga) : avaline(
        avaline), apsilimoApranga(apsilimoApranga), varzybineApranga(varzybineApranga) {}

const string &Apranga::getAvaline() const {
    return avaline;
}

const string &Apranga::getApsilimoApranga() const {
    return apsilimoApranga;
}

const string &Apranga::getVarzybineApranga() const {
    return varzybineApranga;
}
