#include<iostream>
using namespace std;
int main()
{
cout<<"hello welcome to Franks carpet cleaning service.";
int no_of_small_rooms{0};
int no_of_large_rooms{0};
cout<<"\nHow many small room would you like to clean ? ";
cin>>no_of_small_rooms;
cout<<"\nHow many large room would you like to clean ? ";
cin>>no_of_large_rooms;
 
 int price_per_small_room{250};
 int price_per_large_room{350};
 const double sales_tax{0.06};
 const int estimate_expire{30};
cout<<"\nEstimate for carpet cleaning service";
cout<<"\nprice per small room: rs"<<price_per_small_room;
cout<<"\nprice per large room: rs"<<price_per_large_room;
cout<<"\ncost:"<<no_of_small_rooms*price_per_small_room+no_of_large_rooms*price_per_large_room;

cout<<"\ncost rs: "<<(no_of_small_rooms*price_per_small_room)+(no_of_large_rooms*price_per_large_room);

return 0;
}
