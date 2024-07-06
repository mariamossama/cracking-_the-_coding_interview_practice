#include<iostream>
#include <bits/stdc++.h>
#include "../../../../../msys64/mingw64/include/c++/12.2.0/bits/algorithmfwd.h"

bool check2Strs(std::string str1 , std::string str2)
{
    if(str1.size() != str2.size())
    {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < str1.size(); i++)
    {

        if(str1[i] != str2[i])
        {
            return false;
        }

    }
    return true;
}

bool check2strs_v2(std::string str1 , std::string str2)
{
    if(str1.size() != str2.size())
    {
        return false;
    }

    bool s1[26] = {0};
    bool s2[26] = {0};

    for(int i = 0 ; i < str1.size() ; i++)
    {
        s1[str1[i]-'a'] = true;
        s2[str2[i]-'a'] = true;
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        if(s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::string str1 = "abcd";
    std::string str2 = "bcda";

    std::cout << check2Strs(str1,str2)<< std::endl;
    std::cout << check2strs_v2(str1,str2)<< std::endl;


    return 0 ;
}