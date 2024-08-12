#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // 1 and below are not prime numbers
    if (num == 2) return true;   // 2 is a prime number
    if (num % 2 == 0) return false;  // Even numbers greater than 2 are not prime

    // Check odd factors from 3 up to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;  // Found a factor other than 1 and itself
        }
    }
    return true;  // If no factors were found, num is prime
}

int main() {
    int a = 2, b = 10;  // Interval [a, b]

    cout << "Prime numbers between " << a << " and " << b << ":" << endl;
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            cout << i << endl;  // Print prime numbers
        }
    }

    return 0;
}
