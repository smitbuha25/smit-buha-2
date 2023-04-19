#include<stdio.h>

main()
{
	int a=150,b=200,c=102,d=140,e=45;
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
	}
}
