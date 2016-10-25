#include <iostream>
#include <string>
#include <vector>

#include "Department.h"

using namespace std;
using std::vector;

class Patient;

Department::Department() {
}

Department::Department(int id, double budget)
{
	setId(id);
	setBudget(budget);
}

int Department::getId() {
	return id;
}

void Department::setId(int id) {
	this->id = id;
}

double Department::getBudget() {
	return budget;
}

void Department::setBudget(double budget) {
	this->budget = budget;
}

/*void Department::addPatient(Patient* p) {
patients.push_back(p);
}*/



