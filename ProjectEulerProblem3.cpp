#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int num = 600851475143;
    int largest = 0;
    vector<int> primes = {};
    for (long long int c=3; c<num/2; c+=2) {
        //cout << " c " << c << " ((double) num)/c " << ((double) num)/c << " (double)(num/c) " << (double)(num/c) << endl;
        if (c%10!=5&&((double) num)/c == (double)(num/c)) {
            cout << "hi" << c << endl;
            bool cPrime = true;
            for (long long int d=2; d<c; d++) {
                //cout << " c " << c << " d " << d << " (int)(((double) c)/d) " << (int)(((double) c)/d) << " (double)((int)(c/d)) " << (double)((int)(c/d)) << endl;
                if (((double) c)/d == (double) (c/d)) {
                    cPrime = false;
                    c=num;
                    break;
                }
            }
            if (cPrime) {
                primes.push_back(c);
                cout << "add" << endl;
            }
        }
    }
    cout << "jeez done" << endl;
    for (int p : primes) {
        if (p > largest) {
            largest = p;
            cout << p << endl;
        }
    }
    cout << "Largest prime of " << num << " is " << largest << endl;
}