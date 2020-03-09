//For example, XXXIX is 39 and XXXXIIX is 48.  IIIIX is invalid. Given a string of roman numeral, write a C++ code to check if it is valid and also print the arabic equivalent if valid and print Invalid otherwise.

/*
There are a few rules for writing numbers with Roman numerals:

Repeating a numeral represents addition of the number. For example, III represents 1 + 1 + 1 = 3.

Only I, X, C, and M can be repeated that is III is valid but LL is not valid

Writing numerals that decrease from left to right represents addition of the numbers. For example, LX represents 50 + 10 = 60 and XVI represents 10 + 5 + 1 = 16.

Writing numerals that increase from left to right represents subtration. For example, IV represents 5 - 1 = 4 and IX represents 10 - 1 = 9.

Maximum of two same small numerals can only be written to the left of a Roman numeral. For example, 8 can be represented by either VIII or IIX

For example, XXXIX is 39 and XXXXIIX is 48.  IIIIX is invalid. Given a string of roman numeral, write a C++ code to check if it is valid and also print the arabic equivalent if valid and print Invalid otherwise.

int main ()
{
	char input ..
	scanf
	iteration till different element nhi mil jaate... har ek agle element par 
	check increasing / decreasing 
	just next check ..
}*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>

using namespace std ;

//Global Variables
char inputString [100] ;
int romanSum = 0 ;
int index  = 0 ;
int temp ;

void checkCounituation ();
bool checkIncreaseOrDecrease ();
void AdjacentIncreaseOrDecrease ();
void errorCheck ();
void additionCheck (char );


int main ()
{
	printf ("\nPlz Enter the String");
	scanf ("%s",inputString);
	checkCounituation();
	cout << romanSum;
	return 0 ;
}

bool checkIncreaseOrDecrease()
{
	if (additionReturningFunction(inputString[index]) < additionReturningFunction(inputString[index-1]))
	{
		temp = index ;
		--temp;
		for ( ; ;temp++)
		{

		}
		// take m , iterator to end or equal to m .....
		// start from current index .. add for small and 	subttratract for bigger
	}
	else
	{
		additionCheck(inputString[index]);
	}

}

int additionReturningFunction (char ch)
{
	int temporaryStorageValueAddition ;
	if (ch == 'I')
		temporaryStorageValueAddition = 1 ;
	else if (ch == 'V')
		temporaryStorageValueAddition = 5 ;
	else if (ch == 'X')
		temporaryStorageValueAddition = 10 ;
	else if (ch == 'L')
		temporaryStorageValueAddition = 50 ;
	else if (ch == 'C')
		temporaryStorageValueAddition = 100 ;
	else if (ch == 'D')
		temporaryStorageValueAddition = 500 ;	
	else if (ch == 'M')
		temporaryStorageValueAddition = 1000 ;

	return temporaryStorageValueAddition ; 	
}

void additionCheck(char ch)
{
	int temporaryStorageValueAddition ;
	if (ch == 'I')
		temporaryStorageValueAddition = 1 ;
	else if (ch == 'V')
		temporaryStorageValueAddition = 5 ;
	else if (ch == 'X')
		temporaryStorageValueAddition = 10 ;
	else if (ch == 'L')
		temporaryStorageValueAddition = 50 ;
	else if (ch == 'C')
		temporaryStorageValueAddition = 100 ;
	else if (ch == 'D')
		temporaryStorageValueAddition = 500 ;	
	else if (ch == 'M')
		temporaryStorageValueAddition = 1000 ; 

	romanSum += temporaryStorageValueAddition ; 
}

void checkCounituation()
{
	char ch ;
	int lengthString = strlen(inputString);
	for ( ; index < lengthString ; index++ )
	{
		additionCheck(inputString[index]);
		if (inputString[index+1] != inputString[index] ){
			cout << "\n The value of index is " << index << "\n"  ;
			break ;
		}
		else {
			additionCheck(inputString[index]);
			index++;
		}

	}
}

