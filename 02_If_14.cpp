#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
        string id;
        double score;
        char comprog;
        char calculus1;
        char calculus2;
        bool f1 = false;
};




int main(){

    int num = 2;
    vector<Students> student(num);

    for(int i = 0; i < num; i++){
        cin >> student[i].id >> student[i].score >> student[i].comprog >> student[i].calculus1 >> student[i].calculus2;
        if(student[i].comprog != 'A' || student[i].calculus1 > 'C' || student[i].calculus2 > 'C'){
            student[i].f1 = true;
        }
    }

    if(student[0].f1 && student[1].f1){
        cout << "None";
    }else if(student[0].f1){
        cout << student[1].id;
    }else if(student[1].f1){
        cout << student[0].id;
    }else{

        if(student[0].score > student[1].score)
        {
            cout << student[0].id;
        }
        else if(student[0].score < student[1].score)
        {
            cout << student[1].id;
        }
        else if(student[0].comprog > student[1].comprog)
        {
            cout << student[1].id;
        }
        else if(student[0].comprog < student[1].comprog)
        {
            cout << student[0].id;
        }
        else if(student[0].calculus1 > student[1].calculus1)
        {
            cout << student[1].id;
        }
        else if(student[0].calculus1 < student[1].calculus1)
        {
            cout << student[0].id;
        }
        else if(student[0].calculus2 > student[1].calculus2)
        {
            cout << student[1].id;
        }
        else if(student[0].calculus2 < student[1].calculus2)
        {
            cout << student[0].id;
        }else{
            cout << "Both";
        }
        

    }

    return 0;
}