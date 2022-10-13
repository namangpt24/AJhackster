#include <bits/stdc++.h>
#define endl "\n"
#define inf INT_MAX
#define ll long long
#define pb push_back
#define mp make_pair
#define vint vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define fo(i,n) for(ll i=0;i<n;i++)
#define f(i,a,b,c) for(ll i=a;i<b;i+=c)
#define fe(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define M 1000000007
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
 
ll power(ll a,ll b)
{
    ll anss=1;
    while(b)
    {
        if(b&1)
        {
            anss=(anss*a);
        }
        a=(a*a);
        b=b>>1;
    }
    return anss;
}
 
// const ll N=(2e9);
// ll lcm(ll a,ll b)
// {
//     return (a*b)/gcd(a,b);
// }
 
ll fact(ll n)
{
    if(n==0)
    {
        return 1;
    }
    return (n*fact(n-1))%998244353;
}
 
// ll calc(vector<ll>v)
// {
//     ll n=v.size();
//     sort(v.begin(),v.end());
//     ll ans=0;
//     fo(i,n)
//     {
//         ans+=(abs(v[i]-v[n/2]));
//     }
//     return ans;
// }
 
// vll primes;
// void sieve(ll n)
// {
//     vll check(n+1,1);
//     check[0]=check[1]=0;
//     for(ll i=2;i<=n;i++)
//     {
//         if(check[i]==1)
//         {
//         for(ll j=i*i;j<=n;j+=i)
//         {
//             check[j]=0;
            
//         }
//         primes.pb(i);
//         }
        
//     }
    
// }
 
// bool isprime(ll x)
// {
//     if(x==1)
//     {
//         return false;
//     }
//     for(auto it:primes)
//     {
//         if(it*it>x)
//         {
//             break;
//         }
//         if(x%it==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
 

// int parent[N];
// int sizes[N];
 
// void make(int x)
// {
//     parent[x]=x;
//     sizes[x]=1;
// }
// int find(int x)
// {
//     if(parent[x]==x)
//     {
//         return x;
//     }
//     return parent[x]=find(parent[x]);
// }
 
// void unionop(int a,int b)
// {
//     int f=find(a);
//     int s=find(b);
//     if(f!=s)
//     {
//         if(sizes[f]<sizes[s])
//         {
//             swap(f,s);
//         }
//         parent[s]=f;
//         sizes[f]+=sizes[s];
//     }
// }
 
ll stbt(ll x)
{
    ll cnt=0;
    while(x)
    {
        x=x&(x-1);
        cnt++;
    }
    return cnt;
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
const int N= 5e5 +5;

// vector<int>pre;
// void precomp()
// {
//     for(int i=1;i<=35;i++)
//     {
//         ll p=power(2,i);
//         pre.push_back(p-1);
//     }
// }
// vector<int>euler;
// vector<int>intime;
// vector<int>outime;
// vector<int>adj[100005];
// vector<int>vis(100005,0);
// int cnt=0;


void solve()
{
    int n;
    cin>>n;
    vll v(n);
    fo(i,n)
    {
        cin>>v[i];
    }
    int moves=0;
    if(n%2==0)
    {
        moves=n/2;
    }
    else{
        moves=(n/2 +1);
    }
    int tev=0;
    int tod=0;
    fo(i,n)
    {
        if(v[i]%2==0)
        {
            tev++;
        }
        else{
            tod++;
        }
    }
    int curr=moves;
    bool ch=false;
    while(curr>=0)
    {
        int ev=curr;
        int od=moves-curr;
        int rev=2*ev -1;
        int rod=2*od;
        if(tev>=rev && tod>=rod)
        {
            ch=true;
            break;
        }
        rev=2*ev;
        rod=2*od -1;
        if(tev>=rev && tod>=rod)
        {
            ch=true;
            break;
        }
        curr-=2;
    }
    if(ch)
    {
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }



}


 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin>>t;
    
    while(t--)
    {
        
        solve();
    }
}
