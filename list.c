#include	<stdio.h>
int	main()
{
	unsigned const char *namelist[] = {
		"サーフェス",
		"Dreams come true",
		"久保田利伸",
		"Perfume",
		"MIO",
		"西脇唯"
	};
	long	count,loop;

	count = sizeof(namelist) / sizeof(*namelist);

	for( loop = 0;loop < count;loop++){
		printf("%s\n",namelist[loop]);
	}
}
	
