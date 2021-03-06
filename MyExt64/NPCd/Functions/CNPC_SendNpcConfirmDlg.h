
#pragma once

#include <NPCd/NPCFunction.h>
#include <NPCd/CNPC.h>
#include <Common/CSharedCreatureData.h>

class CNPC_SendNpcConfirmDlg : public NPCFunction {
public:
	CNPC_SendNpcConfirmDlg();
	virtual void* Call(void *caller, void **params);
	virtual void SetTypes();
	static int SendNpcConfirmDlg(CNPC *npc, int msgId, CSharedCreatureData *c);
};

