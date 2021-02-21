#include <windows.h>
#include "TEB.h"

INT main(VOID)
{
	PPEB Peb;

#if defined(_WIN64)
	//64bit
	PTEB Teb = (PTEB)__readgsqword(0x30);
#elif define(_WIN32)
	//32bit
	PTEB Teb = (PTEB)__readfsdword(0x18);
#endif

	Peb = (PPEB)Teb->ProcessEnvironmentBlock;

	return ERROR_SUCCESS;
}