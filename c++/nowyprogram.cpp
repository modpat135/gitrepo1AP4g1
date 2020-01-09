/*
 * nowyprogram.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    float ocena, liczbaocen, suma;
    suma = 0;
    cout << "Podaj liczbę ocen: ";
    cin >> liczbaocen;
    while (liczbaocen < 1) {
        cout "podaj liczbę ocen: ";
        cin >> liczbaocen;
    }
	for(5) {
            cout << "Podaj ocenę: ";
            cin >> ocena;
            while (ocena > 6) {
                cout << "Podaj prawidłową ocenę: " ;
                cin >> ocena;
                suma = suma + ocena;
        }
    }
	return 0;
}

