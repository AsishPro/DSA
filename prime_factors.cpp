#include <iostream>
using namespace std;

int primefactors(long long n) {
    int c = 0;

    if (n % 2 == 0) {
        c++;
        while (n % 2 == 0) {
            n = n / 2;
        }
    }

    // Check for odd numbers from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            c++;
            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    
    // This condition is to check if n is a prime number greater than 2
    if (n > 2) {
        c++;
    }
    
    return c;
}

int main() {
    long long num = 35479080000;
    cout << "Number of distinct prime factors: " << primefactors(num) << endl;
    return 0;
}
