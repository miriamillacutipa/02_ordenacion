#include <iostream>
using namespace std;

void seleccionDir(int A[], int n); 

int main() {
	int n;
	cout << "SELECCION DIRECTA" << endl << endl;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	
	int A[n];
	cout << "Ingrese los elementos: " << endl;
	for (int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	seleccionDir(A, n);
	cout << "Arreglo ordenado: " << endl;
	for (int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void seleccionDir(int A[], int n) {
	int menor, i, j, k;
	
	for(i=0; i<n; i++) {
		menor = A[i];
		k = i;
		
		for(j=i+1; j<n;j++) {
			if (A[j] < menor) {
				menor = A[j];
				k = j;
			}
		}
		A[k] = A[i];
		A[i] = menor;
	}
}
