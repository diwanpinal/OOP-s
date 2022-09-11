#include <iostream>
using namespace std;
class Human{
    private:
        string name;
        int age;
        int weight;
    public:
          int getAge(int x){
             this->age=x ;
            
              cout<<age<<endl;
               return age;
          
          }
          void setWeight(int w){
              this->weight=w ;
              cout<<weight<<endl;
          }
    
};
class Male : public Human{
    public:
    int height;
     void emotionsOfMale(){
         cout<<"Males are taught to be tough !"<<endl;
     }
     void heightOfMale(int m){
          this->height=m;
              cout<<height<<endl;
         
     }
};
class Female : public Human{
    public:
    int height;
     void emotionsOfFemale(){
         cout<<"Females are  taught to be soft  !"<<endl;
     }
     void heightOfFemale(int f){
          this->height=f ;
              cout<<height<<endl;
         
     }
};

int main() {
    // Write C++ code
    Male object1;
    object1.emotionsOfMale();
    object1.setWeight(30);
    object1.getAge(20);
    object1.heightOfMale(64);
   
    Female object2;
    object2.emotionsOfFemale();
    object2.setWeight(30);
    object2.getAge(25);
   object2.heightOfFemale(64);
    
    
    return 0;
}