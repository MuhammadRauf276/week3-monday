#include <iostream>
using namespace std;

main(){
float user_megabytes;
float megabytes;
float tbits;
cout << "Enter your megabytes";
cin>>user_megabytes;
megabytes = user_megabytes*1;
tbits = (megabytes*1024*1024*8);
cout<<"Your bits is"<<tbits;
}
 
