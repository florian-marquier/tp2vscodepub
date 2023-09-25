#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ("Coucou les copain!");
    for (char c : str)
    {
        cout <<c<<' ';
    }
    cout<<endl;
    return 0;
}