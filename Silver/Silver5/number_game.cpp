//#include <iostream>
//#include <algorithm>
////이 문제는 푸는게 디게 오래 걸렸다 문제가 뭔지 알기가 힘들었다
////1. 처음에 class를 이용해서 풀려다가 자꾸 오류가 나서 해결을 못하였다.
////2. 다른 블로그의 글을 보면서 해결방안을 찾았다.
////3. 클래스를 안쓰고 해결하는걸 알수 있었다.
//using namespace std;
//
//int num_total(vector<int> vec)
//{
//    int max = 0;
//    int number = 0;
//    for(int i =0;i<5;i++)
//    {
//        for(int j = i+1;j<5;j++)
//        {
//            for(int a = j+1;a<5;a++)b
//            {
//                number = vec[i]+vec[j]+vec[a];
//                if(number%10 > max) {
//                    max = number%10;
//                }
//            }
//        }
//    }
//    return max;
//}
//int main(void)
//{
//    int N;//사람수
//    int result = 0;
//    cin>>N;
//    int num1;
//    vector<vector<int>> arr(N);
//    vector<int> max_peo;
//    int max_number = 0;
//    for(int i = 0;i<N;i++)
//    {
//        for(int j = 0;j<5;j++)
//        {
//            cin>>num1;
//            arr[i].push_back(num1);
//        }
//        max_peo.push_back(num_total(arr[i]));
//        max_number = max(max_number,max_peo[i]);
//    }
//    for(int i =0;i<N;i++)
//    {
//        if(max_peo[i] == max_number)
//        {
//            result = i+1;
//        }
//    }
//    cout<<result;
//
//}