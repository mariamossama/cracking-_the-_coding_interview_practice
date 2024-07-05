#include<iostream>
#include <string>
#include<vector>

bool isUniqueStr(const std::string str)
{
    if(str.size() > 128 )
    {
        return false ;
    }

    bool charArray[128] = {false} ;
    for(char c : str)
    {
        int value = c; //get the ascii value
        if(!charArray[value])
            charArray[value] = true;
        else 
            return false ;
    }

    return true;
}
int main()
{
    std::string str = "abcdeb";

    std::cout << isUniqueStr(str) << std::endl;
    
    return 0 ;
}