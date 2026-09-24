#include <iostream>
using namespace std;

void InterDirectoIzq(int A[], int n);

int main() {
	int n; 
	cout << "INTERCAMBIO DIRECTO POR LA IZQUIERDA" << endl << endl;
	cout << "Ingrese el numero de elementos: ";
	cin >> n; 
	
	int A[n];
	cout << "Ingrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	InterDirectoIzq(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void InterDirectoIzq(int A[], int n) {
	int i, j, aux;
	
	for(int i=1; i<n; i++) {
		for(int j=n-1; j>=i; j--) {
			if(A[j] < A[j-1]) {
				aux = A[j-1];
				A[j-1] = A[j];
				A[j] = aux;
			}
		}
	}
}
