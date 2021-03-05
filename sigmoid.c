/*******************************************************
* This file contains signmoid functions: 
* sigmoid(),sigmoid_d(),deriv().
* Language: C
* Author:Siyuan e2002077
********************************************************/

#include <math.h>			//Using -lm to link math.h when compile by gcc
#include "sigmoid.h"

double sigmoid(double x){

	/**********************************************************************
	*****************
	*Function : double sigmoid(double x)
	*Input    : double number x
	*Output   : Return r, the result
	*Procedure: Calculate the value of sigmoid function f(x)=1/(1+e^(-x))
	*           according to input x
	************************************************************************
	****************/
	double r;
	r=1/(expf(-x)+1);		//Formula of sigmoid function
	
	return r;
}

double sigmoid_d(double x){

	/**********************************************************************
	*****************
	*Function : double sigmoid_d(double x)
	*Input    : double number x
	*Output   : Return r, the result
	*Procedure: Calculate the derivative of sigmoid function f(x)=1/(1+e^(-x))
	*           according to input x
	************************************************************************
	****************/
	double r;
	r=sigmoid(x)*(1-sigmoid(x));	//Formula of the derivative of function sigmoid()
	
	return r;
}

double sig_deriv(double x){

	/**********************************************************************
	*****************
	*Function : double sig_deriv(double x)
	*Input    : double number x
	*Output   : Return the result of formula f(x)=x*(1-x)
	*Procedure: Calculate the derivative of sigmoid function f(x)=x*(1-x)
	*	    according to input x
	************************************************************************
	****************/
	return x*(1-x);		//Formula of the derivative of a function
}
