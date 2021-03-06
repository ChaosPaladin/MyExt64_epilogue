
#include <Common/CSharedCreatureData.h>
#include <Common/Utils.h>

void CSharedCreatureData::InitNpc()
{
	WriteMemoryDWORD(0x44CB64 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x44F21C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x44FD25 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x44FDE7 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4640C4 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x46BB7C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A442A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A6475 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A7893 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A7979 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A8236 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4A82D6 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4AF490 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4AF535 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4BF73B + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4BF829 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x4C7540 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5789E7 + 1, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x578A5F + 1, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5838C5 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x583A5D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x583BF5 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x583DFA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5844ED + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5846DD + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5848C5 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x584A9D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x584C82 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x584E65 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x58504D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x585225 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x58558E + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5858CA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x585924 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x585B39 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x585D57 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x585F9E + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5861B1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x586399 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x586579 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x586761 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x586B21 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x586D11 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5876B9 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x587861 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x587D6B + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x587F43 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588119 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588323 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x58859D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588784 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588921 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588AD1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588C81 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588E29 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x588FD1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x58917C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x58969A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5898F6 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x592536 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x59255B + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x592A76 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x592A99 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x592C36 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x5ADC77 + 3, sizeof(CSharedCreatureData));
}

void CSharedCreatureData::InitServer()
{
	WriteMemoryDWORD(0x428D8C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x429444 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x429ADB + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x42A1B0 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x42AC7C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x42E91D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x523CAB + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x523CD9 + 2, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x523CE8 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x524062 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x52406D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x524081 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x534984 + 2, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x540350 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x54073A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x68636C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x7392CF + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x73B468 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80F946 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80F9AA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FA86 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FB0C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FB4C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FB8F + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FBDA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FBF1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FCC3 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FD8C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FDCF + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FE15 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FE64 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FE7B + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x80FEA7 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x811E19 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x812356 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x812B65 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x812C61 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x812C68 + 4, -sizeof(CSharedCreatureData) + 0x58);
	WriteMemoryDWORD(0x812C74 + 4, -sizeof(CSharedCreatureData) + 0x54);
	WriteMemoryDWORD(0x812C93 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x812C9A + 3, -sizeof(CSharedCreatureData) + 0x58);
	WriteMemoryDWORD(0x8BF073 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x8BF606 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x8BFEB3 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x8C0428 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x92E5E5 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x955150 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x9567DD + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x956E8A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x9574C1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x95777C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x957C6A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x95805D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x967256 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x9678EA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96802F + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x968AC1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96919D + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96975F + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x969EC0 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96A498 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96ABCE + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96B46A + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96B89E + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96C0CA + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96C882 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x96D062 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x9735BC + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x975917 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x975BE1 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x975C9E + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x977542 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x97811C + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x9783E9 + 3, sizeof(CSharedCreatureData));
	WriteMemoryDWORD(0x978EA3 + 3, sizeof(CSharedCreatureData));
}

CompileTimeOffsetCheck(CSharedCreatureData, index, 0x0028);
CompileTimeOffsetCheck(CSharedCreatureData, storeMode, 0x06AC);
CompileTimeOffsetCheck(CSharedCreatureData, level, 0x07A4);
CompileTimeOffsetCheck(CSharedCreatureData, wedding_relation, 0x1734);

