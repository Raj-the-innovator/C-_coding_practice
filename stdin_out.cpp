#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int a[5];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        //cout << a[i];
    }   
    for (int j=n-1; j>=0; j--)
    {
        cout << a[j];
        cout << " ";
    }
    return 0;
}