#include "Animal.h"

#include <iostream>
using namespace std;

Animal::Animal()
{
	m_Animal_id = 0;
	m_position_Y = 0;
	m_Weight = 0;
}

Animal::~Animal()
{
}

bool Animal::isCarnivore(Animal* a)
{
	if (a->GetAnimal_id() == 3)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Animal::CanEat(Animal* a,Animal* b)
{
	if (isCarnivore(a) == true and a->GetWeight() > b->GetWeight())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Animal::Eat(Animal* a,Animal* b)
{
	a->AddWeight(b->GetWeight());
}

bool Animal::IsFish()
{
	if (GetPos() <  0)
	{
		cout << "Fish"<<endl;
		return true;
	}
	else
	{
		cout << "Not Fish"<<endl;
		return false;
	}
}

bool Animal::IsBird()
{
	if (GetPos() >= 0)
	{
		cout << "Bird" << endl;
		return true;
	}
	else
	{
		cout << "Not Bird" << endl;
		return false;
	}
}

void Animal::MoveToSea()
{

}

int Animal::GetDistance()
{
	return 0;
}

Animal* Animal::NewAnimal(int weight, int pos, int id)
{
	Animal* a = new Animal;
	a->SetWeight(weight);
	a->SetPos(pos);
	a->SetAnimal_id(id);	
	return a;
}

void Animal::SetWeight(int weight)
{
	m_Weight = weight;
}

void Animal::SetPos(int pos)
{
	m_position_Y = pos;
}

void Animal::SetAnimal_id(int id)
{
	m_Animal_id = id;
}

int Animal::GetWeight()
{
	return m_Weight;
}

int Animal::GetPos()
{
	return m_position_Y;
}

int Animal::GetAnimal_id()
{
	return m_Animal_id;
}

void Animal::AddWeight(int weight)
{
	m_Weight = m_Weight + weight;
}


int main()
{
	Animal* A1 = Animal::NewAnimal(5, 5, 2);
	Animal* A2 = Animal::NewAnimal(15, -2, 1);
	cout << A1->IsBird();
}