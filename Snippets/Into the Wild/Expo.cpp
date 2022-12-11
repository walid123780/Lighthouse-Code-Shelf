ll expo(ll a, ll b)
{
    if(b == 0) return 1;
    ll x ;
    if(b & 1)
    {
        x = expo(a, b-1);
        return x * a;
    }
    else
    {
        x = expo(a, b/ 2);
        return x*x;
    }
}
