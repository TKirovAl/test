#include <iostream>
void userOp();
void isMounthPay(int* isLoanAmount, int* firstPay, int* isLoanTime);
int main() {
	userOp();
	return 0;
}
void userOp() {
	int isLoanAmount, firstPay, isLoanTime;
	std::cin >> isLoanAmount >> firstPay >> isLoanTime;
	if (firstPay < isLoanAmount * 0.20) return;
	isMounthPay(&isLoanAmount, &firstPay, &isLoanTime);
}
void isMounthPay(int *isLoanAmount, int *firstPay, int *isLoanTime) {
	int isMounthPay;
	*isLoanTime *= 12;
	isMounthPay = (*isLoanAmount - *firstPay) / *isLoanTime;
	std::cout << isMounthPay;
}
