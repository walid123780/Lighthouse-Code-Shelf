ll binaryexpoitr(ll x, ll y, ll M)
{
    ll res = 1 % M;
    x = x % M;
    while(y > 0)
    {
        if(y & 1)
            res = (res * x) % M;
        y = y>>1;
        x = (x*x) % M;
    }
    return res % M;
}

blog post : cp-algorithms.com/algebra/binary-exp.html
