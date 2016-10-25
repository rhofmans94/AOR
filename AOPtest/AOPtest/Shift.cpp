#include "stdafx.h"
#include "Shift.h"


Shift::Shift()
{
}

Shift::Shift(int id) {
	setId(id);
}

int Shift::getId() {
	return id;
}
void Shift::setId(int id) {
	this->id = id;
}
int Shift::getStartTime() {
	return startTime;
}
void Shift::setStartTime(int startTime) {
	this->startTime = startTime;
}
int Shift::getDuration() {
	return duration;
}
void Shift::setDuration(int duration) {
	this->duration = duration;
}
double Shift::getWageCost() {
	return wageCost;
}
void Shift::setWageCost(double wagecost) {
	this->wageCost = wagecost;
}
double Shift::getMinRequirements() {
	return minRequirements;
}
void Shift::setMinRequirements(double minRequirements) {
	this->minRequirements = minRequirements;
}
double Shift::getNursesNeeded() {
	return nursesdNeeded;
}
void Shift::setNursesNeeded(double nursesNeeded) {
	this->nursesdNeeded = nursesNeeded;
}
