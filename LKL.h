#ifndef KREPSINIO_KOMANDA_LKL_H
#define KREPSINIO_KOMANDA_LKL_H
#include <vector>
#include <iostream>
#include "RungtyniuTvarkarastis.h"
#include "Rungtynes.h"

using namespace  std;



class LKL{
        //: public Rungtynes{
public:
    LKL();

    static void IdetiNaujasVarzybas(RungtyniuTvarkarastis rungtyniuTvarkarastis);

    const vector<RungtyniuTvarkarastis> &getRungtyniuTvarkarastis() const;


public:
    vector<RungtyniuTvarkarastis>rungtyviuTvarkarastis;

    const vector<RungtyniuTvarkarastis> &getRungtyviuTvarkarastis() const;

    void setRungtyviuTvarkarastis(const vector<RungtyniuTvarkarastis> &rungtyviuTvarkarastis);
private:
    vector<RungtyniuTvarkarastis> rungtyniuTvarkarastis;


};


#endif //KREPSINIO_KOMANDA_LKL_H