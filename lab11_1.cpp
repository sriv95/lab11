#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string i;
    cout << "Press Enter 3 times to reveal your future.";
    string grades[] = {"A","B+","B","C+","C","D+","D","F","W"};
    getline(cin,i);
    getline(cin,i);
    getline(cin,i);
    srand(time(0));
    i = grades[rand()%9];
    cout << "You will get "<< i <<" in this 261102.";
    return 0;
}