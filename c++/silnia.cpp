/*
 * silnia.cpp
 * 0! = 1! = 1
 * 2! = 1 * 2 = 2
 * 5! = 1 * 2 * 3 * 4 * 5 = 120
 * 6! = 5! * 6 = 720
 * 
 * n! = 1 dla n = {0, 1}
 * n! = 1 *... * n dla n = N+-{1}
 */


#include <iostream>
using namespace std;

long silnia_it(int n) {
    long s = 1;
    for (int i=2; i<=n; i++) {
        s *= i;

    }
    
    return s;
}

long silnia_re(int n) {
    if ( n == 0)
        return 1;
    else
        return silnia_re(n-1) * n;
        
}


int main(int argc, char **argv)
{
	int n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    cout << n << "! = " << silnia_it(n);
    
	return 0;
}

