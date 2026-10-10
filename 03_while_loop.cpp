// 3.1 While Loop programs
#include <iostream>
using namespace std;

void reverseNumber() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed = " << rev << "\n";
}

void armstrong() {
    int n, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int t = n;
    while (t != 0) { digits++; t /= 10; }
    t = n;
    while (t != 0) {
        int d = t % 10, p = 1, i = 0;
        while (i < digits) { p *= d; i++; }
        sum += p;
        t /= 10;
    }
    if (sum == n) cout << n << " is an Armstrong number\n";
    else cout << n << " is not an Armstrong number\n";
}

void sumNatural() {
    int n, i = 1, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n) { sum += i; i++; }
    cout << "Sum = " << sum << "\n";
}

void fibonacci() {
    int n, i = 0;
    long long a = 0, b = 1;
    cout << "How many terms: ";
    cin >> n;
    while (i < n) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
        i++;
    }
    cout << "\n";
}

void lcm() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int m = a > b ? a : b;
    while (m % a != 0 || m % b != 0) m++;
    cout << "LCM = " << m << "\n";
}

void palindrome() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    int t = n;
    while (t != 0) { rev = rev * 10 + t % 10; t /= 10; }
    if (rev == n) cout << n << " is a palindrome\n";
    else cout << n << " is not a palindrome\n";
}

void countDigits() {
    int n, count = 0;
    cout << "Enter an integer: ";
    cin >> n;
    if (n == 0) count = 1;
    while (n != 0) { count++; n /= 10; }
    cout << "Digits = " << count << "\n";
}

void genericRoot() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 9) {
        int sum = 0;
        while (n != 0) { sum += n % 10; n /= 10; }
        n = sum;
    }
    cout << "Generic root = " << n << "\n";
}

void calendar() {
    int month, year;
    cout << "Enter month and year (mm yyyy, year >= 1900): ";
    cin >> month >> year;
    int mdays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 1 Jan 1900 was a Monday; count days from then to the 1st of the month
    long days = 0;
    int y = 1900;
    while (y < year) {
        days += ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? 366 : 365;
        y++;
    }
    bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    if (leap) mdays[1] = 29;
    int m = 1;
    while (m < month) { days += mdays[m - 1]; m++; }

    int start = days % 7;  // 0 = Monday
    cout << " Mon Tue Wed Thu Fri Sat Sun\n";
    int i = 0;
    while (i < start) { cout << "    "; i++; }
    int d = 1;
    while (d <= mdays[month - 1]) {
        cout << (d < 10 ? "   " : "  ") << d;
        if ((start + d) % 7 == 0) cout << "\n";
        d++;
    }
    cout << "\n";
}

void divisibleBy11() {
    // Vedic rule: (sum of odd-place digits) - (sum of even-place digits) divisible by 11
    int n, odd = 0, even = 0, pos = 1;
    cout << "Enter a number: ";
    cin >> n;
    int t = n < 0 ? -n : n;
    while (t != 0) {
        if (pos % 2 == 1) odd += t % 10;
        else even += t % 10;
        t /= 10;
        pos++;
    }
    if ((odd - even) % 11 == 0) cout << n << " is divisible by 11\n";
    else cout << n << " is not divisible by 11\n";
}

void denomination() {
    int amount, i = 0;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    cout << "Enter amount: ";
    cin >> amount;
    while (amount > 0) {
        if (amount >= notes[i]) {
            cout << notes[i] << " x " << amount / notes[i] << "\n";
            amount %= notes[i];
        }
        i++;
    }
}

int main() {
    cout << " 1. Reverse a number\n"
            " 2. Armstrong number\n"
            " 3. Sum of natural numbers\n"
            " 4. Fibonacci series\n"
            " 5. LCM of two numbers\n"
            " 6. Palindrome number\n"
            " 7. Count digits\n"
            " 8. Generic root\n"
            " 9. Print calendar\n"
            "10. Divisible by 11 (Vedic math)\n"
            "11. Denomination of an amount\n"
            "Choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: reverseNumber(); break;
        case 2: armstrong(); break;
        case 3: sumNatural(); break;
        case 4: fibonacci(); break;
        case 5: lcm(); break;
        case 6: palindrome(); break;
        case 7: countDigits(); break;
        case 8: genericRoot(); break;
        case 9: calendar(); break;
        case 10: divisibleBy11(); break;
        case 11: denomination(); break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
