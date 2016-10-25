#pragma once

#ifndef SHIFT_H
#define SHIFT_H

#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;

class Shift
{
private:
	int id;
	int startTime;				//aangegeven met vast nummer dat starttijd aangeeft, vandaar int
	int duration;
	double wageCost;
	double minRequirements;		//double om later af te ronden, voor de zekerheid
	double nursesdNeeded;		// double om later af te ronden, voor de zekerheid
public:
	Shift();
	Shift(int);
	int getId();
	void setId(int);
	int getStartTime();
	void setStartTime(int);
	int getDuration();
	void setDuration(int);
	double getWageCost();
	void setWageCost(double);
	double getMinRequirements();
	void setMinRequirements(double);
	double getNursesNeeded();
	void setNursesNeeded(double);
};

#endif /* SHIFT_H */

