#include<iostream>
using namespace std;
class inventory_management
{
    int item_id;
    char item_name[25];
    float price;
    int qty;
public :
    void insert_inventory()
    {
        cout<<"Enter item id: ";
        cin>>item_id;
        cout<<"Enter item name: ";
        cin>>item_name;
        cout<<"Enter item price: ";
        cin>>price;
        cout<<"Enter item quantity: ";
        cin>>qty;

    }
    void add_stock()
    {
        int id,new_qty;
        x:cout<<"Enter item id(for adding a new stock): ";
        cin>>id;

        if(item_id==id)
        {
            cout<<"add a new quantity: ";
            cin>>new_qty;
            qty=qty+new_qty;
            cout<<qty<<endl;
        }
        else
        {
            cout<<"your id is invalid check again!!"<<endl;
            goto x;
        }


    }

    void sell_items()
    {
        int s_id,s_item;
        cout<<"Enter sell item id: ";
        cin>>s_id;
         cout<<"Enter number of sell item : ";
        cin>>s_item;

        qty=qty-s_item;
        cout<<qty<<endl;

    }


};

int main()
{
    inventory_management M[2];
    int i;
    for(i=0;i<2;i++)
    {
        M[i].insert_inventory();
    }
    for(i=0;i<2;i++)
    {
        M[i].add_stock();

    }
    for(i=0;i<2;i++)
    {
        M[i].sell_items();

    }

}
