#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    long long left = 0;
    long long right = n;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long totalCoins = (mid * (mid + 1)) / 2;
        
        if (totalCoins == n) {
            return mid;
        } else if (totalCoins < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return right;
}

int main() {
    int n1 = 5;
    int n2 = 8;
    
    cout << "Number of complete rows for n = " << n1 << ": " << arrangeCoins(n1) << endl;
    cout << "Number of complete rows for n = " << n2 << ": " << arrangeCoins(n2) << endl;

    return 0;
}
