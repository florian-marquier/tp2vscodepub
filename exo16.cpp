#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const score("c/score.txt");
    ofstream monFlux(score.c_str());
    if (monFlux)
    {

    }
    else
    {
        cout<<"Erreur : Impossible d'ouvir le fichier."<<endl;
    }
    monFlux.close();
    return 0;
}