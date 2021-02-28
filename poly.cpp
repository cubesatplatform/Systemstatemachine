// Poly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include "system.h"
#include "message.h"
#include <iostream> 
#include "sat.h"

long CSystem::lcounter = 0;
int main()
{
	CSat sat;
	sat.setup();
	while (1) {
		
		sat.loop();

	}
}
  
