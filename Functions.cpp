#include "Functions.h"

int check_race_type()
{
	int Race_Style_Check;
	std::cout << "����� ���������� � �������� ���������!" << "\n1. ����� ��� ��������� ���������� " << "\n2. ����� ��� ���������� ���������� " << "\n3. ����� ��� ��������� � ���������� ����������" << "\n�������� ��� �����: ";
	for (;;)
	{
		std::cin >> Race_Style_Check;
		if (Race_Style_Check == 1)
		{
			return Race_Style_Check;
		}
		else if (Race_Style_Check == 2)
		{
			return Race_Style_Check;
		}
		else if (Race_Style_Check == 3)
		{
			return Race_Style_Check;
		}
		else
		{
			std::cout << "\n ������ �����" << std::endl;;
		}
	}
}

int check_distance()
{
	int distance_Check;
	std::cout << "������� ����� ��������� (������ ���� ������������): ";
	for (;;)
	{
		std::cin >> distance_Check;
		if (distance_Check > 0)
		{
			return distance_Check;
		}
		else
		{
			std::cout << "\n ������ �����" << std::endl;;
		}
	}
}

int reg_or_begin_func(int* Uniq_ID_in)
{
	
	int action_num =0 ;
	for (;;)
	{
		std::system("cls"); // �������� �����
		if (Uniq_ID_in[0] == 0)
		{
			std::cout << "������ ���� ���������������� ���� �� 2 ������������ �������� " << "\n1. ���������������� ���������" << "\n�������� ��������: ";
		}
		else if (Uniq_ID_in[0] != 0 && Uniq_ID_in[1] != 0)
		{
			std::cout << "1. ���������������� ���������" << "\n2. ������ �����" << "\n�������� ��������: ";
		}
		else if (Uniq_ID_in[0] == 0 && Uniq_ID_in[1] != 0)
		{
			std::cout << "������ ���� ���������������� ���� �� 2 ������������ �������� " << "\n1. ���������������� ���������" << "\n�������� ��������: ";
		}
		else if (action_num == 2 && Uniq_ID_in[0] != 0 && Uniq_ID_in[1] == 0)
		{
			std::cout << "����� ���������������� ��� ���� ������������ ��������. " << "\n1. ���������������� ���������" << "\n�������� ��������: ";
		}
		/*
		else if (action_num != 1 || action_num != 2)
		{
			std::cout << "\n ����� �� ���������� �����. ����� ������ 1 ��� 2\n" << std::endl;
		}
		*/
		std::cin >> action_num;
		if (action_num == 1)
		{
			return action_num;
		}
		else if (action_num == 2 && Uniq_ID_in[0] != 0 && Uniq_ID_in[1] != 0) //
		{
			return action_num;
		}
	}
}

bool check_duplicate_ts(int TS_reg_bool, int* Uniq_ID_bool)
{

	for (int icdts = 0; icdts < 7; icdts++)
	{
		if (TS_reg_bool == Uniq_ID_bool[icdts])
		{
			return false;
		}
	}
	return true;
}

void Print_results(Trans_Equip* cars_racing, int i)
{
	std::cout << i + 1 << ". " << cars_racing->Get_TE_Name() << ". B����: " << cars_racing->Total_time() << std::endl;
}

void show_prev_reg_ts(int switcher, std::string* TS_name_in, int Car_Qty)
{
	if (switcher == 1)
	{
		std::cout << TS_name_in[Car_Qty - 1] << " ������� ���������������!" << std::endl;
	}
}

