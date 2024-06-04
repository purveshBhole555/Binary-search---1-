#include <iostream>

using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) {
        return false;
    }
    
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int n1 = 36;
    int n2 = 45;
    
    cout << "Is " << n1 << " a valid perfect square? " << (isPerfectSquare(n1) ? "Yes" : "No") << endl;
    cout << "Is " << n2 << " a valid perfect square? " << (isPerfectSquare(n2) ? "Yes" : "No") << endl;

    return 0;
}
