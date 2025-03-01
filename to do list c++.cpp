#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
int main(){
    vector<string> toDoList;
    string task;

    cout << "Welcome to the to-Do List!" << endl;

    while (true){
        cout << "Enter a task or 'q'to quit: ";
        getline(cin, task);

        if (task == "q") {
            break;
        }

        toDoList.push_back(task);
        cout <<"Task added!"<<endl;
    }
    cout <<"Your To-Do List:" <<endl;
    for(int i = 0; i < toDoList.size(); i++){
        cout << i+1 << ". " <<toDoList[i]<< endl;
    }
    return 0;
}