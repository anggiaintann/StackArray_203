#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}
	void push() {
		cout << "\nEnter an Element: ";
		int element;
		cin >> element;

		if (top == 4) { //step 1
			cout << "Number of data exceeds the limit." << endl;
			return;
		}

		top++;
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed) " << endl;

	}