#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
    cin >> s1 >> s2;
    
    cout << s1.size() << ' ' << s2.size() << '\n';
    cout << s1 + s2 << '\n';
    char x = s2[0];
    char y = s1[0];
    s1[0] = x;
    s2[0] = y;
    cout << s1 << ' ' << s2;
  
    return 0;
}
