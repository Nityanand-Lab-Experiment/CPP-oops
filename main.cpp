#include <iostream>

using namespace std;

class shape{
	public:
		void setLength(int l){
			length = l;	
		}
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			heigth = h;
		}
		
	protected:
		int length;
		int width;
		int height;

};


int main()
{
	box Box;
	Box.l=10;
	Box.b=10;
	Box.h=10;

	int vol;

	vol = Box.l * Box.b * Box.h;


        cout<<"volume of box: "<<vol<<endl;
        return 0;
}

