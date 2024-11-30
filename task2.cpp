#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

long long RecursiveFact(int n) {
    return (n <= 1) ? 1 : n * RecursiveFact(n - 1);
}

int main() {
    int number;
    cin >> number;

    auto start = high_resolution_clock::now();
    long long result = RecursiveFact(number);
    auto endd = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(endd - start);
    double time_ms = duration.count() / 1000.0;

    cout << "RecursiveFact(" << number << ") = " << result << endl;
    cout << "Time taken: " << time_ms << " ms" << endl;

    return 0;
}
