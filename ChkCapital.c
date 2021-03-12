//program to check given chracter is capital or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char cValue)
{
	if((cValue >= 'A') && (cValue <= 'Z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character \n");
	scanf("%c",&ch);
	
	bRet = ChkCapital(ch);
	
	if(bRet == TRUE)
	{
		printf("Given character is Capital\n");
	}
	else
	{
		printf("Given character is not capital");
	}
	
	return 0;
}

/*

output

Enter the character
A
Given character is Capital

D:\ProgramTopicWise\LB\4ProblemsOnString\ChkCapital>myexe
Enter the character
n
Given character is not capital

*/