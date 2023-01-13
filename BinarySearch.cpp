#include <stdio.h>
int binary(vector<int> arr, int l, int r, int i)
{
    if (i > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == i)
    {
        if (mid == 0)
        {
            return mid;
        }
        else if (arr[mid - 1] != i)
        {
            return mid;
        }
        else
        {
            return binary(arr, l, mid - 1, i);
        }
    }

    if (mid > i)
        return binary(arr, l, mid - 1, i);
    return binary(arr, mid + 1, r, i);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    cout << binary(arr, 0, n - 1, x);
}