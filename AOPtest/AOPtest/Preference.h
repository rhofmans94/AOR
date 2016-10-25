#pragma once

#ifndef PREFERENCE_H
#define PREFERENCE_H

#include <iostream>
#include <stdexcept>
#include <fstream>

class Preference
{
private:
	int id;			// day + moment
public:
	Preference();
	~Preference();
};

#endif /* PREFERENCE_H */
