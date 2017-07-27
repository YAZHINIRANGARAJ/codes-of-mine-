#include <iostream>
using namespace std;

int main()
{
    string str = "OOOOOOBBBB";
    char checkCharacter = 'O';
    char checkCharacter1 = 'B';
    char checkCharacter2= 'C';
    int count = 0;
    int count1= 0;
    int count2= 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    std::cout << "\n Number of " << checkCharacter << " = " << count;
     for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter1)
        {
            ++ count1;
        }
    }

    std::cout << "\n Number of " << checkCharacter1 << " = " << count1;
     for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter2)
        {
            ++ count2;
        }
    }

    std::cout << "\n Number of " << checkCharacter2 << " = " << count2;
   
   

    return 0;
}
