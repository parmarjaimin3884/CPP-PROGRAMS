#include<iostream>
using namespace std;

class celcius{
  float temp;

  public:
  void insert_data(){
    cout<<"enter a temprature: ";
    cin>>temp;
  }

  void convert_c_to_f(){
     cout<<"celcius temprature:"<<temp<<endl;
     temp = (temp*(9/5))+32;
     cout<<"feranhit temprature:"<<temp<<endl;
  }

  float get_celcius(){
    return temp;
  }
};

class fahrenhit{
   float t;

   public:
   void get_data(){
     cout<<"enter a feranhit value:";
     cin>>t;
   }

   void convert_f_to_c(){
     cout<<"feranhit temprature:"<<t<<endl;
     t=((t-32)*(5/9));
     cout<<"celcius temprature:"<<t<<endl;
   }

};

int main(){
   celcius c;
   fahrenhit f;
  n: cout<<"press 1 celcius"<<endl<<"press 2 feranhit"<<endl;
   int choice;
   cout<<"enter your choice:";
   cin>>choice;
   switch(choice){
     case 1:
     {  c.insert_data();

        c.convert_c_to_f();
        break;
     }

     case 2:
     { f.get_data();

       f.convert_f_to_c();
       break;
     }

     default:
     {  goto e;
        break;
     }

   }
   goto n;
  e: return 0;
}
