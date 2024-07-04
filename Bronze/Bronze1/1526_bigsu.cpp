//#include <iostream>
//
//
//using namespace std;
//int main(void)
//{
//
//    int N; // 시험장의 수
//    cin>>N;
//    int student[N]; // 한 시험장의 응시자의 수
//    int B,C; // 총감독관이 감시 가능한 수, 부감독관이 감시 가능한 수.
//    long long result = 0;
//
//    for(int i =0;i<N;i++)
//    {
//        cin>>student[i];
//    }
//    cin>>B>>C;
//    for(int i =0;i<N;i++)
//    {
//        student[i] = student[i]-B;
//        result++;
//        if(student[i] > 0)
//        {
//            result += student[i]/C;
//            if(student[i] - C*(student[i]/C) > 0)
//            {
//                result++;
//            }
//        }
//    }
//    cout<<result;
//
//
//
//
//
//
//}