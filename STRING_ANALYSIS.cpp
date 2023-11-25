#include <iostream>

#include <cstdio>

#include<cstring>

#include<bits/stdc++.h> 

using namespace std;

void doSomething(string s)
{

int ucs = 0,  lcs = 0, digi = 0 ,oth = 0;


for(int i=0; i < static_cast<int>(s.size());i++) 

{
    if(isupper(s[i]))

{
ucs++;

}

else if(islower(s[i]))

{

lcs++;

}

else if(isdigit(s[i]))

{

digi++;

}

else

{

oth++;
}
}


double x = ucs+lcs+digi+oth;

cout<<setprecision(3)<<fixed;

double upperper = (ucs/x)*100;

double lowerper = (lcs/x)*100;

double digiper = (digi/x)*100;

double otherper = (oth/x)*100;

cout<<"Uppercase letters: "<<upperper<<"%"<<endl; 
cout<<"Lowercase letters: "<<lowerper<<"%"<<endl; 
cout<<"Digits: "<<digiper<<"%"<<endl;
cout<<"Other characters (symbols): "<<otherper<<"%"<<endl;

}

int main()
{
string s;

getline(cin,s); 

doSomething(s);

return 0;

}




