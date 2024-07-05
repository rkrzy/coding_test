#include <iostream>
#include <string>

using namespace std;

struct chance
{
    int A;
    int B;
};
int main(void)
{
    int K;
    cin>>K;
    chance str[K+1];
    str[0].A = 1;
    str[0].B = 0;
    str[1].A = 0;
    str[1].B = 1;
    for(int i = 2;i<=K;i++)
    {
        str[i].A = str[i-2].A+str[i-1].A;
        str[i].B = str[i-2].B+str[i-1].B;
    }

    cout<<str[K].A<<" "<<str[K].B;

}