#ifndef AUTO3_H
#define AUTO3_H
#include "Auto.h"
#include <ctime>
#include "Auto3.h"

class Auto3 : public Auto {
protected:
	bool cambio;
	int colorAuto;
	
public:
	Auto3(int v, int x0,int y0);
	Auto3(){};
	void Colorear();
	void update();
};

#endif

