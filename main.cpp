#include <iostream>
#include <windows.h>

using namespace std;

string napis;

int main()
{
    SetConsoleOutputCP(1250);
    SetConsoleCP(1250);

    cout << "Za��� g�l� ja��." << endl;
    cin >> napis;
    cout << "Wpisany ci�g znak�w: " << napis << endl;
    return 0;
}
