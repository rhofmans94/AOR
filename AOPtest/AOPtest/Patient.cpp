#include "Patient.h"


Patient::Patient()
{
}

Patient::Patient(int id, double discipline) {
	setId(id);
	setDiscipline(discipline);
}
int Patient::getId() {
	return id;
}

void Patient::setId(int) {
	this->id = id;
}

int Patient::getAcuity() {
	return acuity;
}

void Patient::setAcuity(int) {
	this->acuity = acuity;
}

int Patient::getLengthOfStay() {
	return lengthOfStay;
}

void Patient::setLengthOfStay(int) {
	this->lengthOfStay = lengthOfStay;
}

double Patient::getWorkload() {
	return workload;
}

void Patient::setWorkload(double) {
	this->workload = workload;
}

double Patient::getDiscipline() {
	return discipline;
}
void Patient::setDiscipline(double) {
	this->discipline = discipline;
}
