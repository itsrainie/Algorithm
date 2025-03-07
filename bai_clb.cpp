#include <bits/stdc++.h>

using namespace std;

// ----------------------------------------------------------------

// prime checking function

bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// primes count for each john and jame

int prime_count(long long a, long long b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i) == true) {
            count++;
        }
    }
    return count;
}

// sub
void prime_result(long long a, long long b, long long c, long long d) {
    if (prime_count(a, b) < prime_count(c, d)) {
        cout << "Jame";
    } else if (prime_count(a, b) > prime_count(c, d)) {
        cout << "John";
    } else cout << "EQUAL";
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    prime_result(a, b, c, d);

    return 0;
}