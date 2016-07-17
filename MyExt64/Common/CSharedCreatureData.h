
#pragma once

#include <windows.h>

class CSharedCreatureData {
public:
	/* 0x0000 */ unsigned char padding0x0000[0x8];
	/* 0x0008 */ double x;
	/* 0x0010 */ double y;
	/* 0x0018 */ double z;
	/* 0x0020 */ INT32 heading;
	/* 0x0024 */ UINT32 objectId;
	/* 0x0028 */ UINT32 index;
	/* 0x002C */ unsigned char padding0x002C[0x00A4-0x002C];
	/* 0x00A4 */ WCHAR name[25];
	/* 0x00D6 */ unsigned char padding0x00D6[0x06AC-0x00D6];
	/* 0x06AC */ INT32 storeMode;
	/* 0x06B0 */ unsigned char padding0x06B0[0x07A4-0x06B0];
	/* 0x07A4 */ UINT32 level;
	/* 0x07A8 */ unsigned char padding0x07A8[0x08C8-0x07A8];
	/* 0x08C8 */ UINT32 builder;
	/* 0x08CC */ unsigned char padding0x08CC[0x0938-0x08CC];
	/* 0x0938 */ UINT32 pcPoints;
	/* 0x093C */ unsigned char padding0x093C[0x0A7C-0x093C];
	/* 0x0A7C */ UINT32 npcClassId;
	/* 0x0A80 */ unsigned char padding0x0A80[0x0DF8-0x0A80];
	/* 0x0DF8 */
};
