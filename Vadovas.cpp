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
        cout << "==========RINKTINĖS KANDIDATAI==========" << endl;
        if (first == true)
           for (int i = 0; i < kandidatai.size(); ++i) {
                cout << (i + 1) << ". " << kandidatai[i].getVardas() << endl;
            }


        cout << "0. Uždaryti programa!" << endl;
        cout << "=============================================" << endl;

        cout << "Pasirinkite kandidatą:";
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
            cout << kandidatai[pasirinkimas - 1].getVardas() << " Sėkmingai itrauktas į komandą!" << endl;
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
    cout << "SUDARYTI ATSARGINĮ RINKTINĖS NARIŲ SĄRAŠĄ: \n";
    cout << "Įvesti vardą ir priskirti numerį : \n";
    cout << "Uždaryti sąrašą, spausti 0 : \n";
    cout << "----------------------------------------------" << endl;
    cin.ignore();
    while ((cin >> name   >> nr) && (name != "0") ) {

        if (first) {
            numeris.push_back(nr);
            names.push_back(name);

            //cin.ignore(256, ' ');
        } else {
            bool duplicate = false;
            for (int i = 0; i < names.size(); i++) {
                if (name == names[i])
                    duplicate = true;
            }


            if (duplicate) {
                cout << "Toks vardas ar numeris jau yra!\n";
            } else {
                numeris.push_back(nr);
                names.push_back(name);
            }
        }
        first = false;
        cout << "Įvesti vardą ir numerį : ";
    }

    cout << "---------------------------------------------" << endl;
    cout << "===**=== KOMANDA SUDARYS ===**===\n" << endl;
    cout << "Rinktinės atsarginiai žaidėjai" << endl;
    cout << "................................" << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << "Vardas: " << names[i] <<"," << "Nr: " << numeris[i] << "\n";

    }


    cout << "---------------------------------------------" << endl;

}