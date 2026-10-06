#include <iostream>
#include <string>
using namespace std;

bool isArmstrong(long long n) {
    if (n < 0) return false;
    int digits = to_string(n).size();
    long long sum = 0;
    for (long long t = n; t > 0; t /= 10) {
        long long p = 1;
        for (int i = 0; i < digits; i++) p *= t % 10;
        sum += p;
    }
    return sum == n;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << (isArmstrong(n) ? " is" : " is not") << " an Armstrong number\n";
}
