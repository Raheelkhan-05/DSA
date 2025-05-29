#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef vector<int> vi;

void printvi(vi &v)
{
    cout<<"\nArray :\n";
    for(int i : v)
    {
        cout<<i<<" ";
    }
}

vi input_vector()
{
    int n;
    cout<<"\nEnter Size : ";
    cin>>n;
    vi v(n);
    cout<<"\nEnter Elements :\n";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    printvi(v);
    return v;
}

void linear_search(vi &v, int e)
{
    for(int i : v)
    {
        if(e == i) 
        {
            cout<<"\nElement Found...";
            return;
        }
    }
    cout<<"\nNot Element Found...";
}

void binary_search(vi &v, int e)
{
    int l = 0;
    int h = v.size() - 1;
    while(l <= h)
    {
        int mid = (l+h) / 2;
        if(v[mid] == e)
        {
            cout<<"\nElement Found at index "<<mid;
            return;
        }
        else if(e > v[mid]) l = mid + 1;
        else h = mid - 1;
    } 
    cout<<"\nElement Not Found...";
    return;
}

void count_frequency(vi &v)
{
    unordered_map<int, int> m;
    for(int i : v)
    {
        m[i]++;
    }

    for(const pair<int,int> &i : m)
    {
        cout<<"\n "<<i.first<<" : "<<i.second;
    }
    return;
}

void missing_num(vi &v){
    int sum = 0;
    int real = (v[v.size()-1] * (v[v.size()-1]+1)) / 2;
    for(int i : v) sum += i;
    cout<<"\nMissing Number : "<<(real - sum);
}

void unique_element(vector<int> &v)
{
    int r = v[0];
    for(int i=1; i<v.size(); i++)
    {
        r ^= v[i];
    }

    cout<<"\nUnique element : "<<r;
    
    return;
}

void kadane_algo(vector<int> &v)
{
    int r = INT_MIN;
    int m = 0;
    for(int i=0; i<v.size(); i++)
    {
        m+=v[i];
        r = max(r, m);
        if(m < 0) m = 0;
    }
    cout<<"\nResult : "<<r;
    return;
}

void prefix_sum(vector<int> &v)
{
    for(int i=1; i<v.size(); i++)
    {
        v[i] += v[i-1];
    }
    printvi(v);
}

void postfix_sum(vector<int> &v)
{
    for(int i = v.size()-1; i>=0; i--)
    {
        v[i-1] += v[i];
    }
    printvi(v);
}

void longest_Subarray_With_SumK(vector<int> &v)
{
    int left = 0, right = 0, sum = 0, maxLen = 0;
    int n = arr.size();

    while (right < n) {
        sum += arr[right];

        // Shrink window if sum > k
        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }

        // Check if we found a valid subarray
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }
    return;
}

int main()
{
    vi v = input_vector();

    // linear_search(v, 5);

    // binary_search(v, 5);

    // count_frequency(v);

    // missing_num(v);

    // unique_element(v);

    // kadane_algo(v);

    // prefix_sum(v);

    longest_Subarray_With_SumK(v);

    return 0;
}
