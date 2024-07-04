#include <iostream>

using namespace std;
int chance = 1;

void game(int N)
{
    if(N>0)
    {
        game(N-1);//돌을 하나만 가져갈 경우
        game(N-3);//돌을 세개씩 가져갈 경우
    }

}

int main(void)
{
    int N;

    if(chance %2 == 1)
    {
        cout<<"SK";
    }
    else
    {
        cout<<"CY";
    }
}