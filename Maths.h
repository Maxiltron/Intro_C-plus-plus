#pragma once

class Rectangle
{
public:
	Rectangle();
	virtual ~Rectangle();
	int GetArea();
	int GetLongueur();
	int GetLargeur();
	int CalcArea();
	void SetArea(int Area);
	void Draw();

protected:
	int m_Longueur;
	int m_Largeur;
	int m_Area;
	int m_x;
	int m_y;
};
