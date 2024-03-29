/*
Question: https://leetcode.com/problems/rotate-array/
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> arr, int k)
{
    vector<int> temp(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + k) % arr.size()] = arr[i];
    }

    arr = temp; // Copying temp array elements in arr array.  Time-Complexity O(n)

    return arr;
}

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}


int main()
{
    int size, k;
    cin >> size;
    vector<int> arr;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    cin >> k;
    vector<int> ans = rotate(arr, k);
    print(ans);

    return 0;
}

