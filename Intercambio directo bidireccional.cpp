#include <iostream>
using namespace std;

void InterDirectoBi(int A[],int n);

int main() {
	int n;
	cout << "INTERCAMBIO DIRECTO BIDIRECCIONAL" << endl << endl;
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	
	int A[n];
	cout << "Ingrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	InterDirectoBi(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void InterDirectoBi(int A[], int n) {
	int izq, der, k, i, aux;
	izq = 1;
	der = n-1;
	k = n-1;
	
	while(izq <= der) {
		
		for(int i=der; i>=izq; i--) {
			if(A[i-1] > A[i]) {
				aux = A[i-1];
				A[i-1] = A[i];
				A[i] = aux;
				k = i;
			}
		}
		
		izq = k+1;

		for(int i=izq; i<=der; i++) {
			if(A[i-1] > A[i]) {
				aux = A[i-1];
				A[i-1] = A[i];
				A[i] = aux;
				k = i;
			}
		}	
		der = k-1;
	}
}
