#include <iostream>
using namespace std;

main(){
float bits = 8;
float bytes = 1024 ;
float kilobytes = 1024;
float user_megabytes;
float megabytes;
float tbits;
cout << "Enter your megabytes";
cin>>user_megabytes;
megabytes = user_megabytes*1;
tbits = (megabytes*kilobytes*bytes*bits);
cout<<"Your bits is"<<tbits;
}
 
