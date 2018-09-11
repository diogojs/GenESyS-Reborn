/* 
 * File:   IntegratorDiogoImpl.cpp
 * Author: Diogo
 * 
 * Created on 29 de Agosto de 2018, 17:28
 */

#include "IntegratorDiogoImpl.h"

#include <cmath>

IntegratorDiogoImpl::IntegratorDiogoImpl() {
}

IntegratorDiogoImpl::IntegratorDiogoImpl(const IntegratorDiogoImpl& orig) {
}

IntegratorDiogoImpl::~IntegratorDiogoImpl() {
}

void IntegratorDiogoImpl::setPrecision(double e) {
	_precision = e;
    _n = 1.0/e;
}

double IntegratorDiogoImpl::getPrecision() {
	return _precision;
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double), double p2) {
    double h = (max-min)/_n;
    double x = min;
    double sum = 0;
    for (auto i = 0u; i <= _n; i++) {
        int term = (i%2==0)?2:4;
        sum += term * f(x, p2);
        x += h;
    }
    double result = h*sum/3;
    return result;
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double), double p2, double p3) {
    double h = (max-min)/_n;
    double x = min;
    double sum = 0;
    for (auto i = 0u; i <= _n; i++) {
        int term = (i%2==0)?2:4;
        sum += term * f(x, p2, p3);
        x += h;
    }
    double result = h*sum/3;
    return result;
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double, double), double p2, double p3, double p4) {
    double h = (max-min)/_n;
    double x = min;
    double sum = 0;
    for (auto i = 0u; i <= _n; i++) {
        int term = (i%2==0)?2:4;
        sum += term * f(x, p2, p3, p4);
        x += h;
    }
    double result = h*sum/3;
    return result;
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double, double, double), double p2, double p3, double p4, double p5) {
    double h = (max-min)/_n;
    double x = min;
    double sum = 0;
    for (auto i = 0u; i <= _n; i++) {
        int term = (i%2==0)?2:4;
        sum += term * f(x, p2, p3, p4, p5);
        x += h;
    }
    double result = h*sum/3;
    return result;
}