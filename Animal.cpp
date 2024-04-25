#include "Animal.h"
#include "Bird.h"
#include "Fish.h"

#include <iostream>
using namespace std;

Animal::Animal()
{
	m_Animal_id = 0;
	m_position_Y = 0;
	m_Weight = 0;
	m_ID_General = s_nextID++;
}

Animal::~Animal()
{

};

bool Animal::isCarnivore()
{
	if (GetAnimal_id() == 3)
	{
	
		return false;
	}
	else
	{
		
		return true;
	}
}

bool Animal::CanEat(Animal* a)
{
	if (isCarnivore() == true and GetWeight() > a->GetWeight())
	{
		cout << "Oui" << endl;
		return true;
	}
	else
	{
		cout << "Non" << endl;
		return false;
	}
}

void Animal::Eat(Animal* a)
{
	AddWeight(a->GetWeight());
	delete a;
}

bool Animal::IsFish()
{
	int animal = GetAnimal_id();
	switch (animal)
	{
	case 1 :
		cout << "Yes" << endl;
		return true;
	case 2 :
		cout << "No" << endl;
		return false;
	case 3 : 
		cout << "No" << endl;
		return false;
	}

}

bool Animal::IsBird()
{
	if (GetPos() >= 0)
	{
		cout << "Yes" << endl;
		return true;
	}
	else
	{
		cout << "No" << endl;
		return false;
	}
}

void Animal::MoveToSea()
{

}

int Animal::GetDistance()
{
	
}

Animal* Animal::NewAnimal(int weight,int pos,int id)
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

int Animal::GetID()
{
	return m_ID_General;
}

void Animal::AddWeight(int weight)
{
	m_Weight = m_Weight + weight;
}




enum animals
{
	Shark = 1,
	Eagle = 2,
	Swan = 3
};



int main()
{
	Animal* A1 = Animal::NewAnimal(40,5,Eagle);
	Animal* A2 = Animal::NewAnimal(50,0,Swan);
	Animal* A3 = Animal::NewAnimal(20,-10,Shark);
	A1->IsFish();
	cout << A3->GetID();
	
	

}