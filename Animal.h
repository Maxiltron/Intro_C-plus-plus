#pragma once

class Animal
{
public:
	Animal();
	virtual ~Animal();
	bool isCarnivore(Animal* a);
	bool CanEat(Animal* a,Animal* b);
	void Eat(Animal* a,Animal* b);
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
	void AddWeight(int weight);
protected:
	static int ID;
	int m_Animal_id;
	int m_position_Y;
	int m_Weight;
};
int Animal::ID = 1;