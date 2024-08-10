#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Camel.h"
#include "Sup_Camel.h"
#include "Centaur.h"
#include "Shoes.h"
#include "Air_Object.h"
#include "Carpet_Plane.h"
#include "Eagle.h"
#include "Broom.h"
#include "Functions.h"

int main()
{
	setlocale(LC_ALL, "ru"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран
	int Race_Style, erdata=0;
	double s;
	int TS_reg;
	
	for (int k=0;k<2;)
	{
		int Uniq_ID[7]{0,0,0,0,0,0,0};
		int Uniq_ID_index = 0, Car_Qty = 0, reg_or_begin = 0;
		Trans_Equip* cars_racing[8]{};
		std::string TS_name[7]{};
			
		std::system("cls"); // очистить экран
		Race_Style = check_race_type();
		std::system("cls"); // очистить экран
		s = check_distance();
		
		for (int i = 1; i < 3;)
		{
			reg_or_begin = reg_or_begin_func(Uniq_ID);
			// регистрация 
			if (reg_or_begin == 1)
			{
				int show_reg_ts_after_reg = 0;
				for (int j = 0; j < 8;)
				{
					std::system("cls"); // очистить экран
					show_prev_reg_ts(show_reg_ts_after_reg, TS_name, Car_Qty);
					messages_for_ts_reg(Race_Style, s, TS_name, Car_Qty);
					show_reg_ts_after_reg = 0;
					if (Race_Style == 1)
					{
						TS_reg = check_duplicate_v2(Uniq_ID, TS_name, Car_Qty, show_reg_ts_after_reg, Race_Style, s);
						//
						if (TS_reg == 1)
						{
							cars_racing[Car_Qty] = new Shoes{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 3)
						{
							cars_racing[Car_Qty] = new Camel{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 4)
						{
							cars_racing[Car_Qty] = new Centaur{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 6)
						{
							cars_racing[Car_Qty] = new Sup_Camel{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 0)
						{
							break;
						}
					}
					else if (Race_Style == 2)
					{
						TS_reg = check_duplicate_v2(Uniq_ID, TS_name, Car_Qty, show_reg_ts_after_reg, Race_Style, s);
						if (TS_reg == 2)
						{
							cars_racing[Car_Qty] = new Broom{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 5)
						{
							cars_racing[Car_Qty] = new Eagle{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 7)
						{
							cars_racing[Car_Qty] = new Carpet_Plane{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (Uniq_ID_index == 2 || TS_reg == 0)
						{
							break;
						}
					}
					else if (Race_Style == 3)
					{
						TS_reg = check_duplicate_v2(Uniq_ID, TS_name, Car_Qty, show_reg_ts_after_reg, Race_Style, s);
						if ( TS_reg == 1)
						{
							cars_racing[Car_Qty] = new Shoes{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 2)
						{
							cars_racing[Car_Qty] = new Broom{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 3)
						{
							cars_racing[Car_Qty] = new Camel{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 4)
						{
							cars_racing[Car_Qty] = new Centaur{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 5)
						{
							cars_racing[Car_Qty] = new Eagle{ s };
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 6)
						{
							cars_racing[Car_Qty] = new Sup_Camel{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 7)
						{
							cars_racing[Car_Qty] = new Carpet_Plane{ s };
							TS_name[Car_Qty] = cars_racing[Car_Qty]->Get_TE_Name();
							Car_Qty = Car_Qty + 1;
							Uniq_ID[Uniq_ID_index] = TS_reg;
							Uniq_ID_index = Uniq_ID_index + 1;
							show_reg_ts_after_reg = 1;
						}
						else if (TS_reg == 0)
						{
							break;
						}
					}
					else
					{
						std::cout << "error";
					}
					j = Car_Qty;
				};
				std::system("cls"); // очистить экран
			}
			// Начало гонки
			if (reg_or_begin == 2)
			{
				std::system("cls"); // очистить экран
				
				for (int stopper =0;stopper <3;)
				{
					for (int ic = 0; ic < Car_Qty - 1; ic++)
					{
						double compr_1 = cars_racing[ic]->Total_time();
						double compr_2 = cars_racing[ic + 1]->Total_time();
						if (compr_2 < compr_1)
						{
							cars_racing[7] = cars_racing[ic];
							cars_racing[ic] = cars_racing[ic + 1];
							cars_racing[ic + 1] = cars_racing[7];
							stopper = stopper - 1;
						}
						else
						{
							stopper = stopper + 1;
						}

					}
				}
				std::system("cls"); // очистить экран
				std::cout << "Результаты гонки:" << std::endl;
				for (int t = 0; t < Car_Qty; t++)
				{
				Print_results(cars_racing[t], t);
				}
				std::cout << "\n1. Провести ещё одну гонку\n2. Выйти\nВыберите действие: ";
				i = 4;
			}

		}
		std::cin >> k;
		if (k==2)
		{
			k = k + 2;
		}
}
return 88;
}
