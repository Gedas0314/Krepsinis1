#include "Treneris.h"
#include "LKL.h"
#include<iostream>
#include "EuroChamp.h"
#include "Apranga.h"
#include <windows.h>
#include "Vadovas.h"
#include "Kandidatas.h"
#include "Zaidejas.h"


Rungtynes rungtynes("LKL", "2021-04-08", "2021-07-27", "");
EuroChamp euroChamp("FIBA Taure","2021-06-01","Berlynas Vokietija","Kovid testas butinas");
EuroChamp euroChamp1("FIBA Čempionatas ", "2021/2022 sezonas ", "Paryžius Prancuzija ", "Skiepų pasas privalomas");
Zaidejas jonas("Jonas", "Jonaitis", 25, "Krastas");
Apranga apranga("avaline", "raudona-juoda", "baltai-raudona");
void PerziuretiPasirinkima();
void Treneris::UzregistruotiZaideja(Zaidejas zaidejas){
    komanda.emplace_back(zaidejas);
}

Treneris::Treneris(const string &vardas, const string &pavarde, int amzius) : ASMUO(vardas, pavarde, amzius) {

}
void Treneris::SudarytiKomanda(vector<Zaidejas> nariai) {

}


void Treneris::Meniu() {
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);//spalva
   SetConsoleTextAttribute(h,FOREGROUND_GREEN);//spalva
    int input = 100;

    while (input != 0) {



        cout << "-----------------------" << endl;
        cout << "----Trenerio  MENIU----" << endl;
        cout << "-----------------------" << endl;
        cout << "1.  Komandos sudėtis " << endl;
        cout << "2.  Sąstatas " << endl;
        cout << "3.  Rungtynes " << endl;
        cout << "4.  Apranga " << endl;

        cout << "0.  Grįžti atgal" << endl;
        cout<<"-----------------------"<<endl;

        cin >> input;

        int a = 10; // 10
        int b = 20; // 20
        switch (input) {
            case 1:
                //Treneris Sudetis(); // 1 egz -> a
                Treneris idetiInformacija();
                for (const auto & narys:komanda) {
                    cout<<narys.getVardas()<<endl;
                    //cout<<narys.GetPozicija()<<endl;

cout<<"........"<<endl;
                }


                break;
            case 2:
                //Treneris Sastatas(); // 2 egz -> b


                for(const auto& narys: komanda){
                    cout << narys.getVardas()<< "  "<<narys.GetPozicija()<< ""<<narys.getPavarde()<<""<<narys.getAmzius()<<endl;
                }



                break;
            case 3:
                cout<<"-----------------------------------------------------------------------------------------"<<endl;
                cout<<"Numatomos rungtynes Euro FIBA "<<endl;
                cout<<"-----------------------------------------------------------------------------------------"<<endl;
                cout<<"Euro Čempionatas  "<<euroChamp.getPavadinimasKlubo()<<","<<euroChamp.getVietosAdresas()<<","
                <<euroChamp.getLaikoData()<<","<<euroChamp.getTestas() <<    endl;
                cout<<"Euro Čempionatas "<<euroChamp1.getPavadinimasKlubo()<<","
                <<euroChamp1.getVietosAdresas()<<","<<euroChamp1.getLaikoData()<<","<<euroChamp1.getTestas()<<endl;
                cout<<"-----------------------------------------------------------------------------------------"<<endl;
                cout<<"Numatomos rungtynes LKL "<<endl;
                cout<<"-----------------------------------------------------------------------------------------"<<endl;
                for(auto it: rungtynes.GetTvarkarastis()){
                   cout << it << endl;
                }



                break;

            case 4:


                cout<<"Apranga !"<<endl;
                cout << "Apranga varžyboms: " << apranga.getVarzybineApranga()<<", Apranga apšilimui: "<<apranga.getApsilimoApranga() << endl;


                  //  Treneris treneris( vardas);
                  //     Treneris.SudarytiRinktine(kandidatai);
                  //    cout<<"Rinktinės pagrindiniai žaidėlai !"<<endl;

                    // for(auto it: treneris.getRinktine().GetKandidatai()){
                     //    cout<<it.getVardas()<<endl;

                    //  }
                  //     cout<<"Nariu skaicius: "<<treneris.getRinktine().GetKandidatai().size()
               //  <<", "<<endl;


              //  }


             //   break;
           // default:
                //cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
                break;

        }


    }

}


void Treneris::Sudetis() {
    int input = 100;
    cin >> input;

    int a = 10; // 10
    int b = 20; // 20

    while (input != 0) {

        cout << "-----------------------" << endl;
        cout << "----Komandos sudetis---" << endl;
        cout << "-----------------------" << endl;
        cout << "1.  Startinis penketas " << endl;
        cout << "2.  Atsarginiai " << endl;
        cout << "0.  Grįžti atgal" << endl;

        cin >> input;


        switch (input) {
            case 1:
                Treneris IdetiInformacija();
                break;
            case 2:
                cout << "Peržiūrėti  info" << endl;
                break;
            default:
                cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
                break;

        }


    }

}

void Treneris::Sastatas() {
    int input = 100;
    cin >> input;

    int a = 10; // 10
    int b = 20; // 20

    while (input != 0) {

        cout << "-----------------------" << endl;
        cout << "------Sastatas---------" << endl;
        cout << "-----------------------" << endl;
        cout << "1.  1 " << endl;
        cout << "2.  2 " << endl;
        cout << "0.  Grįžti atgal" << endl;

        cin >> input;


        switch (input) {
            case 1:
                Treneris IdetiInformacija();
                break;
            case 2:
                cout << "Peržiūrėti  info" << endl;
                break;
            default:
                cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
                break;

        }


    }

}

void Treneris::PerziuretiAnonsus() {

}

Treneris::Treneris(const string &vardas, const string &pavarde, int amzius, const string &name) : ASMUO(vardas, pavarde,
                                                                                                        amzius),name(name) {}

       //__________________//

const Rinktine &Treneris::getRinktine() const {
    return rinktine;
}
void Treneris::SudarytiRinktine(vector<Kandidatas> kandidatai) {
    int pasirinkimas = 1;
    while (true){
        cout <<"-----------Kandidatai----------"<<endl;
        cout <<"9.Uzdaryti programa"<<endl;
        for(int i=0; i<kandidatai.size();++i){
            cout <<(i+1)<<"."<<kandidatai[i].getVardas()<<endl;
        }
        cout<<"-------------------------"<<endl;
        cout <<"Pasirinkite kandidata:";
        cin>>pasirinkimas;
        if(pasirinkimas==0){
            break;
        }
        bool arEgzistuoja=rinktine.Itraukti(kandidatai[pasirinkimas -1]);
        if(arEgzistuoja){
            cout<<kandidatai[pasirinkimas-1].getVardas()<<"sekmingai itrauktas"<<endl;

        }
    }
    rinktine.Atvaizduoti();//
}

const string &Treneris::getName() const {
    return name;
}


//const vector<Zaidejas> &Treneris::GetKomanda() const {
 //   return komanda;
//}