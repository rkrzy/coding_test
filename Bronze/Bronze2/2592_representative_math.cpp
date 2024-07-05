//#include <iostream>
//
//using namespace std;
//int main(void)
//{
//    int arr[100];
//    for(int i =0;i<100;i++)
//    {
//        arr[i] = 0;
//    }
//    int average = 0;
//    int mode = 0;
//    int num1 = 0;
//    for(int i = 0;i<10;i++)
//    {
//        cin>>num1;
//        average += num1;
//        arr[num1/10] += 1;
//    }
//    for(int i = 1;i<100;i++)
//    {
//        if(arr[i] > mode)
//        {
//            mode = i;
//        }
//    }
//    cout<<average/10<<endl;
//    cout<<mode*10;
//}