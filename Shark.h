#pragma once
#include"Fish.h"


class Shark : public Fish
{
public:
	Shark();
	virtual ~Shark();

protected:
	int m_Weight;
	int Position_Y;

};