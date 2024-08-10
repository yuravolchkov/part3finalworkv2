#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "chg08-24.h"


class Shoes : public Grouand_Object
{
protected:

	double Shoes_1st_Rest_Time = 10, Shoes_2nd_Rest_Time = 5, Shoes_Distance;
public:
	
	WOKRBCH_LIB_API Shoes(double Distance_OUT) : Shoes_Distance(Distance_OUT), Grouand_Object(60, "Ботинки - вездеходы", "Ground", 6) {};
	WOKRBCH_LIB_API double Total_time() override;
};