/*
    Solution to the problem specified at https://www.hackerrank.com/challenges/pairs
    by : Rajeev Singh
*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/* Head ends here */

int pairs(vector < int > a,int k) {
    int ans=0,s=a.size(),l,r,m,key=1;
    sort(a.begin(),a.end());
    for(int i=0;i<s;i++)
    {
        l=key;r=s-1;
        while(l<=r)
            {
                m=(l+r)/2;
                if(a[m]-a[i]==k)
                {
                    ans++;
                    key=m+1;
                    break;
                }
                else
                {
                    if(a[m]-a[i]>k)
                        r=m-1;
                    else
                        l=m+1;
                }
            
            }
    }        
    return ans;
}

/* Tail starts here */
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
