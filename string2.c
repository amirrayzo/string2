#include <string.h>

#include "string2.h"

int is_valid(char a[], char b[])
{
	int n = 0;
	
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[n])
		{
			if (n == 0)
			{
				continue;
			}
			else
			{
				n = 0;
			}
		}
		n += 1;
		if (strlen(b) == n)
		{
			return 1;
		}
	}
	return 0;
	
}

int count(char a[], char b[])
{
	int n = 0;
	int res = 0;
	
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[n])
		{
			if (n == 0)
			{
				continue;
			}
			else
			{
				n = 0;
			}
		}
		n += 1;
		if (strlen(b) == n)
		{
			res += 1;
			n = 0;
		}
	}
	return res;
	
}

int starts_with(char a[], char b[])
{
	for (int i = 0; i < strlen(b); i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}

int ends_with(char a[], char b[])
{
	int n = strlen(a) - 1;

	for (int i = strlen(b) - 1; i >= 0; i--)
	{
		if (a[n] != b[i])
		{
			return 0;
		}
		n -= 1;
	}
	return 1;
}