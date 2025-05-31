#include <iostream>
using namespace std;

// Function template definition
template <typename T> T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {

    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;

    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;

    // call myMax for char
    cout << myMax<char>('g', 'e');

    return 0;
}