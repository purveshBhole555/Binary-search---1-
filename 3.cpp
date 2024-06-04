#include <iostream>
#include <vector>

using namespace std;

int findMaxOnesRow(vector<vector<int>>& matrix) {
    int maxOnesRow = -1;
    int maxOnesCount = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    for (int i = 0; i < rows; ++i) {
        int onesCount = 0;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }
    
    return maxOnesRow;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    int maxOnesRow = findMaxOnesRow(matrix);
    
    cout << "Row with the maximum number of 1's: " << maxOnesRow << endl;

    return 0;
}
