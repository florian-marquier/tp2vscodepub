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
        monFlux<<"Je rajoutes une ligne dans mon fichier."<<endl;
    }
    else
    {
        cout<<"Erreur : Impossible d'ouvrir le fichier."<<endl;
    }
    return 0;
}