//
// Created by Gediminas on 2021-05-06.
//

#include "Komanda.h"
#include <iostream>
using namespace std;

//void Komanda::RinktisZaideja(Zaidejas zaidejas) {

   // zaidejai.emplace_back(zaidejas);
//}


//void Komanda::AtvaizduotiZaidejus() {
 //   cout<<"****************"<<endl;
 //   cout<<"Komanda"<<endl;
  //  cout<<"****************"<<endl;
 //   for (auto it: zaidejai){
 //       cout<<it.getVardas()<<it.getPavarde()<<"Numeris"<<it.GetPozicija()<<endl;
 //   }

//}
const vector<Zaidejas>&Komanda::GetZaidejai() const {
    return zaidejai;

}
bool Komanda::Itraukti(const Zaidejas &zaidejas) {
    zaidejai.emplace_back(zaidejas);
    return true;
}
void Komanda::Atvaizduoti() {
cout << "======================================Komanda===============================" << endl;
for (const auto &it: zaidejai) {
cout << it.GetVardas()<<""<<it.getPavarde()<<""<<it.getAmzius()<<it.GetPozicija()<< endl;
}
cout << "===============================================================================" << endl;


}