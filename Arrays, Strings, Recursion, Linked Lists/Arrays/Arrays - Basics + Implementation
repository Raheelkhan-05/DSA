#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)


void printvi(vector<int> &vi)
{
    cout<<"\nVector : \n";
    for(int i=0; i<vi.size(); i++)
    {
        cout<<vi[i]<<" ";
    }
    return;
}

vector<int> input_vector()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    if (n > 0)
        cout << "Enter Elements : \n";
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }

    printvi(v);

    return v;
}

void min_max(vector<int> &vi)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i : vi)
    {
        if(i < mn) mn = i;
        if(i > mx) mx = i;
    }
    cout<<"\nMin : "<<mn<<", Max : "<<mx;
}

void reverse(vector<int> &vi)
{
    for(int i=0; i<(vi.size()/2); i++)
    {
        swap(vi[i], vi[vi.size()-i-1]);
    }
    printvi(vi);
}

void left_rotate_d(vector<int> &vi, int d)
{
    d %= vi.size();
    // for(int i=0; i<d; i++)
    // {
    //     int t = vi[vi.size()-1];
    //     for(int i=vi.size()-1; i>0; i--)
    //     {
    //         vi[i] = vi[i-1];
    //     }
    //     vi[0] = t;
    // }

    d = vi.size() - d; // For Left Rotation

    reverse(vi.begin(), vi.begin() + d);
    reverse(vi.begin() + d, vi.end());
    reverse(vi.begin(), vi.end());

    printvi(vi);
}

void check_sorted(vector<int> &v)
{
    bool asc = true;
    bool dsc = true;
    
    for(int i=1; i<v.size(); i++)
    {
        //ascending
        if(v[i-1] > v[i]) asc = false;

        //descending
        if(v[i-1] < v[i]) dsc = false;
    }

    if(asc || dsc) cout<<"\nArray is Sorted...";
    else cout<<"\n Array is not sorted...";
}

void remove_duplicates(vector<int> &v)
{
    int p1 = 0;
    int p2 = 1;
    while(p2<v.size())
    {
        if(v[p1] == v[p2]) p2++;
        else 
        {
            p1++;
            v[p1] = v[p2];            
        }
    }

    v.erase(v.begin() + p1 + 1, v.end());
    printvi(v);
}

void second_largest_smallest(vector<int> &v)
{
    int l1 = INT_MIN;
    int l2 = INT_MIN;

    int s1 = INT_MAX;
    int s2 = INT_MAX;
    for(int i : v)
    {
        //largest
        if(i > l1)
        {
            l2 = l1;
            l1 = i;
        }
        else if(i > l2)
        {
            l2 = i;
        }

        //smallest
        if(i < s1)
        {
            s2 = s1;
            s1 = i;
        }
        else if(i < s2)
        {
            s2 = i;
        }
    }
    cout<<"\nSecond Largest : "<<l2;
    cout<<"\nSecond Smallest : "<<s2;
}

void move_zero_end(vector<int> &v)
{
    int p1 = 0, p2 = 1;
    while (v[p1] != 0) 
    {
        p1++;
        p2++;
    }
    while(p2 < v.size())
    {
        if(v[p2] != 0) v[p1++] = v[p2];
        p2++;
    }
    while(p1<v.size()) v[p1++] = 0;
    printvi(v);
}

int main()
{
    vector<int> vi = input_vector();

    // min_max(vi);

    // reverse(vi);

    // left_rotate_d(vi, 4);

    // check_sorted(vi);

    // remove_duplicates(vi);

    // second_largest_smallest(vi);   
    
    move_zero_end(vi);

    return 0;
}
