#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

class lodowka {
    public:
        string nazwa;

        int sztuk;

        string rodzaj;

        string przepis;

        string calosc;

        //string skladniki;
        //float ilosc_skladniki;
};

int main() {
    lodowka jajkaObj;
    jajkaObj.nazwa = "Jajka";
    jajkaObj.sztuk = 8;
    jajkaObj.rodzaj = "szt.";

    lodowka makaronObj;
    makaronObj.nazwa = "Makaron";
    makaronObj.sztuk = 2;
    makaronObj.rodzaj = "opakowania";


    lodowka mieso_mieloneObj;
    mieso_mieloneObj.nazwa = "Mieso Mielone";
    mieso_mieloneObj.sztuk = 1;
    mieso_mieloneObj.rodzaj = "kg";


    jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
    makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
    mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;


    cout << jajkaObj.calosc<<"                           |\n";
    cout << makaronObj.calosc<<"                   |\n";
    cout << mieso_mieloneObj.calosc<<"                     |\n";
    cout << "---------------------------------------|\n";
    cout << "Przyrzadzone potrawy: \n";

    cout <<endl;

    string wybor_skladnika;

    cout<<"Wybierz skladnik z ktorego chcesz cos zrobic"<<endl<<endl;
    cin>>wybor_skladnika;
    cout<<endl;

    if (wybor_skladnika==jajkaObj.nazwa) {
        cout << "Mozliwy przepis to: "<<"Jajecznica"<<endl;
        cout<<"Potrzebne skladniki to: "<<jajkaObj.nazwa<<" "<<2<<" "<<jajkaObj.rodzaj<<endl;
        cout << "Czy chcesz go przyrzadzic (t/n)?"<<endl<<endl;
        char tak_nie;
        cin >> tak_nie;
        switch(tak_nie)
        {
            case 'T': case 't':
            cout<<"Trwa przyrzadanie"<<endl;
            Sleep(2000);
            cout << "Przyrzadziles jajecznice"<<endl;
            Sleep(1000);
            cout << "Teraz zajrzymy do lodowki"<<endl;
            Sleep(3000);
            system("cls");
            jajkaObj.sztuk = jajkaObj.sztuk - 2;

            jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
            makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
            mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

            cout << jajkaObj.calosc<<"                           |\n";
            cout << makaronObj.calosc<<"                   |\n";
            cout << mieso_mieloneObj.calosc<<"                     |\n";
            cout << "---------------------------------------|\n";
            cout << "Przyrzadzone potrawy: \n";
            cout << "Jajecznica 1 szt.";
            break;

            case 'N': case 'n':
            cout<<"Powrot do lodowki"<<endl;
            Sleep(2000);
            system("cls");



            jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
            makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
            mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

            cout << jajkaObj.calosc<<"                           |\n";
            cout << makaronObj.calosc<<"                   |\n";
            cout << mieso_mieloneObj.calosc<<"                     |\n";
            cout << "---------------------------------------|\n";
            cout << "Przyrzadzone potrawy: \n";
            break;
        }
    }
    else if (wybor_skladnika==makaronObj.nazwa) {
        cout << "Mozliwy przepis to: "<<"1. Spaghetti   2. Carbonara"<<endl;
        int jeden_dwa;
        cin >> jeden_dwa;
        switch(jeden_dwa)
        {
            case 1:
            cout<<"Potrzebne skladniki to: "<<makaronObj.nazwa<<" "<<1<<" "<<makaronObj.rodzaj<<",  "<<mieso_mieloneObj.nazwa<<" "<<1<<" "<<mieso_mieloneObj.rodzaj<<endl;

            cout << "Czy chcesz go przyrzadzic (t/n)?"<<endl<<endl;
            char tak_nie_spaghetii;
            cin >> tak_nie_spaghetii;
            switch(tak_nie_spaghetii)
            {
                case 'T': case 't':
                cout<<"Trwa przyrzadanie"<<endl;
                Sleep(2000);
                cout << "Przyrzadziles Spaghetti"<<endl;
                Sleep(1000);
                cout << "Teraz zajrzymy do lodowki"<<endl;
                Sleep(3000);
                system("cls");
                makaronObj.sztuk = makaronObj.sztuk - 1;
                mieso_mieloneObj.sztuk = mieso_mieloneObj.sztuk - 1;



                jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
                makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
                mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

                    cout << jajkaObj.calosc<<"                           |\n";
                    cout << makaronObj.calosc<<"                   |\n";
                    cout << mieso_mieloneObj.calosc<<"                     |\n";
                    cout << "---------------------------------------|\n";
                    cout << "Przyrzadzone potrawy: \n";
                    cout << "Spaghetti 1 szt.";

                break;

                case 'N': case 'n':
                cout<<"Powrot do lodowki"<<endl;
                Sleep(2000);
                system("cls");

                jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
                makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
                mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

                    cout << jajkaObj.calosc<<"                           |\n";
                    cout << makaronObj.calosc<<"                   |\n";
                    cout << mieso_mieloneObj.calosc<<"                     |\n";
                    cout << "---------------------------------------|\n";
                    cout << "Przyrzadzone potrawy: \n";

                break;
            }

            return 0;

            case 2:
            cout<<"Potrzebne skladniki to: "<<makaronObj.nazwa<<" "<<1<<" "<<makaronObj.rodzaj<<",  "<<jajkaObj.nazwa<<" "<<1<<" "<<jajkaObj.rodzaj<<endl;

            cout << "Czy chcesz go przyrzadzic (t/n)?"<<endl<<endl;
            char tak_nie_carbonara;
            cin >> tak_nie_carbonara;
            switch(tak_nie_carbonara)
            {
                case 'T': case 't':
                cout<<"Trwa przyrzadanie"<<endl;
                Sleep(2000);
                cout << "Przyrzadziles Carbonare"<<endl;
                Sleep(1000);
                cout << "Teraz zajrzymy do lodowki"<<endl;
                Sleep(3000);
                system("cls");
                makaronObj.sztuk = makaronObj.sztuk - 1;
                jajkaObj.sztuk = jajkaObj.sztuk - 1;

                jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
                makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
                mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

                    cout << jajkaObj.calosc<<"                           |\n";
                    cout << makaronObj.calosc<<"                   |\n";
                    cout << mieso_mieloneObj.calosc<<"                     |\n";
                    cout << "---------------------------------------|\n";
                    cout << "Przyrzadzone potrawy: \n";
                    cout << "Carbonara 1 szt.";

                break;

                case 'N': case 'n':
                cout<<"Powrot do lodowki"<<endl;
                Sleep(2000);
                system("cls");



                jajkaObj.calosc = jajkaObj.nazwa+" "+= to_string(jajkaObj.sztuk) +" "+ jajkaObj.rodzaj;
                makaronObj.calosc = makaronObj.nazwa+" "+= to_string(makaronObj.sztuk) +" "+ makaronObj.rodzaj;
                mieso_mieloneObj.calosc = mieso_mieloneObj.nazwa+" "+= to_string(mieso_mieloneObj.sztuk) +" "+ mieso_mieloneObj.rodzaj;

                    cout << jajkaObj.calosc<<"                           |\n";
                    cout << makaronObj.calosc<<"                   |\n";
                    cout << mieso_mieloneObj.calosc<<"                     |\n";
                    cout << "---------------------------------------|\n";
                    cout << "Przyrzadzone potrawy: \n";

                break;
            }
        }
    }

    cout << endl;

}
