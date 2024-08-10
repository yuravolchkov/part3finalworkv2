#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "chg08-24.h"

class Eagle : public Air_Object
{
protected:
	double Eagle_1st_coef = 0.94, Eagle_Distance;
public:
	
	WOKRBCH_LIB_API Eagle(double Distance_OUT) : Eagle_Distance(Distance_OUT), Air_Object(1, "Îð¸ë", "Air", 8) {};
	WOKRBCH_LIB_API double Total_time() override;
};