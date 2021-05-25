#include <bits/stdc++.h>
        #include <iostream>
        using namespace std ;
        vector<int> dp ;
        int f(int n,int a,int b,int c){
            if (n==0 ) return 0 ;
            if (n<0) return INT_MIN ;
            if (dp[n]!=-1) return dp[n] ;
            int o1 = 1+f(n-a,a,b,c) ;
            int o2 = 1+f(n-b,a,b,c) ;
            int o3 = 1+f(n-c,a,b,c) ;
            return dp[n] = max(max(o1,o2),o3) ;
        }
        void solve (){
           int n,a,b,c ;
           cin>>n>>a>>b>>c ;
           dp = vector<int>(n+1,-1) ;
           cout<<f(n,a,b,c) ;
 
        }
        int main(){
            int t =1 ;
        // cin>>t ;
            while (t--){
                solve() ;
            }
            return 0 ;
        } 