#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {0, 0, 0, 0, 1, 1};
    
    int low = 0;
    int high = arr.size() - 1;
    
    if (arr[high] == 0) {
        cout << "Total number of 1's in the array: " << 0 << endl;
        return 0;
    }
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == 1) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    
    int onesCount = arr.size() - low;
    
    cout << "Total number of 1's in the array: " << onesCount << endl;

    return 0;
}
