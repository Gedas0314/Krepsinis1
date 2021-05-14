//
// Created by Gediminas on 2021-05-07.
//

#include "Vadovas.h"

bool first = true;

Vadovas::Vadovas(const string &vardas) : vardas(vardas) {}

const string &Vadovas::getVardas() const {
    return vardas;
}




const Rinktine &Vadovas::getRinktine()  const {
    return rinktine;
}

void Vadovas::SudarytiRinktine(vector<Kandidatas> kandidatai) {


    int pasirinkimas = 1;
    while (true) {
        cout << "=================Kandidatai======================" << endl;
        //cout << "0. Uzdaryti programa!" <<endl;
        if (first == true)
            for (int i = 0; i < kandidatai.size(); ++i) {
                cout << (i + 1) << ". " << kandidatai[i].getVardas() << endl;
            }
        cout << "0. Uzdaryti programa!" << endl;
        cout << "=================================================" << endl;

        cout << "Pasirinkite kandidata:";
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            break;
        }
            //if(rungtyniuTvarkarastis.getPremija()<=400 || rungtyniuTvarkarastis.getPavadinimas()==" "|| rungtyniuTvarkarastis.getVarzybos()==" "){

        else {
            bool dublicate = false;
        }
        bool arEgzistuoja = rinktine.Itraukti(kandidatai[pasirinkimas - 1]);


        if (arEgzistuoja) {
            cout << kandidatai[pasirinkimas - 1].getVardas() << " sekmingai itrauktas i komanda!" << endl;
        }

//if (arEgzistuoja==arEgzistuoja[i])
        //   dublicate=falce;
    }
    // if(dublicate)
    // {
    //     cout<<"Toks kandidatas jau pasirinktas!";
    // }
    rinktine.Atvaizduoti();


    vector<double> numeris;
    vector<string> names;
    string name = " ";
    int nr = 0;
    bool first = true;
    cout << "Sudaryti atsarginį rinktinės narių sąraša, nurodyti numerį: \n";
    cout << "Įvesti vardą ir numerį : \n";
    cout << "Uždaryti sąrašą, spausti 0 : \n";
    cout << "---------------------------------------------------------------------" << endl;
    while ((cin >> name >> nr) && (name != "NoName") && (nr != 0)) {
        if (first) {
            numeris.push_back(nr);
            names.push_back(name);
        } else {
            bool duplicate = false;
            for (int i = 0; i < names.size(); i++) {
                if (name == names[i])
                    duplicate = true;
            }

            if (duplicate) {
                cout << "Toks vardas jau yra!\n";
            } else {
                numeris.push_back(nr);
                names.push_back(name);
            }
        }
        first = false;
        cout << "Įvesti vardą ir numerį : ";
    }
    for (int i = 0; i < names.size(); i++) {
        cout << "vardas: " << names[i] <<"," << "Nr: " << numeris[i] << "\n";
        cout << "-------------PPPPP---------------------" << endl;
    }


}