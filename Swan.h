#include "Bird.h"



class Swan : public Bird
{
public:
	Swan();
	virtual ~Swan();

protected:
	int m_Weight;
	int Position_Y;

};
