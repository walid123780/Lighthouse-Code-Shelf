void spf_precal()
{
    for(ll i = 2; i * i <= M; i++)
    {
        if(!f[i])
        {
            spf[i] = i;
            for(ll j = i * i ; j <= M ; j += i)
            {
                f[j] = true;
                if(!spf[j]) spf[j] = i;
            }
        }
    }
    for(ll i = 2; i <= M; i++)
    {
        if(spf[i] == 0) spf[i] = i;
    }
}
