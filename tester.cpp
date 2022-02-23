#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    string word;
    word = "Ali";
    cout<<*typeid(word).name();
    return 0;
}