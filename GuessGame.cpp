#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(0)^clock());
    int number=(rand()%100)+1;
    int guessing=0;
    do
    {
     cout<<"Guess any number between 1 to 100"<<endl;
     cin>>guessing;
     if(guessing>number)
     cout<<"Guessing is too high"<<endl;
     else if(guessing<number)
     cout<<"Guessing is too low"<<endl;
     else
     cout<<"You WON THE GAME!!"<<endl;
    } while (guessing!=number);
    
    return 0;
    
}