void messages_for_ts_reg(int Race_Style_in, int s, std::string* TS_name_in, int Car_Qty)
{
	if (Race_Style_in == 1 && Car_Qty == 0)
	{
		std::cout << "����� ��� ��������� ����������. ����������: " << s << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
	else if (Race_Style_in == 1 && Car_Qty != 0)
	{
		std::cout << "����� ��� ��������� ����������. ����������: " << s;
		std::cout << "\n������������������ ������������ ��������: ";
		for (int i = 0; i < Car_Qty; i++)
		{
			std::cout << TS_name_in[i];
			if (i != Car_Qty - 1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
	else if (Race_Style_in == 2 && Car_Qty == 0)
	{
		std::cout << "����� ��� ���������� ����������. ����������: " << s << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
	else if (Race_Style_in == 2 && Car_Qty != 0)
	{
		std::cout << "����� ��� ���������� ����������. ����������: " << s;
		std::cout << "\n������������������ ������������ ��������: ";
		for (int i = 0; i < Car_Qty; i++)
		{
			std::cout << TS_name_in[i];
			if (i != Car_Qty - 1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
	else if (Race_Style_in == 3 && Car_Qty == 0)
	{
		std::cout << "����� ��� ��������� � ���������� ����������. ����������: " << s << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
	else if (Race_Style_in == 3 && Car_Qty != 0)
	{
		std::cout << "����� ��� ��������� � ���������� ����������. ����������: " << s;
		std::cout << "\n������������������ ������������ ��������: ";
		for (int i = 0; i < Car_Qty; i++)
		{
			std::cout << TS_name_in[i];
			if (i != Car_Qty - 1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "\n1. ������� - ���������\n2. �����\n3. �������\n4. ������� \n5. ���\n6. ������� - ���������\n7. ���� - ������ \n0. ��������� ����������� \n�������� ��������� ��� 0 ��� ��������� �������� ����������� : ";
	}
}

int check_duplicate_v2(int* Uniq_ID_bool, std::string* TS_name_in, int Car_Qty, int show_reg_ts_after_reg, int Race_Style, int s)
{
	int ts_reg_v2, yes_or_no;
	for (;;)
	{
		yes_or_no = 0;
		std::cin >> ts_reg_v2;
		if (ts_reg_v2 == 0)
		{
			return ts_reg_v2;
		}
		else if (Race_Style == 1 && (ts_reg_v2 == 7 || ts_reg_v2 == 5 || ts_reg_v2 == 2))
		{
			std::system("cls"); // �������� �����
			std::cout << "������� ���������������� ������������ ��� ������������� ��������!" << std::endl;
			show_prev_reg_ts(show_reg_ts_after_reg, TS_name_in, Car_Qty);
			messages_for_ts_reg(Race_Style, s, TS_name_in, Car_Qty);
			yes_or_no = 1;
		}
		else if (Race_Style == 2 && (ts_reg_v2 == 1 || ts_reg_v2 == 3 || ts_reg_v2 == 4 || ts_reg_v2 == 6))
		{
			std::system("cls"); // �������� �����
			std::cout << "������� ���������������� ������������ ��� ������������� ��������!" << std::endl;
			show_prev_reg_ts(show_reg_ts_after_reg, TS_name_in, Car_Qty);
			messages_for_ts_reg(Race_Style, s, TS_name_in, Car_Qty);
			yes_or_no = 1;
		}
		else
		{
			for (int icdts = 0; icdts < 7; icdts++)
			{
				if (ts_reg_v2 == Uniq_ID_bool[icdts])
				{
					yes_or_no = 1;
					std::system("cls"); // �������� �����
					switch (ts_reg_v2)
					{
					case 1:
						std::cout << "������� - ��������� ��� ���������������!" << std::endl;
						break;
					case 2:
						std::cout << "����� ��� ���������������!" << std::endl;
						break;
					case 3:
						std::cout << "������� ��� ���������������!" << std::endl;
						break;
					case 4:
						std::cout << "������� ��� ���������������!" << std::endl;
						break;
					case 5:
						std::cout << "��� ��� ���������������!" << std::endl;
						break;
					case 6:
						std::cout << "������� - ��������� ��� ���������������!" << std::endl;
						break;
					case 7:
						std::cout << "���� - ������ ��� ���������������!" << std::endl;
						break;
					}
					show_prev_reg_ts(show_reg_ts_after_reg, TS_name_in, Car_Qty);
					messages_for_ts_reg(Race_Style, s, TS_name_in, Car_Qty);
					icdts = 8;
				}
			}
		}
		if (yes_or_no == 0)
		{
			return ts_reg_v2;
		}
	}

}