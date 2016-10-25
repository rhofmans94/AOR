#pragma once

#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <fstream>

using namespace std;

class Department;

class Patient
{
	int id;
	int acuity;
	int lengthOfStay;
	double workload;
	double discipline;
	Department* dep;
public:
	Patient();
	Patient(int, double);
	int getId();
	void setId(int);
	int getAcuity();
	void setAcuity(int);
	int getLengthOfStay();
	void setLengthOfStay(int);
	double getWorkload();
	void setWorkload(double);
	double getDiscipline();
	void setDiscipline(double);

};

#endif /* PATIENT_H */

