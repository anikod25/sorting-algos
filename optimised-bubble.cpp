#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter number of elements: ";
    cin >> n;

    int* a = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }

    cout << "Sorted list in ascending order:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
