#pragma once
class Viewer
{
	std::map <int, std::string> Groups_of_obj = { {1,"String-format"},{2,"File-format" } };//все типы данных в программе
	std::map <int, std::string> Groups_of_sender = { {1,"Net-sender"},{2,"DB-sender" } };//все типы отправителей в программе
public:
	int ret_data();
	int ret_sender();
	Viewer();
	~Viewer();
};

