//============================================================================
// Name        : hello_test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define OAM_DIAMETER_SYSTEM_DEFAULT_TIMEOUT                  3000
#define OAM_DIAMETER_SYSTEM_MIN_TIMEOUT                       100
#define OAM_DIAMETER_SYSTEM_MAX_TIMEOUT                     60000

int main() {
	string timer;
	cin >> timer;
	double d = 0.0;
	stringstream ss;
	for(unsigned int it = 0; it < timer.size(); it++)
	{
		if(timer[it] != '.' && (timer[it] < '0' || timer[it] > '9'))
		{
			cout << "invalid input!" << endl;
			return 0;
		}
	}

	if ( *timer.begin() == '.' && timer.size() <= 2 )
	{
		timer = '0' + timer;
		ss << timer;
		ss >> d;
		cout << "timer is " << d * 1000 << " ms."<< endl;
		return 1;
	}
	else if ( *(timer.end() - 1) == '.' && timer.size() <= 3 )
	{
		ss << timer;
		ss >> d;
		cout << "timer is " << d * 1000 << " ms."<< endl;
		return 1;
	}
	else
	{
		cout << "invalid input!" << endl;
		return 0;
	}
	cout << "timer is " << d * 1000 << " ms."<< endl;
	cout << "default time is " << OAM_DIAMETER_SYSTEM_DEFAULT_TIMEOUT / 1000 << endl;
	cout << "max time is " << OAM_DIAMETER_SYSTEM_MAX_TIMEOUT / 1000 << endl;
	cout << "min time is " << OAM_DIAMETER_SYSTEM_MIN_TIMEOUT / 1000 << endl;
	printf("default is %f \n", ((double)OAM_DIAMETER_SYSTEM_DEFAULT_TIMEOUT) / 1000);
	printf("max is %f \n", ((double)OAM_DIAMETER_SYSTEM_MAX_TIMEOUT) / 1000);
	printf("min is %f \n", ((double)OAM_DIAMETER_SYSTEM_MIN_TIMEOUT) / 1000);

	return 1;
}


