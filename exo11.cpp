#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const score("C:\c\score.txt");
    ofstream monFlux(score.c_str());
    if (monFlux)
    {
        cout<<"Pas de souci lors de l'ouverture du fichier."<<endl;
    }
    else
    {
        cout<<"Erreur : Impossible d'ouvrir le fichier."<<endl;
    }
    return 0;
}