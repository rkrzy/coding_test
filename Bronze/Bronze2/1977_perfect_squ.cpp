//#include <iostream>
//
//using namespace std;
//int main(void)
//{
//    int M;
//    int N;
//    cin>>M>>N;
//    int result = 0;
//    int num = 1;
//    int min = -1;
//    int count = 0;
//    while(num * num <= N)
//    {
//        if(num * num >=M && num * num <= N)
//        {
//               if(count == 0)
//               {
//                   min = num * num;
//                   result += num * num;
//                   count++;
//               }
//               else
//               {
//                   result += num * num;
//               }
//        }
//        num++;
//    }
//    if(min != -1)
//    cout<<result<<endl;
//    cout<<min;
//
//}