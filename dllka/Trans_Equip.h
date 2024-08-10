#pragma once
#include <iostream>
#include <string>
#include "chg08-24.h"


class Trans_Equip
{
protected:
	std::string TE_Name, TE_Type;
	double TE_Speed;
public:
	
	WOKRBCH_LIB_API Trans_Equip() : TE_Name("0"), TE_Type("0"), TE_Speed(0) {};
	WOKRBCH_LIB_API Trans_Equip(std::string TE_Name_OUT, std::string TE_Type_OUT, double TE_Speed_OUT) :TE_Name(TE_Name_OUT), TE_Type(TE_Type_OUT), TE_Speed(TE_Speed_OUT) {};
	WOKRBCH_LIB_API virtual double Total_time();
	WOKRBCH_LIB_API virtual std::string Get_TE_Name();
};