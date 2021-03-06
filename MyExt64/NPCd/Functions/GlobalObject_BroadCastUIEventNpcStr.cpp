
#include <NPCd/Functions/GlobalObject_BroadCastUIEventNpcStr.h>
#include <Common/CLog.h>

GlobalObject_BroadCastUIEventNpcStr::GlobalObject_BroadCastUIEventNpcStr() :
	NPCFunction(L"BroadCastUIEventNpcStr", &BroadCastUIEventNpcStr)
{
}

void* GlobalObject_BroadCastUIEventNpcStr::Call(void *caller, void **params)
{
	return reinterpret_cast<void*(*)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*)>(functionPtr.functionPtr)(
		caller, params[0], params[1], params[2], params[3], params[4], params[5], params[6], params[7], params[8], params[9], params[10]);
}

void GlobalObject_BroadCastUIEventNpcStr::SetTypes()
{
	SetReturnType(Type::TYPE_VOID);
	AddParameter(Type::TYPE_CREATURE);
	AddParameter(Type::TYPE_INT);
	AddParameter(Type::TYPE_INT);
	AddParameter(Type::TYPE_INT);
	AddParameter(Type::TYPE_INT);
	AddParameter(Type::TYPE_STRING);
	AddParameter(Type::TYPE_STRING);
	AddParameter(Type::TYPE_STRING);
	AddParameter(Type::TYPE_INT);
	AddParameter(Type::TYPE_STRING);
	AddParameter(Type::TYPE_STRING);
}

int GlobalObject_BroadCastUIEventNpcStr::BroadCastUIEventNpcStr(void*, CSharedCreatureData *c, int range, int showTimer, int unk1, int unk2, wchar_t *timerType, wchar_t *startTimeMin, wchar_t *startTimeSec, int npcStringId, wchar_t *endTimeMin, wchar_t *endTimeSec)
{
    CLog::Add(CLog::Blue, L"GlobalObject::BroadCastUIEventNpcStr stub");
	return 0;
}

