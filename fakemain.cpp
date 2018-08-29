#include <iostream>
#include <cmath>
#include <random>

using namespace std;

static int p[10]={};

static double uniform(double x, double min, double max) {
    if (x >= min && x <= max) {
        double result = 1/(max-min);
        cout << "un(" << x << ", " << min << ", " << max << ") = " << result << endl;
        return result;
    }
    else {
        return 0;
    }
}

static double normal(double x, double min, double max) {
    const int nrolls = 10000;
    const int nstars = 100;

    std::default_random_engine generator;
    std::normal_distribution<double> d{min,max};
    cout << "normal(x): " << d(x) << endl;
    return d(x);
}

double integrate(double min, double max, double (*f)(double, double, double), double p2, double p3) {
    double fa = f(min, p2, p3);
    cout << "fa = " << fa << endl;
    double m = (min+max)/2;
    double fm = f(m, p2, p3);
    cout << "fm = " << fm << endl;
    double fb = f(max, p2, p3);
    cout << "fb = " << fb << endl;
    double result = (max-min)*(fa+4*fm+fb)/6;
    return result;
}

int main(int argc, char** argv) {
    cout << "Inicio do programa\n";
    cout << "integrate(0.0, 0.4, &normal, 0.0, 0.1)\n";

    double result = integrate(0.0, 0.4, &normal, 0.0, 0.1);
    cout << "Resultado: " << result << endl;
    return 0;
}

// http://www.cplusplus.com/reference/random/normal_distribution/
