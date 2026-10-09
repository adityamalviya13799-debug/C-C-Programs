#include<iostream>
using namespace std;
int main() {
//     char grade;
//     cout<<"enter your grade"<<endl;
//     cin>>grade;

//     switch(grade){
//     case 'A':cout << "your marks is 80 to 90" << endl;
//     break;
//     case 'B':cout << "your marks is 70 to 80" << endl;
//     break;
//     case 'C':cout << "your marks is 60 to 70" << endl;
//     break;
//     case 'D':cout << "your marks is 0 to 60" << endl;
//     }
//     return 0; 
// }


//program for week
char day;
cout<<"enter day"<<endl;
cin>>day;

switch(day){
    case '1': cout<<"sunday"<<endl;
    break;
    case '2': cout<<"monday"<<endl;
    break;
    case '3': cout<<"tuesday"<<endl;
    break;
    case '4': cout<<"wednesday"<<endl;
    break;
    case '5': cout<<"thursday"<<endl;
    break;
    case '6': cout<<"friday"<<endl;
    break;
    case '7': cout<<"saturday"<<endl;
}
return 0;
}