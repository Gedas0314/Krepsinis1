#ifndef KREPSINIO_KOMANDA_ASMUO_H
#define KREPSINIO_KOMANDA_ASMUO_H
#include <iostream>

#include <string>

using namespace std;

class ASMUO {
public:
    void Informacija();
    int GautiID();
    void KeistiID(int id);
    const string &getVardas() const;
    void setVardas(const string &vardas);

protected:
    string vardas="Nera";
    string pavarde="Nera";
    int amzius = 0;
public:
    ASMUO(const string &vardas, const string &pavarde, int amzius);

private:
    int id;



};


#endif //KREPSINIO_KOMANDA_ASMUO_H

