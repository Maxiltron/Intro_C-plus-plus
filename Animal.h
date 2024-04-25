#pragma once

class Animal
{
public:
	Animal();
	virtual ~Animal();
	bool isCarnivore();
	bool CanEat(Animal* a);
	void Eat(Animal* a);
	bool IsFish();
	bool IsBird();
	void MoveToSea();
	int GetDistance();
	static Animal* NewAnimal(int weight,int pos,int id);
	void SetWeight(int weight);
	void SetPos(int pos);
	void SetAnimal_id(int id);
	virtual int GetWeight();
	virtual int GetPos();
	virtual int GetAnimal_id();
	virtual int GetID();
	void AddWeight(int weight);
protected:
	static int s_nextID;
	int m_ID_General;
	int m_Animal_id;
	int m_position_Y;
	int m_Weight;
};
int Animal::s_nextID = 1;