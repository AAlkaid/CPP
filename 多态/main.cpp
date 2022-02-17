#include <iostream>
#include <vector>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> col_max(matrix[0].size(), 0);
    vector<int> row_min(matrix.size(), 100001);
    vector<int> ans;

    for ( int i = 0; i < matrix.size(); i ++ )
    {
        for ( int j = 0; j < matrix[0].size(); j ++ )
        {
            row_min[i] = min(row_min[i], matrix[i][j]);
            cout << row_min[i] << " " << endl;
            col_max[j] = max(col_max[j], matrix[i][j]);
            cout << col_max[j] << " " << endl;

        }
    }

    for ( int i = 0; i < matrix.size(); i ++ )
    {
        for ( int j = 0; j < matrix[0].size(); j ++ )
        {
            if ( matrix[i][j] == row_min[i] && matrix[i][j] == col_max[j] )
                ans.push_back(matrix[i][j]);
        }
    }
    return ans;
}

int main() {
    luckyNumbers();
    return 0;
}