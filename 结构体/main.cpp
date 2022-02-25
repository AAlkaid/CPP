#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

string complexNumberMultiply(string num1, string num2) {
    stringstream sstream1(num1), sstream2(num2);
    int a1, a2, b1, b2;
    char m;
    char t;
    sstream1 >> a1 >> t >> b1 >> m;
    cout << a1 << " " << t << " " << b1 << " " << m <<endl;
    sstream2 >> a2 >> t >> b2 >> m;
    cout << a2 << " " << t << " " << b2 << " " << m << endl;

    int r1 = a1*a2 - b1*b2;
    int r2 = a1*b2 + a2*b1;
    return to_string(r1) + "+" + to_string(r2) + "i";
}

int main() {
    complexNumberMultiply("1+2i","3+4i");
    return 0;
}
