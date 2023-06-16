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
	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped elelment is: " << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}