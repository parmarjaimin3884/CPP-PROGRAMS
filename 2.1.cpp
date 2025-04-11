#include<iostream>
using namespace std;
class plot_data
{
    int l;
    int w,area,parameter;
public :
    void add_data()
    {
        cout<<"Enter the length :";
        cin>>l;
        cout<<"Enter the width :";
        cin>>w;
        area=l*w;
        parameter=2*(l+w);
        cout<<"The Area is : "<<area<<endl;
        cout<<"The parameter is  "<<parameter<<endl;
    }

    void update_data()
    {
        cout<<"Enter the length :";
        cin>>l;
        cout<<"Enter the width :";
        cin>>w;
        area=l*w;
        parameter=2*(l+w);
        cout<<"The Area is : "<<area<<endl;
        cout<<"The parameter is  "<<parameter<<endl;
    }
    void display_data()
    {
        cout<<"The plot lenght is "<<l<<endl;
        cout <<"The plot  width os "<<w<<endl;
        cout <<"The Aera is "<<area<<endl;
        cout <<"The parameter is "<<parameter;
    }

};



int main()
{

    plot_data p[25];
    int choice,c=0,num_plot,i;

next :
    cout<<"1.Add data "<<endl<<"2.Update Data "<<endl<<"3. Display Data"<<endl;
    cout<<"Enter the choice :";
    cin>>choice;
    switch(choice)
    {
    case 1:
        p[c].add_data();
        c++;
        break;
    case 2:
        cout<<"Enter the plot number  :";
        cin>>num_plot;
        if(num_plot<=c)
        {
            p[num_plot-1].update_data();
        }
        else
        {
            cout<<"The total plot is :"<<c;
        }
        break;
    case 3 :
    {
        for( i=0; i<c; i++)
        {
            p[i].display_data();
        }
        break;
    }
    default :
    {
        goto d;
        break;
    }

    }
    goto next;

   d: return 0;

}
