// 2. If/Else Statement programs (duplicates in the list merged into one program each)
#include <iostream>
#include <cmath>
using namespace std;

void greatestOfTwo() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) cout << a << " is greatest\n";
    else if (b > a) cout << b << " is greatest\n";
    else cout << "Both are equal\n";
}

void greatestOfThree() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) cout << a << " is greatest\n";
    else if (b >= a && b >= c) cout << b << " is greatest\n";
    else cout << c << " is greatest\n";
}

void positiveNegativeZero() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) cout << "Positive\n";
    else if (n < 0) cout << "Negative\n";
    else cout << "Zero\n";
}

void evenOdd() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0) cout << "Even\n";
    else cout << "Odd\n";
}

void divisibleBy5And11() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0 && n % 11 == 0) cout << "Divisible by 5 and 11\n";
    else cout << "Not divisible by 5 and 11\n";
}

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void leapYear() {
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if (isLeap(y)) cout << "Leap year\n";
    else cout << "Not a leap year\n";
}

void alphabetOrNot() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) cout << "Alphabet\n";
    else cout << "Not an alphabet\n";
}

void vowelOrConsonant() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
        cout << "Not an alphabet\n";
        return;
    }
    char c = tolower(ch);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cout << "Vowel\n";
    else cout << "Consonant\n";
}

void alphabetDigitSpecial() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') cout << "Uppercase alphabet\n";
    else if (ch >= 'a' && ch <= 'z') cout << "Lowercase alphabet\n";
    else if (ch >= '0' && ch <= '9') cout << "Digit\n";
    else cout << "Special character\n";
}

int daysInMonth(int m, int y) {
    if (m == 2) return isLeap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

void dateCorrect() {
    int d, m, y;
    cout << "Enter date (dd mm yyyy): ";
    cin >> d >> m >> y;
    if (y > 0 && m >= 1 && m <= 12 && d >= 1 && d <= daysInMonth(m, y))
        cout << "Date is correct\n";
    else
        cout << "Date is not correct\n";
}

void votingEligibility() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) cout << "Eligible to vote\n";
    else cout << "Not eligible to vote\n";
}

void weekday() {
    int w;
    cout << "Enter week number (1-7): ";
    cin >> w;
    if (w == 1) cout << "Monday\n";
    else if (w == 2) cout << "Tuesday\n";
    else if (w == 3) cout << "Wednesday\n";
    else if (w == 4) cout << "Thursday\n";
    else if (w == 5) cout << "Friday\n";
    else if (w == 6) cout << "Saturday\n";
    else if (w == 7) cout << "Sunday\n";
    else cout << "Invalid week number\n";
}

void monthDays() {
    int m;
    cout << "Enter month number (1-12): ";
    cin >> m;
    if (m < 1 || m > 12) cout << "Invalid month\n";
    else if (m == 2) cout << "28 or 29 days\n";
    else cout << daysInMonth(m, 1) << " days\n";
}

void countNotes() {
    int amount;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    cout << "Enter amount: ";
    cin >> amount;
    int total = 0;
    for (int i = 0; i < 10; i++) {
        int count = amount / notes[i];
        if (count > 0) cout << notes[i] << " x " << count << "\n";
        total += count;
        amount %= notes[i];
    }
    cout << "Total notes = " << total << "\n";
}

void triangleByAngles() {
    int a, b, c;
    cout << "Enter three angles: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b + c == 180) cout << "Valid triangle\n";
    else cout << "Not a valid triangle\n";
}

void triangleBySides() {
    double a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) cout << "Valid triangle\n";
    else cout << "Not a valid triangle\n";
}

void triangleType() {
    double a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (!(a + b > c && b + c > a && a + c > b)) cout << "Not a valid triangle\n";
    else if (a == b && b == c) cout << "Equilateral triangle\n";
    else if (a == b || b == c || a == c) cout << "Isosceles triangle\n";
    else cout << "Scalene triangle\n";
}

void quadraticRoots() {
    double a, b, c;
    cout << "Enter a, b, c of ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Not a quadratic equation\n";
        return;
    }
    double d = b * b - 4 * a * c;
    if (d > 0) {
        cout << "Root 1 = " << (-b + sqrt(d)) / (2 * a) << "\n";
        cout << "Root 2 = " << (-b - sqrt(d)) / (2 * a) << "\n";
    } else if (d == 0) {
        cout << "Both roots = " << -b / (2 * a) << "\n";
    } else {
        double real = -b / (2 * a), imag = sqrt(-d) / (2 * a);
        cout << "Root 1 = " << real << " + " << imag << "i\n";
        cout << "Root 2 = " << real << " - " << imag << "i\n";
    }
}

void profitLoss() {
    double cp, sp;
    cout << "Enter cost price and selling price: ";
    cin >> cp >> sp;
    if (sp > cp) cout << "Profit = " << sp - cp << "\n";
    else if (cp > sp) cout << "Loss = " << cp - sp << "\n";
    else cout << "No profit, no loss\n";
}

int main() {
    cout << " 1. Greatest of two numbers\n"
            " 2. Greatest of three numbers\n"
            " 3. Positive, negative or zero\n"
            " 4. Even or odd\n"
            " 5. Divisible by 5 and 11\n"
            " 6. Leap year\n"
            " 7. Alphabet or not\n"
            " 8. Vowel or consonant\n"
            " 9. Uppercase / lowercase / digit / special character\n"
            "10. Date is correct or not\n"
            "11. Voting eligibility\n"
            "12. Week number to weekday\n"
            "13. Days in a month\n"
            "14. Count notes in an amount\n"
            "15. Triangle valid (angles)\n"
            "16. Triangle valid (sides)\n"
            "17. Equilateral / isosceles / scalene\n"
            "18. Roots of quadratic equation\n"
            "19. Profit or loss\n"
            "Choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: greatestOfTwo(); break;
        case 2: greatestOfThree(); break;
        case 3: positiveNegativeZero(); break;
        case 4: evenOdd(); break;
        case 5: divisibleBy5And11(); break;
        case 6: leapYear(); break;
        case 7: alphabetOrNot(); break;
        case 8: vowelOrConsonant(); break;
        case 9: alphabetDigitSpecial(); break;
        case 10: dateCorrect(); break;
        case 11: votingEligibility(); break;
        case 12: weekday(); break;
        case 13: monthDays(); break;
        case 14: countNotes(); break;
        case 15: triangleByAngles(); break;
        case 16: triangleBySides(); break;
        case 17: triangleType(); break;
        case 18: quadraticRoots(); break;
        case 19: profitLoss(); break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
