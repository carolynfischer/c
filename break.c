#include <stdio.h>

char s[] = "This is a test string. It contains two sentences.";

int main()
{
	int count;

	printf("Original string: %s\n", s);

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '.')
		{
			s[count+1] = '\0';
			break;
		}
	}

	printf("Modified string: %s\n", s);

	return 0;
}
