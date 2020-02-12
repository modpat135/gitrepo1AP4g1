/*
 * cw1.cpp
 */


#include <iostream>
using namespace std;

void pobierzliczby(int t[], int n){
    for (int i = 0; i < n; i++) {
    cout << "Podaj liczbę: ";
    cin >> t[i];
    
    }
}

void drukuj(int t[], int n) {
    for (int i = 0; i < n; i++){
        cout << t[i] << " ";
    }
    cout << endl;
}

float sumujtab(int t1[], n) {
    int suma1 = 0;
    suma1 = suma1 + t1[i]
    return suma1
}

float sumujtab(int t2[], n) {
    int suma2 = 0;
    suma2 = suma2 + t2[i]
    return suma2
}

int main(int argc, char **argv)
{   
    int n= 5;
    int t1[n];
    int t2[n];
    pobierzliczby(t1, n);
    pobierzliczby(t2, n);
    drukuj(t1, n);
    drukuj(t2, n);
    
    int s1 = sumujtab(t1, n);
    int s2 = sumujtab(t2, n);
	
	return 0;
}

