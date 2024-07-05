//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//int main(void)
//{
//    cout<<fixed;
//    cout.precision(2);
//    double result = 0;
//    string ch ="";
//    int T;
//    cin>>T;
//    while(getchar() != '\n');
//    for(int i =0;i<T;i++)
//    {
//        string str1;
//        getline(cin,str1);
//        stringstream ss(str1);
//        ss.str(str1);
//        while(ss>>ch)
//        {
//            if(ch == "@")
//            {
//                result *= 3;
//            }
//            else if(ch == "%")
//            {
//                result += 5;
//            }
//            else if(ch == "#")
//            {
//                result -=7;
//            }
//            else
//            {
//                result = stod(ch);
//            }
//        }
//        cout<<result<<endl;
//    }
//
//}