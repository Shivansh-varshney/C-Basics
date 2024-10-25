// print the sum of the below series
// 

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}