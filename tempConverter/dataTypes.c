#include <stdio.h>
int main() 
{
	int myAge, mySalary;
	myAge = 22;
	mySalary = 5000000;
	/*
	 * "%d\t%d\n" --> two integers myAge and 
	 * mySalary with a tab \t between them
	 * */
	printf("%d\t%d\n", myAge, mySalary);

	/*
	 * "%3d" --> Type will be int and at least 3 space 
	 * will be allocated to display the result
	 * */

	printf("%3d\t%5d\n", 1000, 3034300);
	
	int money, numberOfPeople;
	float dividedMoney;
	money = 1000000;
	numberOfPeople = 13;


	dividedMoney = money / numberOfPeople;
	printf("%f\n", dividedMoney);
	
}
