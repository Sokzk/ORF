#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
	char seq[ 1000 ];
	int length, i, k;

	while ( scanf("%s\n", seq) == 1 )
	{
		length = strlen( seq );
		i = 0;

		while ( i < length - 2 )
		{
			if (seq[i] == 'A' && seq[i + 1] == 'T' && seq[i + 2] == 'G')
			{
			printf("Found start codon 'ATG' at position %d of string", i);

			k = i + 3;
			while (k < length)
			{
				if ((k + 2) < length && seq[k] == 'T' && seq[k + 1] == 'G' && seq[k + 2] == 'A')
				{
				printf(" and stop codon 'TGA' at position %d of string\n", k);
				break;
				}

				else if ((k + 2) < length && seq[k] == 'T' && seq[k + 1] == 'A' && seq[k + 2] == 'A')
				{
				printf(" and stop codon 'TAA' at position %d of string\n", k);
				break;
				}

				else if ((k + 2) < length && seq[k] == 'T' && seq[k + 1] == 'A' && seq[k + 2] == 'G')
				{
				printf(" and stop codon 'TAG' at position %d of string\n", k);
				break;
				}
			k += 3;
			}

			i = k;
				}
			else
			{
			i++;
			}
		}

		printf("\n");
	}


}

