#include "Nurse.h"

Nurse::Nurse() {
}

Nurse::Nurse(int id, double employmentRate, int type)
{
	setId(id);
	setEmploymentRate(employmentRate);
	setType(type);
}

int Nurse::getId() {
	return id;
}

void Nurse::setId(int id) {
	this->id = id;
}

double Nurse::getEmploymentRate() {
	return employmentRate;
}

void Nurse::setEmploymentRate(double employmentRate) {
	this->employmentRate = employmentRate;
}
int Nurse::getType() {
	return type;
}
void Nurse::setType(int) {
	this->type = type;
}
