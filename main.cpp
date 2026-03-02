#include <iostream>

int operationMenu(){
	int option;

	std::cout << "1) Matrix Addition" << std::endl;
	std::cout << "2) Matrix Multiplication" << std::endl;
	std::cout << "3) Matrix Inversion" << std::endl;
	std::cout << "4) Row Echelon Form" << std::endl;
	std::cout << "5) Reduced Row Echelon Form" << std::endl;
	std::cout << "6) Find Determinant" << std::endl;
	std::cout << "7) Exit" << std::endl;
	
	std::cin >> option;

	return option;
}

void matrixAddition();
void matrixMultiplication();
void matrixInversion();
void rowEchelonForm();
void reducedRowEchelonForm();
void determinant();

int main(){
	int exit = 0;
	while(!exit){
		int operation;
		
		operation = operationMenu();

		switch(operation){
			case 1: matrixAddition(); break;
			case 2: matrixMultiplication(); break;
			case 3: matrixInversion(); break;
			case 4: rowEchelonForm(); break;
			case 5: reducedRowEchelonForm(); break;
			case 6: determinant(); break; 
			case 7: exit = 1; break;
			default: std::cout << "Invalid matrix option, please try again\n" << std::endl;
		}
	}
	
	return 0;
}

void matrixAddition(){
	std::cout << "Matrix Addition Called" << std::endl;
}

void matrixMultiplication(){
	std::cout << "Matrix Multiplication Called" << std::endl;
}

void matrixInversion(){
	std::cout << "Matrix Inversiont Called" << std::endl;
}

void rowEchelonForm(){
	std::cout << "Row Echelon Conversion Called" << std::endl;
}

void reducedRowEchelonForm(){
	std::cout << "Reduced Row Echelon Conversion Called" << std::endl;
}

void determinant(){
	std::cout << "Determinant Calculation Called" << std::endl;
}
