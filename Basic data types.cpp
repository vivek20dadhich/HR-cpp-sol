#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin >> i >> l >> c >> f >> d;
    cout << i << "\n";
    cout << l << "\n";
    cout << c << "\n";
    cout << fixed << std::setprecision(3) << f << "\n";
    cout << fixed << std::setprecision(9) << d << "\n";
    return 0;
}
