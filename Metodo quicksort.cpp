#include <iostream>
using namespace std;

void QuickSort(int A[], int n);
void Reduce (int A[], int inic, int fin);

int main() {
	int n;
	cout << "METODO RAPIDO" << endl << endl; 
	cout << "Ingrese el numero de elementos: ";
	cin >> n; 
	
	if (n <= 0) {
    cout << "Cantidad no valida" << endl;
    return 0;
	}
	
	int A[n];
	cout <<"\nIngrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	QuickSort(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}

void QuickSort(int A[], int n) {
    if (n > 1) {
        Reduce(A, 0, n - 1);
    }
}

void Reduce (int A[], int inic, int fin) {
	int izq, der, pos, cen, aux;
	izq=inic;
	der=fin;
	pos=izq;
	cen=1;
	
	while(cen==1) {
		cen=0;
		while (pos != der && A[pos] <= A[der]) {
    	der = der - 1;
		}
		if(pos!=der) {
			aux = A[pos];
			A[pos] = A[der];
			A[der] = aux;
			pos =der;
			
			while (pos != izq && A[pos] >= A[izq]) {
    		izq = izq + 1;
			}
			
			if(pos != izq) {
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen=1;
			}
		}
		if(pos-1 >inic) {
			Reduce(A, inic, pos -1);	
		}
		if (pos+1 < fin) {
			Reduce(A, pos+1, fin);
		}
	}
}


