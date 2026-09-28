#include <iostream>
using namespace std;

void insercionDir(int A[], int n);

int main() {
	int n;
	cout << "INSERCION DIRECTA" << endl << endl;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	
	int A[n];
	cout << "Ingrese los elementos: " << endl;
	for (int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	insercionDir(A, n);
	cout << "Arreglo ordenado: " << endl;
	for (int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void insercionDir(int A[], int n) {
	int i, k, aux;
	
	for(i=1; i<n; i++) {
		aux = A[i];
		k = i-1;
		
		while(k>=0 && aux<A[k]) {
			A[k+1] = A[k];
			k = k-1;
		}
		A[k+1] = aux;
	}
}

