#pragma once
#include <string>


class Road
{
public:
	Road();
	virtual ~Road();
	void MakeNewRoad();
	int GetRandomDirection();
	void PrintRoad();
protected:
	int m_Id;
};
