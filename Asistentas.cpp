#include "Asistentas.h"
#include <iostream>
using namespace std;

Asistentas::Asistentas(const string &vardas, const string &pavarde, int amzius) : Treneris(vardas, pavarde, amzius) {}

void Asistentas::IdetiApranga(Apranga apranga){
  aprangosKomplektas.emplace_back( apranga);

}
void Asistentas::AtvaizduotiAprangosKomplektus() {
    cout<< "Apranga"<<endl;
    for(auto it:aprangosKomplektas){
        cout<<it.getApsilimoApranga()<<it.getAvaline()<< it.getVarzybineApranga()<<endl;
    }
}