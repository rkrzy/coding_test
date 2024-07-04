//#include <iostream>
//#include <map>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int main(void)
//{
//    map<string,float> score;
//    score.insert({"A+",4.3});
//    score.insert({"A0",4.0});
//    score.insert({"A-",3.7});
//    score.insert({"B+",3.3});
//    score.insert({"B0",3.0});
//    score.insert({"B-",2.7});
//    score.insert({"C+",2.3});
//    score.insert({"C0",2.0});
//    score.insert({"C-",1.7});
//    score.insert({"D+",1.3});
//    score.insert({"D0",1.0});
//    score.insert({"D-",0.7});
//    score.insert({"F",0.0});
//    int N;
//    float number;
//    float result = 0.0;
//    cin>>N;
//    int total_credit = 0;
//    string name;
//    string credit;
//    string get_score;
//    for(int i =0;i<N;i++)
//    {
//        cin>>name>>credit>>get_score;
//        total_credit += stoi(credit);
//        number += (float)stoi(credit) * score[get_score];
//    }
//    result = number/total_credit;
//    result = round(result*100)/100.0;
//    cout<<fixed;
//    cout.precision(2);
//    cout<<result;
//}