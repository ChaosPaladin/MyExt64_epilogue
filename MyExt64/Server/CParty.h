
#pragma once

#include <vector>
#include <Common/xvector.h>

class CParty {
public:
	static void Init();

	void Withdraw(class CUser *user, const bool b);
	class CUser* GetMaster();
	std::vector<class CUser*> GetAllMember();
	void GetAllMember(xvector<class CUser*> *members);
	void SendRelationChanged();
	void Dismiss(const bool b);
};

