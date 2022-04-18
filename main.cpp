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
			height = h;
		}
		
	protected:
		int length;
		int width;
		int height;

};

class square: public shape{
	public:
		int areaOfSquare(){
			return (length * width);
		}
		int volumeOfSquare(){
			return (length * width * height);
		}
};
/*
class volume: public shape{
	public:
		int volumeOf(){
			return (length * width);
		}
};
*/

int main()
{
	square Squ;
	
	Squ.setLength(10);
	Squ.setWidth(10);
	Squ.setHeight(10);

	int area, vol;

	area = Squ.areaOfSquare();
	cout<<"Area of box: "<<area<<endl;

	vol = Squ.volumeOfSquare();
	cout<<"Volume of box: "<<vol<<endl;

    return 0;
}

