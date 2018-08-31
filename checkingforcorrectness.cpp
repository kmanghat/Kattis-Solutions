#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

//recursive modular exponentiation
int modularexponentitation(ll base, ll exponent, ll result)
{
    if(exponent <= 0)
        return result;
        
    if(exponent % 2 == 1)
    {
        result = (result * base) % 10000;
    }
    
    exponent = exponent / 2;
    base = (base * base) % 10000;
    
    return modularexponentitation(base,exponent,result);
}

//iterative modular exponentiation
int power(ll a, ll b)
{
    int result = 1;
    a = a % 10000;
    while(b > 0)
    {
        if(b % 2 == 1)
        {
            result = (result * a) % 10000;
        }
        
        b = b / 2;
        a = (a*a) % 10000;
    }
    
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod  = 10000;
    ll n1,n2;
    char op;
    
    while( cin >> n1 )
    {
        cin >> op;
        cin >> n2;
        
        if(op == '+')
        {
            cout << (n1 + n2) % mod <<endl;
        }
        
        if( op == '*')
        {
            cout << (n1 % mod) * (n2 % mod) % mod<<endl;
        }
        
        if( op == '^')
        {  
            n1 = n1%10000;
            int result = modularexponentitation(n1, n2, 1);
            cout << result << endl;
        }   
    }


    return 0;
}

