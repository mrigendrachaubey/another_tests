//base class for 4 side shapes
class shape
{
	protected:
		int width;
		int height;
	public:
	        void setwidth(int);
		void setheight(int);
};

//derived class only for rectangle
class rectangle : public shape
{
	public:
		 int getarea();
		 
};

