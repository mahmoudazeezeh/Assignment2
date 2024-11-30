#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

long long IterativeFact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    auto start = high_resolution_clock::now();
    long long result = IterativeFact(number);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);
    double time_ms = duration.count() / 1000.0;

    cout << "IterativeFact(" << number << ") = " << result << endl;
    cout << "Time taken: " << time_ms << " ms" << endl;

    return 0;
}
