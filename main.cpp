#include<iostream>
using namespace std;

int main()
{
    int i,y,z;
    int a[5];
    bool g=0;
    cout<<"Hello Mrs Sajedi , it is my Project"<<endl;
    for(i=0;i<5;i++){
     cout<<"Enter Number "<<i+1<<" = ";
     cin>>a[i];}/*halgheyeh daryaft adad arayeh*/
     cout<<"Done"<<endl;
    for( ; ; ){/*halgheye binahayat daryaft adad barayeh search*/
     cout<<"Enter a Number to Search(enter 0 for stop) = ";
     cin>>y;
     if(y==0){break;}/*shart khatemeye barnameh*/
     for(z=0;z<5;z++){/*halgheyeh azmayesh adad , agar adad dar arayeh vojod dashteh bashad meghdar motagheyer (g) az gens (Bool) be 1 taghir miabad.*/
     if(y==a[z]){g = 1;break;}
     else{g = 0;}}
if(g == 1){cout<<"Found"<<endl;}/*agar g=1 bashad be in mana ast ke dar marhaleh ye ghabl dar arayeh vojod dashteh ast.*/
else{cout<<"Not Found"<<endl;}

}
cout<<"The Program is over !";
return 0;
}
