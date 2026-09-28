#include <iostream>
using namespace std;

void insercionBin(int A[], int n);

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
	
	insercionBin(A, n);
	cout << "Arreglo ordenado: " << endl;
	for (int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void insercionBin(int A[], int n) {
	int i, aux, izq, der, j, m;
	
	for(i=1; i<n; i++) {
		aux = A[i];
		izq = 0;
		der = i-1;
		
		while(izq <= der) {
			m= ((izq + der)/2);
			
			if(aux < A[m]) {
				der = m-1;
			} else {
				izq = m+1;
			}
		}
		j = i-1;
		
		while(j >= izq) {
			A[j+1] = A[j];
			j = j-1;
		}
		A[izq] = aux;
	}
}
