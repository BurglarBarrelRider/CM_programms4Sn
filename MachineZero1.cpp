#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double Epslon = 1.0;
    int n = 0;

    while (1.0 + Epslon != 1.0) {
        Epslon /= 2.0; // /= 10.0
        n++;
    }

    cout << fixed << setprecision(16);
    cout << "Machine Epslon for double: " << Epslon << endl;
    /* Machine Epslon for double: 0.0000000000000001 */
    cout << "Number of iterations: " << n << endl;

    return 0;
}
