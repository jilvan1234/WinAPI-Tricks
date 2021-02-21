#include <windows.h>
#include "PEB.h"

INT main(VOID)
{
#if defined(_WIN64)
	//64bit
	PPEB Peb = (PPEB)__readgsqword(0x60);
#elif define(_WIN32)
	//32bit
	PPEB Peb = (PPEB)__readfsdword(0x30);
#endif
	return ERROR_SUCCESS;
}