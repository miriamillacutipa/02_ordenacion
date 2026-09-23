#include <iostream>
using namespace std;

void InterDirectoDer(int A[], int n);

int main() {
	int n;
	cout << "INTERCAMBIO DIRECTO POR LA DERECHA" << endl << endl;
	cout << "Ingrese el numero de elementos: ";
	cin >> n; 
	
	int A[n];
	cout << "Ingrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	InterDirectoDer(A,n);
	cout << "Arreglo ordenado: "<< endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
	
}

void InterDirectoDer (int A[], int n) {
	int i, j, aux; 
	
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(A[j] > A[j+1]) {
				aux=A[j];
				A[j]= A[j+1];
				A[j+1]= aux;
			}
		}
	}
}
