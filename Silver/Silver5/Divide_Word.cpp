//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main(void)
//{
//    string str;
//    cin>>str;
//    vector<int> vec;
//    int point = 0;
//    int first = 0;
//    int chance = 0;
//    int len = str.length();
//    string ans = "";
//    for(int i = 1;i<len - 2;i++)
//    {
//        for(int j = i+1;j<len-i-1;i++)
//        {
//            string a = str.substr(0,i);
//            string b = str.substr(i,j);
//            string c = str.substr(i+j);
//
//            reverse(a.begin(),a.end());
//            reverse(b.begin(),b.end());
//            reverse(c.begin(),c.end());
//
//            if(ans == ""){
//                ans = a+b+c;
//            }
//            else if(ans > a+b+c)
//            {
//                ans = a+b+c;
//            }
//        }
//    }
//    cout<<ans;
//
//}