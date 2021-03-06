/*
 * cw2tab.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

void wypelnij(int t[][10], int w, int k, int n) {
    srand(time(NULL));
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            t[i][j] = rand() % (n+1);
            cout << i << "," << j << " " << t[i][j] << endl;
        }
    }
}

void sumujw(int t[][10], int w, int k) {
    int sumaw = 0;
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            cout << setw(4) << t[i][j];
            sumaw += t[i][j];
        }
        cout << setw(6) << sumaw <<endl;
    }
}

void sumujk(int t[][10], int w, int k) {
    int sumak = 0;
    for(int j=0; j<k; j++) {
        for(int i=0; i<w; i++) {
            cout << setw(4) << t[i][j];
            sumak += t[i][j];
        }
        cout << setw(6) << sumak <<endl;
    }
}

int main(int argc, char **argv)
{
	int n = 0;
    cout << "Podaj wartość maksymalną: ";
    cin >> n;
    
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    sumujw( tab, w, k);
    sumujk( tab, w, k);
    
	return 0;
}

