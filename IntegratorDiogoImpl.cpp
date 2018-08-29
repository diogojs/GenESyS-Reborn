/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegratorDiogoImpl.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 17:28
 */

#include "IntegratorDiogoImpl.h"

IntegratorDiogoImpl::IntegratorDiogoImpl() {
}

IntegratorDiogoImpl::IntegratorDiogoImpl(const IntegratorDiogoImpl& orig) {
}

IntegratorDiogoImpl::~IntegratorDiogoImpl() {
}

void IntegratorDiogoImpl::setPrecision(double e) {
	_precision = e;
}

double IntegratorDiogoImpl::getPrecision() {
	return e;
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double), double p2) {
	
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double), double p2, double p3) {
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double, double), double p2, double p3, double p4) {
}

double IntegratorDiogoImpl::integrate(double min, double max, double (*f)(double, double, double, double, double), double p2, double p3, double p4, double p5) {
}