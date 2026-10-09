// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the number :";
// cin>>n;
// int num = 1;
// while(num<=n){
//     cout<<num<<endl;
//     num=num+2;
// }

//     return 0;
// }

// print a serie of odd number upto n , user.
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"enter a number :";
//      cin>>n;
//      int num=1;
//      while(num<=n){
//          cout<<num<<endl;
//          num=num+2;
//      }
//      return 0;
//  }

// sum of number from 1ton
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter value :";
//     cin >> n;
//     int i = 1;
//     int sum = 0;
//     while (i <= n)
//     {
//         if (i % 2 != 0)
//         {

//             sum += i;
//         }
//         i++;
//     }
//     cout << sum;

//     return 0;
// }

// find the sum of even number up to n using for loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter  number :";
//     cin >> n;
//     int i = 1;
//     int evensum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             evensum += i;
//         }
//     }
//     cout << evensum;
//     return 0;
// }

//practice time
#include<iostrem>
using namespace std;
int main(){

    int n;
    cout<<"enter a value of n :";
    cin>>n;
    int i=1;
    int sum=0;
    for(int i=1;i<=n;i++);
     if(i%2==0){
        sum+=i;
     
     }
     cout<<sum; 
    return 0;
}