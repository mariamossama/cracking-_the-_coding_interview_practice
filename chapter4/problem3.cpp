// Online C++ compiler to run C++ program online
#include <iostream>
std::string replaceSpaces(std::string str)
{
    char arr[str.size()];
    for(int i = 0 ; i < str.size() ; i++)
    {
        arr[i] = str[i];
    }
    std::string newStr = "";
    for(int i =0 ; i < str.size() ; i++)
    {
        if(newStr.size() == str.size())
        {
            break;
        }
        if(str[i] == ' ')
        {
            newStr = newStr + "%20";
        }
        else {
            newStr = newStr + str[i] ;
        }
        
        }

        return newStr;

}
int main() {
    std::string sen = "Mr John Smith    ";
   
    std::cout << replaceSpaces(sen);

    return 0;
}