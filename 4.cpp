#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1;
    int left = 1;
    int right = n;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        int count = 0;
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }
        
        if (count > mid) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 3, 4};
    vector<int> arr2 = {1, 2, 2, 3, 4, 5};
    
    cout << "Repeated number in arr1: " << findDuplicate(arr1) << endl;
    cout << "Repeated number in arr2: " << findDuplicate(arr2) << endl;

    return 0;
}
