#include<bits/stdc++.h>
using namespace std;



class Solution 
{
        public:
        int fib(int n)
        {
                if (n == 1) return 1;
                if (n == 2) return 1;

                int a=1, b=1; 
                int c;

                for(int i=3; i<=n; i++)
                {
                        c = a+b;
                        a=b;
                        b=c;
                }
                return b;
                
        }
};
int main()
{
        int t;
        cout<<"\n Enter the number of test cases = ";
        cin>> t;
        while(t--)
        {
                int n;
                cout<<"\n enter the value of n = ";
                cin>> n;
                Solution ob;
                cout<<"\n the value at "<< n <<"th place is = "<< ob.fib(n);
        }
        return 0;
       
}
