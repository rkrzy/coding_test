//#include <iostream>
//
//using namespace std;
//int main(void)
//{
//    int L;
//    int P;
//    int V;
//    cin>>L>>P>>V;
//    int chance = 1;
//    while(L!=0 && P!=0 && V!=0)
//    {
//        int num1 = V/P;
//        int num2 = V-(num1*P);
//        if(num2 > L)
//        {
//            num2 = L;
//        }
//        cout<<"Case "<<chance<<": "<<(num1*L) + num2<<endl;
//        cin>>L>>P>>V;
//        chance++;
//    }
//}