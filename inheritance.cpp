#include <iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int width;
	public:
		int area()
		{ 
		cout<<"Enter the length :";
        cin>>length;
        cout<<"Enter the width :";
        cin>>width;
		return length*width ;
		}
};
class cuboid : public rectangle
{
public:
 int height;
public:
 int volume()
  {
     cout<<"Enter the height :";
     cin>>height;
  	 return area()*height;
	  }	
};
int main()
{
cuboid rec;
 cout<<rec.volume()<<endl;
}
