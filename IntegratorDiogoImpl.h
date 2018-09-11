/* 
 * File:   IntegratorDiogoImpl.h
 * Author: Diogo
 *
 * Created on 29 de Agosto de 2018
 */

#ifndef INTEGRATORDIOGOIMPL1_H
#define INTEGRATORDIOGOIMPL1_H

#include "Integrator_if.h"

/*
 * Utilizes Composite Simpson's method to integrate
 * a function (f) between two points (min, max).
 */
class IntegratorDiogoImpl : public Integrator_if {
public:
	IntegratorDiogoImpl();
	IntegratorDiogoImpl(const IntegratorDiogoImpl& orig);
	~IntegratorDiogoImpl();
public:
	void setPrecision(double e);
	double getPrecision();
	double integrate(double min, double max, double (*f)(double, double), double p2);
	double integrate(double min, double max, double (*f)(double, double, double), double p2, double p3);
	double integrate(double min, double max, double (*f)(double, double, double, double),  double p2, double p3, double p4);
	double integrate(double min, double max, double (*f)(double, double, double, double, double), double p2, double p3, double p4, double p5);
private:
	double _precision = 1e-6;
	double _n = 1e6;
};

#endif /* INTEGRATORDIOGOIMPL1_H */

