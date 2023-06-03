#include <bits/stdc++.h>
using namespace std;

class customSort
{

public:
    char c;
    int cnt;

    // customSort(char c, int cnt){
    //     this->c= c;
    //     this->cnt=cnt;
    // }
};

bool cmp(customSort s1, customSort s2)
{
    if (s1.cnt > s2.cnt)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    customSort frq[26];

    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i + 97);
        frq[i].cnt = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;

        for (int i = 0; i < 26; i++)
        {
            if (frq[i].c == a)
            {
                frq[i].cnt++;
            }
        }
    }

    sort(frq, frq + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < frq[i].cnt; j++)
        {
            if (frq[i].cnt > 0)
            {
                cout << frq[i].c;
            }
        }
    }

    return 0;
}