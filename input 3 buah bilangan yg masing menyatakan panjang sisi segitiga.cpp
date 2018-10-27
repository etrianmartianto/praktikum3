#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

cout<<"masukan sisi segitiga1: ";

cin>>a;

cout<<"masukan sisi segitiga2: ";

cin>>b;

cout<<"masukan sisi segitiga3: ";

cin>>c;

if (a==b==c)
    {cout<<("segitiga ini adalah segitiga sama sisi\n");}

if(a==b)
if(a!=c)
    {cout<<("segitiga ini adalah segitiga sama kaki\n");}

if(a==c)
if(b!=c)
    {cout<<("segitiga ini adalah segitiga sama kaki\n");}

if(a!=c)
if(b==c)
    {cout<<("segitiga ini adalah segitiga sama kaki\n");}

if(a!=b)
if(a!=c)
if(b!=c)
    {cout<<("segitiga ini adalah segitiga sembarang\n");}
}

