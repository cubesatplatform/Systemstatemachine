#pragma once
#include <vector>
#include "system.h"




class CSat {

	std::vector<CSystem*> vsys;
public:
	CSat() {};
	~CSat() {};
	
	void setup(); 
	void loop();







};
