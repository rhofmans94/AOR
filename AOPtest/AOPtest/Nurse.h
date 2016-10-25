#pragma once

#ifndef NURSE_H
#define NURSE_H

#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;

class Department;

class Nurse
{
private:
	int id;
	double employmentRate;
	int type;
public:
	Nurse();
	Nurse(int, double, int);
	int getId();
	void setId(int);
	double getEmploymentRate();
	void setEmploymentRate(double);
	int getType();
	void setType(int);
};

#endif /* NURSE_H */
