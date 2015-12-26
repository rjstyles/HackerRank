#include <iostream>
using namespace std;
int main(){
    int t,n3,n5;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;n3=0;n5=0;
        int t=n;
        while(t>=0)
            {
               if(t%3==0)
                   {
                        n5=t;
                        n3=n-t;
                        break;
               }
                t-=5;
        }
        if(n3 || n5){
            for(int i=0;i<n5;i++)cout<<"5";
            for(int i=0;i<n3;i++)cout<<"3";
            cout<<endl;
        }
        else 
            cout<<"-1\n";
    }
    return 0;
}
