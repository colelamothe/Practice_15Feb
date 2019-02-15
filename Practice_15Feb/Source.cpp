// Concept exploration

#include <iostream>

using namespace std;

int main() {
	
	//Arrays are used to store multiple items in an ordered variable. They are called, declared and used with [] brackets
	int arr[5] = { 0,1,2,3,4 }; // creates an array with a dimension of a single row with 5 columns and assigns 0-4 in their respective locations

	cout << arr[0] << endl; // outputs the first entry in the array. Counting starts from 0.

	int multi[3][3] = { {0,1,2},{3,4,5} }; // creates a multi dimensional array with dimensions 3 rows and 3 columns. 

	cout << multi[1][2] << endl; // outputs the second row and the third column.

	cout << arr[2] + multi[1][1] << endl; // outputs the result of adding the second row second column of multi and the third entry in arr

	// Pointers are used to 

	int score = 25;
	int *scoreLocation; // The * assigns this variable to the pointer data type during the declaration phase. Do not confuse this with the contents of * used later.

	scoreLocation = &score; // The & operator is used to call the location of a variable. In this case it assigns the location of score to the pointer variable declared earlier

	cout << "Calling a location once can use the & operator: " << &score << " \nbut it is better to declare a pointer variable type to actually use it: " << scoreLocation << endl;

	cout << "\nThis can be used to pass a variable in and out of functions without \npassing the full value around and taking more memory : " << *scoreLocation << endl; 
	// using the * operator outside of variable declaration returns the value of the memory located at that address. This allows the same variable to be passed around and not use additional memory
	// & is the address of a variable * is the contents of an address.

	//The following three statements are all identical in their operation.
	score = score + 1; // Standard call. uses the varable to call the value and changes it based on it's own value 
	cout << score << endl;
	score = *scoreLocation + 1; // Calls the variable to be changed and calls the value of the variable by using the address.
	cout << score << endl;
	*scoreLocation = *scoreLocation + 1; // This one calls the value stored at the location and changes it the same as the others. Be careful to call the value of for the assignment. We want to change the value not the address
	cout << score << endl;



	system("pause");
	return 0;

}