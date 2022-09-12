#include<iostream>

using namespace std;

class Data{
	public : 
	int hotel_id,hotel_establish_year,hotel_staff_quantity,hotel_room_quantity;
	char hotel_name[100],hotel_type[100],hotel_location[100],hotel_rating[10];
	
};

main(){
	
	Data obj[100];
	int i,n,k=1;
	
	cout<<"Enter How Many No. Hotel Details You Have Write : ";
	cin>>i;
	
	for(n=0 ; n<i ; n++){
		cout<<endl<<"Enter Detail Of Hotel "<<k<<" :"<<endl;
		
		cout<<endl<<"Enter Type OF The Place(Hotel/Motel) : ";
		cin>>obj[n].hotel_type;
		cout<<endl<<"Enter Hotel ID : ";
		cin>>obj[n].hotel_id;
		cout<<endl<<"Enter Name Of Hotel : ";
		cin>>obj[n].hotel_name;
		cout<<endl<<"Enter Rating Of Hotel Using '*' : ";
		cin>>obj[n].hotel_rating;
		cout<<endl<<"Enter Location Of Hotel(City Name) : ";
		cin>>obj[n].hotel_location;
		cout<<endl<<"Enter Year Of Establishment Of Hotel : ";
		cin>>obj[n].hotel_establish_year;
		cout<<endl<<"Enter Quantity Of Working Staff : ";
		cin>>obj[n].hotel_staff_quantity;
		cout<<endl<<"Enter Numbers Of Room In The Hotel : ";
		cin>>obj[n].hotel_room_quantity;
		cout<<endl;
		k++;
		
	} 
	for(n=0 ; n<i ; n++){
		cout<<endl;
		cout<<endl<<"*************** Details Of Hotel "<<k<<" ***************";
		cout<<endl<<" Type OF The Place(Hotel/Motel) : "<<obj[n].hotel_type;
		cout<<endl<<" Hotel ID                       : "<<obj[n].hotel_id;
		cout<<endl<<" Name Of Hotel                  : "<<obj[n].hotel_name;
		cout<<endl<<" Location Of Hotel(City Name)   : "<<obj[n].hotel_location;
		cout<<endl<<"Enter Rating Of Hotel Using '*' : "<<obj[n].hotel_rating;
		cout<<endl<<" Year Of Establishment Of Hotel : "<<obj[n].hotel_establish_year;
		cout<<endl<<" Quantity Of Working Staff      : "<<obj[n].hotel_staff_quantity;
		cout<<endl<<" Numbers Of Room In The Hotel   : "<<obj[n].hotel_room_quantity;
		cout<<endl<<"******************** Thank You ********************";
		cout<<endl;
		k++;
			
		
	}
}
