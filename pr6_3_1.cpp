#include <iostream>

using namespace std;
template <typename T>
T it(T P)
{
	return P + 1;
}
int array_result(int A[], int P, int i) {
	if (A[i] % 2 == 1)
	{
		P = it(P);
	}
	i++;
	if (i < 10) {
		P = array_result(A, P, i);
	}
	return P;
}
int output(int A[], int P, int i) {
	cout << "[" << i << "] " << A[i] << "   ";
	i++;
	if (i < 10) {
		output(A, P, i);
	}
	return 1;
}
int main() {
	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = rand() % 90 + 5;
	}
	int P = 0;
	int i = 0;
	cout << "Result: " << array_result(A, P, i) << endl;
	cout << output(A, P, i) << endl;
	return 0;
}