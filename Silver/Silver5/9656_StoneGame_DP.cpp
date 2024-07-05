//#include <iostream>
//
//using namespace std;
//
////돌이 1개면 상근이가 진다. = 0;
////돌이 2개면 찬영이가 진다. = 1;
//void game(int * arr,int N)
//{
//    arr[1] = 0;
//    arr[2] = 1;
//    arr[3] = 0;
//    for(int i = 4;i<=N;i++)
//    {
//        if(arr[i-1] == 0 || arr[i-3] == 0)
//        {
//            arr[i] = 1;
//        }
//        else{
//            arr[i] = 0;
//        }
//    }
//}
//
//int main(void)
//{
//    int N;
//    cin>>N;
//    int arr[N+1];
//    game(arr,N);
//    if(arr[N] == 1)
//    {
//        cout<<"SK";
//    }
//    else
//    {
//        cout<<"CY";
//    }
//}