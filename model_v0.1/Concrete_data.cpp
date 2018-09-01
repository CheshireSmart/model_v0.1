#include "stdafx.h"
#include "Concrete_data.h"





/*вернуть вариант пользовательской структуры из возможных*/


std::unique_ptr<Data> Concrete_data::create(Viewer *id)
{
	std::unique_ptr<Data> data_smart = nullptr;
	/*выдать результаты установленных структур данных*/
	//int tmp = Data::choice();
	int tmp = id->ret_data();

	switch (tmp)
	{
	case 1:
		data_smart = std::unique_ptr<Symb_format>(new Symb_format); return data_smart;
		break;
	case 2:
		data_smart = std::unique_ptr<File_format>(new File_format); return data_smart;
		break;
		/*case 3:
			data_smart = std::unique_ptr<Elements> (new Elements); return data_smart;
			break;*/
			//case day:
			//	data_smart = std::unique_ptr<Day_comp>(new Day_comp); return data_smart;
			//	//return new Day_comp;
			//	break;
	default:
		//std::cout << "Modul is not installed..\n";
		break;
	}
	return data_smart;
}





Concrete_data::Concrete_data()
{
	std::cout << "(constr Concrete_data)\n";
}


Concrete_data::~Concrete_data()
{
	std::cout << "(destr Concrete_data)\n";
}
