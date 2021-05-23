#include "Agentas.h"
#include "windows.h"
#include <iostream>
#include <string>
using namespace std;
//#include <cmath>
#include <vector>
//#include <algorithm>
//void setcolor( unsigned char color )
//{
//  SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), color );
//}
void Agentas::UzregistruotiZaideja(Zaidejas zaidejas){
    komanda.emplace_back(zaidejas);
}

Agentas::Agentas(const string &vardas, const string &pavarde, int amzius) : ASMUO(vardas, pavarde, amzius) {}
void Agentas::Info() {


    cout<<"Agentas"<<vardas<<"pav:"<<pavarde<<endl;

}
void Agentas::IdetiInformacija(Vadybininkas vadybininkas) {


    int premija;
    string pavadinimas, varzybos;
    cout<<"----------------------------------"<<endl;
    cout<<"----------Būsimos varžybos--------"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Nurodykite pavadinimą čempionato:  ";
    cin.ignore();

    getline(cin,pavadinimas);
    cout<<"Nurodykite susitinkančias komandas: ";

    getline(cin,varzybos);


    cout<<"Nurodykite prizinį fondą ";
    cin>>premija;

    cout<<"Premija: "<< premija<<", Varzybos: "<< pavadinimas<<", Susitinka: "<< varzybos<<endl;

    RungtyniuTvarkarastis anonsas(pavadinimas,varzybos,premija);
    cout<<"PREMIJA: "<< premija<<", ČEMPIONATAS: "<< pavadinimas<<", SUSITINKA: "<< varzybos<<endl;

    //vadybininkas.IdetiInformacija(RungtyniuTvarkarastis(pavadinimas,varzybos,premija));
    vadybininkas.IdetiInformacija(anonsas);


}

void Agentas::Meniu(Vadybininkas vadybininkas) {

//}

//void Agentas::Meniu() {
    int input = 100;

    while (input != 0) {
        //setcolor( 0x00 );
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//spalva
        SetConsoleTextAttribute(h, FOREGROUND_RED);//spalva
        cout << "-----------------------" << endl;
        cout << "-----AGENTŪROS MENIU---" << endl;
        cout << "-----------------------" << endl;
        cout << "1.  Įdėti skelbimą" << endl;
        cout << "2.  Agentūros informacija" << endl;
        cout << "0.  Grįžti atgal" << endl;
        // setcolor( 0x01 );

        cin >> input;


        switch (input) {
            case 1:
                IdetiInformacija(vadybininkas);
                break;
            case 2:
                // setcolor(0x02);
                cout << "---------------------------------------------------------------------" << endl;
                cout << "Atstovaujam žaidėjams, derinam atstovavimo sąlygas su klubų vadovybe. " << endl;
                cout << "Derinam kontraktus ir draudimines sąlygas." << endl;
                cout << "---------------------------------------------------------------------" << endl;
                for (const auto &narys:komanda) {
                    cout << narys.getVardas() << endl;

                }
                {
                    vector<double> scores;
                    vector<string> names;
                    string name = " ";
                    int score = 0;
                    bool first = true;
                    cout << "Sudaryti dominančių žaidėjų sąrašą ir nurodyti kontrakto sumą eur.(įvesti kartu) : \n";
                    cout << "Įvesti vardą ir kontrakto sumą : \n";
                    cout << "Uždaryti spausti 0 : \n";
                    cout << "---------------------------------------------------------------------" << endl;
                    while ((cin >> name >> score) && (name != "NoName") && (score != 0)) {
                        if (first) {
                            scores.push_back(score);
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
                                scores.push_back(score);
                                names.push_back(name);
                            }
                        }
                        first = false;
                        cout << "Įvesti vardą ir kontrakto sumą : ";
                    }
                    for (int i = 0; i < names.size(); i++) {
                        cout<<"vardas: " << names[i] <<'\t'<<"€: "<< scores[i] << "\n";
                    }

                    break;
                    // default:
                   // cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
                   // break;

                }


        }

    }

   // const string &Agentas::getInformacija() const {
   //     return informacija;
  //  }




//void Agentas::IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis) {
//    vadybininkas.IdetiInformacija()

}
