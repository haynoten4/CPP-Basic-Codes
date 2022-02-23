#include <iostream>
using namespace std;
class Student;
class Student{
    public:
    //private:
    char Name[20];
    int Rollno;
    int Class;
    public:
    void setData(char name[20], int rollno, int CLass){

        Name = name;
        Rollno = rollno;
        Class = CLass;
        
    }
    
    /*void getData(){
        for (int i=0; i<sizeof(Name); i++){
            if (Name[i] == 'N'){
                cout<<"String is present";
                
            }
            else{
                cout<<"The word N is not present in here.";

            
            }*/
        // cout<<"Name:\t"<<Name<<"\n";
        // cout<<"Rollno:\t"<<Rollno<<"\n";
        // cout<<"Class:\t"<<Class<<"\n";
    
    


};
class Student2: public Student{
    public:

};
int main(){
    Student a;
    a.setData('Nauman', 12, 19);
    //a.getData();
    //a.Name;
    //Student2 b;
    //cout<<b.Name;
    cout<<a.Name;
}