#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b,c,d;
    cin >> a >> b;
    cout << a << b;
    int ar[a][10000];
    int q[b][10000];
    int n,m;
        /* code */
        cin >> n;
        cout << n;
        for (int j = 0; j < a; j++)
        {
            /* code */
            for (int k = 0; k < n; k++)
            {
                /* code */
               cin >> ar[j][k]; 
            }
        }
        cin >> m;
        cout << m;
                for (int j = 0; j < a; j++)
        {
            /* code */
            cout << '\n';
            cout << n;
            for (int k = 0; k < n; k++)
            {
                /* code */
               cout << ar[j][k]; 
            }
        }
        cout << "done";
                for (int j = 0; j < b; j++)
        {
            /* code */
            for (int k = 0; k < b; k++)
            {
                /* code */
               cin >> q[j][k]; 
            }
        }
                for (int j = 0; j < b; j++)
        {
            cout << '\n';
            for (int k = 0; k < 2; k++)
            {
                /* code */
               cout << q[j][k]; 
            }
        }    
    
    return 0;
}
