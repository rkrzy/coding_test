//#include <iostream>
//
//using namespace std;
//struct grade{
//    int male;
//    int female;
//};
//int main(void)
//{
//    int N;//학생의 수
//    int K;//한방당 가능한 수
//    int S;
//    int Y;
//    cin>>N>>K;
//    int result = 0;
//    grade grades[7];
//    for(int i = 1;i<7;i++)
//    {
//        grades[i].female = 0;
//        grades[i].male = 0;
//    }
//    for(int i = 0;i<N;i++)
//    {
//        cin>>S>>Y;
//        if(S == 0)
//        {
//            grades[Y].female++;
//        }
//        else
//        {
//            grades[Y].male++;
//        }
//    }
//    for(int i = 1;i<=6;i++)
//    {
//        result += (grades[i].female/K)+(grades[i].male/K);
//        if(grades[i].female%K != 0)
//        {
//            result++;
//        }
//        if(grades[i].male%K != 0)
//        {
//            result++;
//        }
//    }
//    cout<<result;
//
//}