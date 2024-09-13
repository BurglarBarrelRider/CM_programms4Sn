#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double I = 1.0;
    int n = 0;

    while (2.0 * I > I) {
        I = I * 2.0;
        n++;
    }

    cout << "Num i " << n << endl;

    return 0;
}
