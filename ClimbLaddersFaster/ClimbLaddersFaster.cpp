// ClimbLaddersFaster.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "..\sadx-mod-loader\SADXModLoader\include\SADXModLoader.h"

int posaddrs[] = { 0x4983A1, 0x45F4D5, 0x4798C7, 0x489D8E, 0x4822FA, 0x48F13E };
int negaddrs[] = { 0x4983B0, 0x45F4E4, 0x4798DA, 0x489D9D, 0x482306, 0x48F14D };

extern "C"
{
	__declspec(dllexport) void Init(const char *path, const HelperFunctions &helperFunctions)
	{
		for (int i = 0; i < LengthOfArray<int>(posaddrs); i++)
			WriteData((const float *)posaddrs[i], 5.0f);
		for (int i = 0; i < LengthOfArray<int>(negaddrs); i++)
			WriteData((const float *)negaddrs[i], -5.0f);
	}

	__declspec(dllexport) ModInfo SADXModInfo { ModLoaderVer };
}