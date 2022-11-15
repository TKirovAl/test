#include <iostream>
void userPhoneNumber();
void numberTransformation(char* telephoneNumber);
int main() {
	userPhoneNumber();
	return 0;
}
void userPhoneNumber() {
	char phoneNumber[11]; int counter = 0;
	do
	{
		std::cin >> phoneNumber[counter];
		counter++;
	} while (counter != 10);
	numberTransformation(phoneNumber);
}
void numberTransformation(char* phoneNumber) {
	char* t = phoneNumber;
	std::cout << "+7 (";
	for (int i = 0; i < 10; i++) {
		std::cout << t[i];
		if (i == 2) std::cout << ") ";
		if (i == 5|| i == 7) std::cout << "-";
	}
}
