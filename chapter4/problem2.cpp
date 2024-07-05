#include<iostream>
#include <bits/stdc++.h>
#include "../../../../../msys64/mingw64/include/c++/12.2.0/bits/algorithmfwd.h"

int main()
{
    std::string str1 = "abcd";
    std::string str2 = "bcda";


    if(str1.size() != str2.size())
    {
        std::cout << "no" << std::endl;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < str1.size(); i++)
    {
        if(str1[i] != str2[i])
        {
            std::cout << "no" << std::endl;
        }

    }

    std::cout << "yes" << std::endl;


    return 0 ;
}