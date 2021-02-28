#include "sat.h"
#include "message.h"
#include "system.h"


void CSat::setup() {
	CMessage msg("cmd:deploy");
	CMessage msg1("mag:on;time:20;maxloops:50;alexander:blond");


	msg1.Fill();
	std::cout << msg1.Parameters["mag"] << msg1.Parameters["alexander"] << "\n";

	
	CMag* pmag = new CMag();
	CLight* plight = new CLight();
	CAlexander* palexander = new CAlexander();
	CCam* pcam = new CCam();
	CDeploy* pdeploy = new CDeploy();

	vsys.push_back(pdeploy);
	vsys.push_back(pmag);
	vsys.push_back(plight);
	vsys.push_back(pcam);
	vsys.push_back(palexander);

}

void CSat::loop() {
	CSystem* psys;



	for (int count = 0; count < vsys.size(); count++) {
		psys = vsys[count];
		//psys->newMsg(msg);

		if (psys->isReady()) psys->loop();

	}
}
