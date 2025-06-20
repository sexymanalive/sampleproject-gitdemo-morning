#include<iostream> 
using namespace std; 

class Teacher{
   private: 
        string uuid; 
        string teacherName; 
        
   public:
         Teacher(string uuid, string teacherName){
            this-> uuid = uuid; 
            this-> teacherName = teacherName; 
        }
};
int main(){
    system("clear"); 
    cout<<"Teacher Demo Class "<<endl; 
    return 0; 
}