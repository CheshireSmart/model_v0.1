#pragma once
#include "Viewer.h"
#include "Recipient.h"

class Concrete_recipient
{
	static int class_id();
public:
	static std::unique_ptr<Recipient> sender(Viewer *id);
	Concrete_recipient();
	~Concrete_recipient();
};
