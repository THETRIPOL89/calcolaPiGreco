#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    srand((unsigned)time(0));
    int esponente = 6;
    int numeriDentro = 0;
    for (int i = 0; i < pow(10, esponente); i++) {
        double x = static_cast<double>(rand()) / RAND_MAX;
        double y = static_cast<double>(rand()) / RAND_MAX;
        double distanza = (x*x + y*y);
        if (distanza <= 1) {
            numeriDentro += 1;
        }
    }
    cout << (double)(numeriDentro / (double)pow(10, esponente) * 4) << endl;
    return 0;
}
