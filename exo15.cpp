#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const score("C:\c\score.txt");
    ifstream monFlux(score.c_str());
    if (monFlux)
    {
        string ligne;
        while(getline(monFlux,ligne))
        cout<<ligne<<endl;
    } 
    else
    {
        cout<<"Erreur : Impossible d'ouvrir le fichier."<<endl;
    }
    return 0;
}