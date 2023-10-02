#include "main.h"

/**
 * output_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void output_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

