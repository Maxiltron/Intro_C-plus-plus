#include "Road.h"
#include <iostream>
#include <string>
#include <random>
#include<chrono>


using namespace std;

Road::Road()
{
	m_Id = 0;
}

Road::~Road()
{
}

void Road::MakeNewRoad()
{
	
	
	int decal = 5;
	const char* completeroad[30] ;
	for (int i = 0; i < 30; i++)
	{
		int direction = GetRandomDirection();
		if (direction == 1)
		{
			decal++;
			string basicroad = "#        #";
			for (int j = 1; j <= decal; j++)
			{
				basicroad = " " +  basicroad;
			}
			
			completeroad[i] = basicroad.c_str();
			cout << completeroad[i] << endl;
		}
		else
		{
			decal--;
			string basicroad = "#        #";
			for (int j = 1; j <= decal; j++)
			{
				basicroad = " " + basicroad;
			}
			completeroad[i] = basicroad.c_str();
			cout << completeroad[i] << endl;
		}

	}
}

int Road::GetRandomDirection()
{
	std::default_random_engine
		rn(std::chrono::system_clock::now().time_since_epoch().count());;
	std::uniform_int_distribution<int> distrib{ 1,2 };
	return distrib(rn);
}

void Road::PrintRoad()
{


}









