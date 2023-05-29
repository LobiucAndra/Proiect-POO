#include <iostream>
#include "Joc.h"
#include "Meniu.h"


using namespace std;

int main()
{
    Meniu meniu=Meniu();
    int optiune_meniu;
    Joc joc1=Joc();

    char buff[10];

    while(1)
    {
        joc1.clearScreen();

        meniu.afisare_meniu();
        optiune_meniu=meniu.citire_optiune();

        switch(optiune_meniu)
        {
            case 1:
                joc1.start();
                break;
            case 2:
                meniu.afisare_reguli();
                cout<<"Pentru a reveni la meniul principal apasa o tasta si ENTER"<<endl;
                cin>>buff;
                break;
            case 3:
                joc1.SaveGame();
                cout << "Joc salvat! Apasa o tasta pentru a continua\n";
                cin >> buff;
                break;
            case 4:
                joc1.LoadGame();
                cout << "Joc incarcat! Apasa o tasta pentru a continua\n";
                cin >> buff;
                break;
            case 5:
                return 0;
            default:
                cout << "Optiune invalida.";
                cin >> buff;
                break;
        }
    }
    return 0;
}
