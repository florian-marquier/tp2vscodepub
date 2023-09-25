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
        monFlux<<"Je peux ecrire une phrase dans un fichier."<<endl;
        monFlux<<48.9846<<endl;
        int age(18);
        monFlux<<"J'ai "<<age<<" ans. Je suis majeur."<<endl;
    }
    else
    {
        cout<<"Erreur : Impossible d'ouvrir le fichier."<<endl;
    }
    return 0;
}