/*


sort it asc-desc-endingly,
where the odd-indexed characters will be compared ascendingly,
and the even-indexed characters will be compared descendingly.


*/


bool compare(pair<string,int> &a, pair<string,int>&b)
{
    int id = 0;
    for(int i = 0 ; i < m ; i++)
    {
        if(a.first[i] != b.first[i])
        {
            id = i;
            break;
        }
    }
    if(id % 2 == 0) return a.first[id] < b.first[id];
    else return a.first[id] > b.first[id];
}
