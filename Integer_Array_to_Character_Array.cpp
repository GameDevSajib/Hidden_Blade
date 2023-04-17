//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){


     ll n;
     cin>>n;
     int arr[n+5];
     char crr[100];
     for(ll i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     int l = 0;
     for (int i = 0; i < n; i++)
     {
            int val = arr[i];
            int digits[10];
            int k = 0;
            while (val != 0)
            {
                digits[k++] = val % 10;
                val /= 10;
            }
            for (int j = k - 1; j >= 0; j--) {
                crr[l++] = digits[j] + '0';
            }
                crr[l++] = ' ';
     }
                crr[l - 1] = '\0';

            cout << crr << endl;

     return 0;
}
