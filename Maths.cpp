#include "Maths.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle()
{
    m_Longueur = 6;
    m_Largeur = 3;
    m_Area = 0;
    m_x = 5;
    m_y = 5;
}


Rectangle::~Rectangle()
{
   
}


int Rectangle::CalcArea()
{
    int Area = m_Longueur * m_Largeur;
    return Area;

}

void Rectangle::SetArea(int Area)
{
    m_Area = Area;

}

int Rectangle::GetArea()
{
    return m_Area;
}

int Rectangle::GetLongueur()
{
    return m_Longueur;
}

int Rectangle::GetLargeur()
{
    return m_Largeur;
}




int main()
{

    Rectangle v1;
    int New_Aire = v1.CalcArea();
    v1.SetArea(New_Aire);
    cout << "Aire du Rectangle = " << v1.GetArea() << endl 
         << "Largeur du Rectangle = " << v1.GetLargeur() << endl
         << "Longueur du Rectangle = " << v1.GetLongueur();

    

}