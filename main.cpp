#include <iostream>
#include "ASMUO.h"
#include "Agentas.h"
#include "Zaidejas.h"
#include "LKL.h"
#include <ctime>
#include <windows.h>
#include "Vadybininkas.h"
#include "Treneris.h"
#include "Rungtynes.h"
#include "Asistentas.h"
#include "Draudimas.h"
#include "Polisas.h"
#include "EuroChamp.h"
#include <vector>
#include "Kandidatas.h"
#include "Vadovas.h"
#include <algorithm>
#include <string>
#include<conio.h>
#include <cstring>

using namespace std;
void setcolor(unsigned char color) {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//melyna
}//melyna



int main() {
    setcolor(0x01);//pirmine melyna

    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
//HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);//spalva
//SetConsoleTextAttribute(h,FOREGROUND_RED);//spalva
int score =0;
bool first = true;


    LKL lkl;
    Vadybininkas francas("Francas", "Francaitis", 90, lkl);
    Vadybininkas milda("Milda", "Mildute", 16, lkl);
    Agentas Rytas("LRytas", "Vilnius  ", 1000);
    //ASMUO asmuo("Petras", " Piotr  ", 25);
    //asmuo.Informacija();
    //Agentas agentas("LRytas", "Vilnius  ", 1000);
    vector<Zaidejas>zaidejai;

    Zaidejas jonas("Jonas", "Jonaitis", 25, "Krastas");
    Zaidejas samas("Samas", "Samuelis", 23, "Izaidejas");
    Zaidejas sabas("Arvydas", "Sabas", 50, "Centras");
    Zaidejas siska("Jurgis", "Siska", 25, "Krastas");
    Zaidejas magis("Margiris", "Margis", 18, "Puolėjas");

    zaidejai.emplace_back(jonas);
    zaidejai.emplace_back(samas);
    zaidejai.emplace_back(sabas);
    zaidejai.emplace_back(siska);
    zaidejai.emplace_back(magis);
    //string vardas;
    //cout << "Sukurkite savo treneri" << endl;
    //cout <<"Iveskite jo varda:";
    //getline(cin, vardas);
    //Treneris treneris(vardas);
   // cout << "Sveikiname jusu treneris: " << treneris.GetVardas() << " sukurtas!" << endl;
   // treneris.SudarytiKomanda(zaidejai);


   // cout << "MANO KOMANDOS NARIAI:" << endl;
   // for(auto it: treneris.GetKomanda().GetZaidejai()){
//        cout << it.GetVardas() << endl;
   // }
   // cout << "Narius skaicius: " << treneris.GetKomanda().GetZaidejai().size() << " nariai" << endl;

vector<Kandidatas>kandidatai;
Kandidatas sabonis("Arvydas Sabonis");
Kandidatas jesikevicius("Sarunas Jasikevicius");
Kandidatas chomicius("Valdas Chomicius");
Kandidatas paulauskas("Modestas Paulauskas");
Kandidatas kazlauskas("Jonas Kazlauskas");
Kandidatas girskis("Rimas Girskis");
Kandidatas macijauskas("Arvydas Macijauskas");
Kandidatas krapikas("Gintaras Krapikas");
Kandidatas maciulis("Jonas Mačiulis");


kandidatai.emplace_back(sabonis);
kandidatai.emplace_back(jesikevicius);
kandidatai.emplace_back(chomicius);
kandidatai.emplace_back(paulauskas);
kandidatai.emplace_back(kazlauskas);
kandidatai.emplace_back(girskis);
kandidatai.emplace_back(macijauskas);
kandidatai.emplace_back(krapikas);
kandidatai.emplace_back(maciulis);



HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);//spalva
SetConsoleTextAttribute(h,FOREGROUND_RED);//spalva



cout<<"*********************************************"<<endl;

string name;

cout<<"Sukurkite komandos ŠŪKĮ"<<endl;
cout<<"Iveskite ŠŪKĮ   "<<endl;
cout<<"*********************************************"<<endl;


getline(cin,name);
cout<<"*********************************************"<<endl;

cout<<"Šukis sukurtas:  "<<name<<","<<endl;
cout<<"*********************************************"<<endl;

Vadovas vadovas(name);
vadovas.SudarytiRinktine(kandidatai);

cout<<"Rinktinės pagrindiniai žaidėlai !"<<endl;
cout<<"...................."<<endl;
for(auto it: vadovas.getRinktine().GetKandidatai()){
    //if (first == true){name.push_back();}
    cout<<it.getVardas()<<endl;
    cout<<"...................."<<endl;
}
cout<<"Nariu skaicius: "<<vadovas.getRinktine().GetKandidatai().size()
<<", "<<endl;

//Vadovas vadovas(vardas);
 //   cout << "Sveikiname jusu treneris: " << vadovas.GetVardas() << " sukurtas!" << endl;

