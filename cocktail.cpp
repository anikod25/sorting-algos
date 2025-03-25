#include <iostream>
using namespace std;

int main() 
{
    int n, i, swapped; 
    cout << "Enter number of elements: ";
    cin >> n;

    int* a = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    do {
        swapped = 0; 
        for (i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = 1; 
            }
        }

        if (swapped == 0) break;

        swapped = 0; 
        
        for (i = n - 2; i >= 0; i--) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = 1; 
            }
        }

    } while (swapped); 

    cout << "Sorted list in ascending order:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a; 
    return 0;
}