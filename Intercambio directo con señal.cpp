#include <iostream>
using namespace std;

void InterDirectoSen(int A[], int n);

int main() {
	int n; 
	cout << "INTERCAMBIO DIRECTO CON SEÑAL" << endl<< endl;
	cout << "Ingrese el numero de elementos: "; 
	cin >> n;
	
	int A[n]; 
	cout << "Ingrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	InterDirectoSen(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void InterDirectoSen(int A[], int n) {
	int cen,i , j, aux;
	cen=1;
	i=0;
	
	while (i<n-1 && cen==1) {
		cen=0;
		
		for(j=0; j<n-i-1; j++) {
			if(A[j] > A[j+1]) {
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
				cen=1;
			}
		}
		i= i+1;
	}
}