//cout<<"Ivardinkite treneri"<<endl;
//cout<<"Iveskite varda";
//getline(cin,name);
//Treneris treneris(name);
//cout<<"Jusu treneris:"<<treneris.getName()<<"treneris sukurtas"<<endl;

    Treneris valdas("Valdas", "Garastas", 90);
    //Asistentas zalias("Jurgis","Jurgaitis",25);
    cout<<"************************"<<endl;
    setcolor(0x01);//pirmine melyna
    Rungtynes rungtynes("LKL", "2021-05-08", "2021-07-27", "");
    Polisas polisas ("Trauma","Pilnas",5000);
    EuroChamp euroChamp("FIBA Taure","2021-06-01","Berlynas Vokietija","Kovid testas butinas");
    Apranga apranga("avaline", "raudona-juoda", "baltai-raudona");


    cout << "CEMPIONATAS " << rungtynes.GetPavadinimas() << endl;
    cout << "Turnyro trukme " << rungtynes.GetNuoData() <<" iki " << rungtynes.GetIkiData() << endl;
    //cout <<"Euro Cempionatas"<<","<<euroChamp.getPavadinimasKlubo()<<", "<<euroChamp.getVietosAdresas()<<", "<<euroChamp.getLaikoData()<<", "<<euroChamp.getTestas() <<    endl;
    for(auto it: rungtynes.GetTvarkarastis()){
        cout << it << endl;

    }
    cout<<"=========================="<<endl;
    cout<< "CEMPIONATAS EUROPOS TAURĖ" <<endl;
    cout <<"Euro Cempionatas"<<","<<euroChamp.getPavadinimasKlubo()<<", "<<euroChamp.getVietosAdresas()<<", "<<euroChamp.getLaikoData()<<", "<<euroChamp.getTestas() <<    endl;


    valdas.UzregistruotiZaideja(jonas);
    valdas.UzregistruotiZaideja(samas);
    valdas.UzregistruotiZaideja(sabas);
    valdas.UzregistruotiZaideja(siska);
    valdas.UzregistruotiZaideja(magis);
    int input = 100;

    while (input != 0) {

        //system("Color 1A");
//SetConsoleTextAttribute(h,FOREGROUND_BLUE);//spalva
        cout << "-----------------------" << endl;
        cout << "---------MENIU---------" << endl;
        cout << "-----------------------" << endl;
        cout << "1.  Žaidėjas " << endl;
        cout << "2.  Agentas" << endl;
        cout << "3.  Vadybininkas " << endl;
        cout << "4.  Treneris" << endl;
        ///cout << "5.  Vadovas" << endl;
        cout << "0.  Uždaryti programą" << endl;
        cin >> input;

        switch (input) {
            case 1:
                Zaidejas Meniu();
                cout << "---------------------- " << endl;
                cout << "Žaidėjas Jonas Valančiūnas registruotas čempionatui " << endl;
                cout << "CEMPIONATAS " << rungtynes.GetPavadinimas() << endl;
                cout << "Turnyro trukmė " << rungtynes.GetNuoData() <<" iki " << rungtynes.GetIkiData() << endl;
                cout << "Draudimas" << endl;
                cout << "-----------------------" << endl;
                cout << "Draudimo rūšis: "<< polisas.getKategorija()<<","<< " Pobudis: "<<polisas.getPavadinimas()<<","<< " Išmoka: "<< polisas.getKaina()<<"€,"<<endl;
                cout<<"Apranga apšilimui: "<<apranga.getApsilimoApranga()<<","<<"Apranga varžyboms: "<<apranga.getVarzybineApranga()<<","<<"Speciali: "<<apranga.getAvaline()<<","<<endl;
                cout << "-----------------------" << endl;
                cout << "Registruotas varžyboms " << endl;

                cout << "-----------------------" << endl;


                for(auto it: rungtynes.GetTvarkarastis()){
                    cout << it << endl;








                }







                break;
            case 2:
                Rytas.Meniu(francas);

                break;
            case 3:
                francas.Meniu();
                cout << "Vadybininkas" << endl;
                break;
            case 4:
                valdas.Meniu();
                cout << "--------------------------------------------------------------------" << endl;
                cout << "Apranga varžyboms: " << apranga.getVarzybineApranga()<<", Apranga apšilimui: "<<apranga.getApsilimoApranga() << endl;
                cout << "Komanda sukomplektuota !" << endl;
                break;
            default:
                cout << "Tokio punkto nėra, naudokite paruoštą sarašą pvz: 1, 2, 3," << endl;
                break;
           // case 5:
               // Vadovas.Meniu();
              //  cout << "Vadovas" << endl;
               // break;


        }


    }











    //LKL lkl;
    //for(RungtyniuTvarkarastis rungtynes: lkl.getRungtyniuTvarkarastis()){
    //    rungtynes.Informacija();
    //  }
    //lkl.getRungtyniuTvarkarastis();

//jonas.Informacija();
//agentas.Informacija();
    // agentas.Info();
    return 0;
}