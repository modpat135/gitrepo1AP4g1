/*
 * placa.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	float ln, stawka, placa;
    cout << "Podaj liczbę nadgodzin: " << endl;
    cin >> ln;
    cout << "Podaj stawkę za godznę: " << endl;
    cin >> stawka;
    
    if( ln <= 30) {
        placa = ln * stawka;
    else
        
    }    
    
	return 0;
}

