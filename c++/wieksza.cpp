/*
 * wieksza.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    cout << "Podaj liczbę a: " << endl;
    cin >> a;
	cout << "Podaj liczbę b: " << endl;
    cin >> b;
    
    if(a > b)
        cout << "a > b";
    else if(a < b) 
        cout << "a < b";
    else
        cout << "a=b";
    
	return 0;
}

