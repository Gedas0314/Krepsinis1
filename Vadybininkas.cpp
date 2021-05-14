#include "Vadybininkas.h"
#include "Rungtynes.h"
#include "Treneris.h"
#include "LKL.h"
#include "EuroChamp.h"

Vadybininkas::Vadybininkas(const string &vardas, const string &pavarde, int amzius,LKL lkl )
        : Treneris(vardas, pavarde,amzius), lkl (lkl) {}
void Vadybininkas::Vadybininkas::IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis){
    if(rungtyniuTvarkarastis.getPremija()<=400 || rungtyniuTvarkarastis.getPavadinimas()==" "|| rungtyniuTvarkarastis.getVarzybos()==" "){
        cout<<" Jusu informacija nepatvirtinta"<<endl;
    }else{lkl.IdetiNaujasVarzybas(rungtyniuTvarkarastis);
        cout<<"Jusu informacija patvirtinta."<<endl;
    }
}
void Vadybininkas::PerziuretiAnonsus() {
   for(RungtyniuTvarkarastis rungtynes: lkl.getRungtyniuTvarkarastis()){
        rungtynes.Informacija();
    }
}


void Vadybininkas::Meniu() {
    int  input = 100;

    while (input!= 0){
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);//spalva
        SetConsoleTextAttribute(h,FOREGROUND_BLUE);//spalva

        cout<<"-----------------------"<<endl;
        cout<<"---VADYBININKO  MENIU--"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.  Peržiūrėti rungtynių tvarkaraščio informaciją"<<endl;
        cout<<"2.  Peržiūrėti LKL rungtynių sąrašą"<<endl;
        cout<<"0.  Grįžti atgal"<<endl;

        cin >> input;

        Rungtynes rungtynes("LKL", "2021-04-08", "2021-07-27", "");
        switch (input){
            case 1:
                cout<<"Peržiūrėti rungtynių tvarkaraščio informaciją"<<endl;
                PerziuretiAnonsus();
                break;
            case 2:
                cout<<"Peržiūrėti LKL rungtynių sąrašą"<<endl;
                //PerziuretiAnonsus();
               // cout << "Turnyro trukme " << rungtynes.GetNuoData() <<" iki " << rungtynes.GetIkiData() << endl;
                cout<<"----------------------"<<endl;
                cout<<"Numatomos rungtynes"<<endl;
                cout<<"----------------------"<<endl;
                for(auto it: rungtynes.GetTvarkarastis()){
                    cout << it << endl;
                }

                break;
            default:
                cout<<"Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2,"<<endl;
                break;

        }



    }

}

