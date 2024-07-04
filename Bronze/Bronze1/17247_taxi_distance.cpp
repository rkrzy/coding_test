//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(void)
//{
//    int N;
//    int M;
//    cin>>N>>M;
//    int arr[N][M];
//    int st_x,st_y;
//    int en_x,en_y;
//    int count = 0;
//    for(int i = 0;i<N;i++)
//    {
//        for(int j = 0;j<M;j++)
//        {
//            cin>>arr[i][j];
//            if(arr[i][j] == 1 )
//            {
//                if(count == 0)
//                {
//                    st_x = i;
//                    st_y = j;
//                    count++;
//                }
//                else
//                {
//                    en_x = i;
//                    en_y = j;
//                    break;
//                }
//            }
//        }
//    }
//    cout<<abs(st_x-en_x)+abs(st_y-en_y);
//}