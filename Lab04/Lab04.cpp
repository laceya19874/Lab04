#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int N;
	while (true) {

		cout << "Factoral: ";
		cout << "Please enter a number: ";
		cin >> N;
		if (N < 0) {
			cout << "Error: Factorial is not defined for negative numbers." << endl;
		}
		else {
			break;
		}
	}
	unsigned long long result = 1;
	cout << N << "! = ";

	if (N == 0) {
		cout << "1 = 1" << endl;
		return;
	}

	for (int i = 1; i <= N; ++i) {
		result *= i;

	cout << i;
	if (i > 1) {
		cout << "*";
	}
}

	cout << N << " = " << result << endl;
	

}

void arithmetic() {
	int X;
	int Y;
	int Z;
	cout << "Arithmetic, enter a number to start at: ";
	cin >> X;
	cout << "Enter a number to add by each time: ";
	cin >> Y;

	while (true) {
		cout << "Enter the number of elements in the series: ";
		cin >> Z;
		if (Z < 0) { 
			cout << "Error: number of elements cannot be negative numbers." << endl;
		}
		else {
			break;
		}
	}

	int current_term = X;
	int total_sum = 0;

	cout << "Arithmetic Series: ";

	for (int i = 0; i < Z; ++i) {
		total_sum += current_term;
		cout << current_term;

		if (i < Z - 1) { 
			cout << " + ";
		}
		current_term += Y;
	}

	cout << " = " << total_sum << endl; 
}




void geometric() {
	int F;
	int R;
	int C;
	cout << "Geometrics, enter a number to start at: ";
	cin >> F;
	cout << "Enter a number to multiply by each time: ";
	cin >> R;

	while (true) {
		cout << "Enter the number of elements in the series: ";
		cin >> C;
		if (C < 0) {
			cout << "Error: number of elements cannot be negative numbers." << endl;
		}
		else {
			break;
		}
	}

	cout << "Gemetroics=" << F << R << C << endl;


}



int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}