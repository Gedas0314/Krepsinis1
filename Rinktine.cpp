//
// Created by Gediminas on 2021-05-07.
//

#include "Rinktine.h"

const vector<Kandidatas> &Rinktine::GetKandidatai() const {
    return kandidatai;
}
bool Rinktine::Itraukti(const Kandidatas &kandidatas) {
    kandidatai.emplace_back(kandidatas);
    return true;

}
void Rinktine::Atvaizduoti() {
    //cout<<"====================================="<<endl;
    cout<<"======**===== Rinktine sudaryta =====**======"<<endl;
    for (const auto &it:kandidatai){
        cout<<it.getVardas()<<endl;
    }
  cout <<"=============================================="<<endl;
}