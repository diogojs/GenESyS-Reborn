#include <iostream>
#include <cmath>

using namespace std;

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

static double normal(double x, double mean, double stddev) {
    double variance = stddev*stddev;
    double denom = stddev*sqrt(2*M_PI);
    double power = -(pow((x-mean), 2)/(2*variance));
    double result = exp(power)/denom;
    return result;
}

double integrate(double min, double max, double (*f)(double, double, double), double p2, double p3) {
    auto n = 1e9;
    // calcular n com base no erro maximo permitido (_precision)

    double h = (max-min)/n;
    double x = min;
    double sum = 0;
    for (auto i = 0u; i <= n; i++) {
        int term = (i%2==0)?2:4;
        sum += term * f(x, p2, p3);
        x += h;
    }
    double result = h*sum/3;
    return result;
}

int main(int argc, char** argv) {
    cout << "Inicio do programa\n";
    cout << "normal(10, 50, 20): " << normal(10.0, 50.0, 20.0) << endl;
    cout << "normal(30, 50, 20): " << normal(30.0, 50.0, 20.0) << endl;
    cout << "normal(50, 50, 20): " << normal(50.0, 50.0, 20.0) << endl;
    cout << "normal(70, 50, 20): " << normal(70.0, 50.0, 20.0) << endl;

    cout << "integrate(0, 100, &normal, 100, 10)\n";

    double result = integrate(0, 100, &normal, 100, 10);
    cout << "Resultado: " << result << endl;

    return 0;
}
