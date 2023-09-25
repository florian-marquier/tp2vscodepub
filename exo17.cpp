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
        int position = monFlux.tellp();
        cout<<"Nous nous situons au "<<position<<"eme caractere du fichier."<<endl;
    }
    else
    {
        cout<<"Erreur : Impossible d'ouvrir le fichier."<<endl;
    }
    return 0;
}