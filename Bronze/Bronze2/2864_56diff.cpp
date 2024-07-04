//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void changer(string * str, char ch,char ch2)
//{
//    for(int i = 0; i<str->length();i++)
//    {
//        if(str->at(i) == ch)
//        {
//            str->at(i) = ch2;
//        }
//    }
//}
//
//int main(void)
//{
//    string num1;
//    string num2;
//    cin>>num1>>num2;
//    int arr[3];
//    arr[2] = stoi(num1)+ stoi(num2);
//    changer(&num1,'5','6');
//    changer(&num2,'5','6');
//    arr[1] = stoi(num1)+ stoi(num2);
//    changer(&num1,'6','5');
//    changer(&num2,'6','5');
//    arr[0] = stoi(num1)+ stoi(num2);
//    sort(arr,arr+3);
//
//    cout<<arr[0]<<" "<<arr[2];
//
//}