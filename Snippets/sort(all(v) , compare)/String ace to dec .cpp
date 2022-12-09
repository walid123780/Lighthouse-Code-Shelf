/*
 sort string of array acse to desc.
*/

bool compare(string &a, string &b)
{
    if(a.length() < b.length())
        return true;
    if(b.length() < a.length())
        return false;
    return a < b;
}
