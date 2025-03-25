#include <iostream>

using namespace std;

int main() {
    int n, array[1000], c, d, t;

    cout << "Enter number of elements\n";
    cin >> n;

    cout << "Enter " << n << " integers\n";
    for (c = 0; c < n; c++)
        cin >> array[c];

    for (c = 1; c <= n - 1; c++) {
        d = c;

        while (d > 0 && array[d - 1] > array[d]) {
            t = array[d];
            array[d] = array[d - 1];
            array[d - 1] = t;

            d--;
        }
    }

    cout << "Sorted list in ascending order:\n";
    for (c = 0; c < n; c++) {
        cout << array[c] << "\n";
    }

    return 0;
}
