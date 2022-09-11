#include<iostream>
using namespace std;
class Student{
    private:
    int age;
    
     public:
         void set(int x){
            this-> age=x;
         }
         int get(){
             return age;
         
         } 
           

};
int main(){
  Student a;
  a.set(6);
  cout<<a.get();
  return 0;  
}