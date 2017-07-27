#include<iostream>
using namespace std;
int main()
{
int n=100;
    float SS,s,x,p,rem,rem1,SS1;
    string a;
    std::cout<<"\n Enter the mobile status";
    cin>>a;
    char checkCharacter = 'O';
    char checkCharacter1 = 'B';
    char checkCharacter2= 'C';
    int count = 0;
    int count1= 0;
    int count2= 0;
    for (int i = 0; i < sizeof(a); i++)
    {
    if (a[i] == checkCharacter)
{
++ count;
}
}
std::cout << "\n Number of " << checkCharacter << " = " << count;
for (int i = 0; i < sizeof(a); i++)
{
if (a[i] == checkCharacter1)
{
++ count1;
}
}
std::cout << "\n Number of " << checkCharacter1 << " = " << count1;
for (int i = 0; i < sizeof(a); i++)
{
if (a[i] == checkCharacter2)
{
++ count2;
}
}
std::cout << "\n Number of " << checkCharacter2 << " = " << count2;
if(count>=1)
{
    s=count*1;
    SS=100-s;
}
SS1=SS;
while(count1>=1)
{
   rem1=SS1/10;
            if(rem1<2)
            {
                rem1=4;
            }
            else
            {
                rem1=2*rem1;
            }
            SS=SS-rem1;
            SS1=100-SS;
            count1--;
}

std::cout<<"\n Charge is"<<SS;



return 0;
}


