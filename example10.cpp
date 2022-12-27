#include <iostream>
using namespace std;

main(){
string name;
float matric;
float matrics =1100;
float intermediate;
float intermediates =1100;
float Ecats =400;
float Ecat;
float aggregate;
cout<<"Enter Your name is";
cin >>name;
cout << "Enter your Matric marks";
cin >>matric;
cout << "Enter your fsc marks";
cin>>intermediate;
cout << "Enter your Ecat marks";
cin>>Ecat;
aggregate=(40*matric/matrics)+(50*intermediate/intermediates)+(10*Ecat/Ecats);
cout<<"Your Aggregate is :"<<aggregate;
}
