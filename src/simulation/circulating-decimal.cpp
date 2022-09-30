#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Fraction {
    int up;
    int down;
};

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

Fraction add(Fraction f1, Fraction f2) {
    int up = f1.up * f2.down + f2.up * f1.down;
    int down = f1.down * f2.down;
    int ret = gcd(up, down);
    return {up /= ret, down /= ret};
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        //filter
        string str, cir, integer, decimal;
        int k, exp;
        cin >> str >> k;
        int size = str.length();
        cir = str.substr(size - k, size);
        for (int j = size - 1; j >= 0; j -= k) {
            string seg = str.substr(max(0,j-k+1), k);
            if (seg != cir) {
                exp = j - str.find('.') + k;
                integer = str.substr(0, str.find('.'));
                decimal = str.substr(str.find('.') + 1, j - str.find('.'));
                break;
            }
        }
        //convert
        int a = stoi(integer);
        int b=decimal==""?0: stoi(decimal);
        int c = stoi(cir);
        Fraction f1 = {a, 1};
        Fraction f2 = {b, (int) pow(10, exp - k)};
        Fraction f3 = {c * (int) pow(10, k), (int) pow(10, k + exp) - (int) pow(10, exp)};
        Fraction ret = add(f1, add(f2, f3));
        cout << ret.up << " " << ret.down << endl;
    }
    return 0;
}