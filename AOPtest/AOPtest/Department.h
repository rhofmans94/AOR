#pragma once

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <stdexcept>
#include <fstream>
#include <vector>

using namespace std;
using std::vector;

class Nurse;

class Department
{
private:
	int id;				// {1,2,3,4}
	double budget;
	int fixedIncomingPatientsWeek;
	int fixedIncomingPatientsWknd;
	int OrIncomingPatients;
	int totalIncomingPatients;
	int totalPatients;
	int workload;

public:
	Department();
	Department(int, double);
	int getId();
	void setId(int);
	double getBudget();
	void setBudget(double);
};

#endif /* DEPARTMENT_H */

