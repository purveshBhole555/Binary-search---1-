#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int x = 4;
    
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (result != -1) {
        cout << "Last occurrence of " << x << " is at index " << result << endl;
    } else {
        cout << x << " does not exist in the array." << endl;
    }
    
    return 0;
}
