// Including header file.
#include<iostream>
using namespace std;

// getOnceDigit() function that will return the,
// digit at Once place of the number.
int getOnceDigit(int num){
	return (num % 10);
}

// printNecklaceSeries() function that will take First number and Second number,
// as a parameters and print the complete Necklace Series.
void printNecklaceSeries(int firstNum, int secondNum){
	// Initializing variables.
	int originalFirstNum = firstNum, originalSecondNum = secondNum;
	int steps = 0;

	// Printing the Necklace Series.
	cout<< firstNum<< "    "<< secondNum<< "    ";
	do{
		int sum = (firstNum + secondNum);

		firstNum = secondNum;
		secondNum = getOnceDigit(sum);

		cout<< secondNum<< "    ";
		steps++;
	}while( (firstNum != originalFirstNum) || (secondNum != originalSecondNum) );

	// Printing the Required Steps to complete the Necklace Series.
	cout<< "\nYour Number required "<< steps<< " steps."<< endl;
}

// main() function or the driver function.
int main(){
	// Variables for taking input.
	int firstNum, secondNum;

	// Taking input for the first Number.
	cout<< "\nPlease Enter Your First Number : ";
	cin>> firstNum;

	// Taking input for the first Number.
	cout<< "Please Enter Your Second Number : ";
	cin>> secondNum;

	// Calling printNecklaceSeries() function and printing the Series.
	printNecklaceSeries(firstNum, secondNum);

	return 0;

// End of main() function.
}