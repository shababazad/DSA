#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int col1 = 1;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                    col1 = 0;
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (col1 == 0)
    {
        for (int i = 0; i <matrix.size() ; i++){
            matrix[i][0] = 0;
        }
    }
}




vector <int>  generaterow(int row){
    long long ans = 1;
    vector <int> ansrow ;
    ansrow.push_back(ans);
    for (int i = 1 ; i<row ; i++){
        ans = ans*(row-i);
        ans =ans/i;
        ansrow.push_back(ans);
    }
    return ansrow;
    
}

vector <vector<int>> pascaltriangle(int row){
    vector <vector<int>> ansi;
    for(int i=1 ; i<=row ; i++){
        ansi.push_back(generaterow(i));

    }
    return ansi;

}


vector <int> next_permatuation(vector <int> &arr){
    int n =arr.size();
    int ind = -1;
    for(int i = n-2 ; i>=0 ; i++){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }


    if(ind ==-1){
        reverse(arr.begin(), arr.end());
        return;
    }


    for(int i =n-1 ; i >ind ; i++){
        if(arr[i] > arr[ind]){
            swap(arr[ind],arr[i]);
            break;
        }
    }
    reverse(arr.begin()+ind+1 , arr.end());
}

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    long long sum = 0;
    long long maxi = INT_MIN;
    for(int i =0 ; i<n ; i++){
        sum += nums[i];
        maxi = max(maxi , sum);
        if(sum < 0){
            sum = 0;
        }
        
    }
    return maxi;
        
}

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
