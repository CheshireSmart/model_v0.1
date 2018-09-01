#pragma once
#include "Viewer.h"
#include "Data.h"






class Concrete_data
{


public:
	static std::unique_ptr<Data> create(Viewer *id);//знает и создает конкретный объект из группы объектов интерфейса Data 

	Concrete_data();
	virtual ~Concrete_data();
};

