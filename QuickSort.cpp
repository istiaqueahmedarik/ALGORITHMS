#include <bits/stdc++.h>
using namespace std;

vector<int> Quick(vector<int> v)
{
    if (v.size() <= 1)
        return v;
    vector<int> left, right;
    int pivot = rand() % v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (i == pivot)
            continue;
        if (v[i] >= v[pivot])
        {
            left.push_back(v[i]);
        }
        else
        {
            right.push_back(v[i]);
        }
    }
    vector<int> sortedVector, sortedLeft, sortedRight;
    sortedLeft = Quick(left);
    sortedRight = Quick(right);
    for (int i = 0; i < sortedLeft.size(); i++)
    {
        sortedVector.push_back(sortedLeft[i]);
    }
    sortedVector.push_back(v[pivot]);
    for (int i = 0; i < sortedRight.size(); i++)
    {
        sortedVector.push_back(sortedRight[i]);
    }
    return sortedVector;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = Quick(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}