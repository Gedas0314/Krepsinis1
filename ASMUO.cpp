#include "ASMUO.h"
#include <cstdlib>
#include <ctime>


void ASMUO::Informacija() {
    cout <<"Vardas: "<<vardas<< ", Pavarde: "<< pavarde<< "Amzius: " <<amzius<<endl;



}

int ASMUO::GautiID() {
    return id;

}

void ASMUO::KeistiID(int id) {

    ASMUO::id = id;



}

const string &ASMUO::getVardas() const {
    return vardas;
}

void ASMUO::setVardas(const string &vardas) {
    ASMUO::vardas = vardas;
}

ASMUO::ASMUO(const string &vardas, const string &pavarde, int amzius) : vardas(vardas), pavarde(pavarde),
                                                                        amzius(amzius) {}


