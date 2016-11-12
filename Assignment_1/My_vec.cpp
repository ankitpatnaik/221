# include "My_vec.h"
//using namespace std;

My_vec::My_vec()
{
	size=0;
	capacity=5;
	ptr=new char;
	*ptr=capacity;// or ptr=new char[capacity]
}

My_vec::~My_vec()
{
	delete ptr;
}

My_vec::My_vec(const My_vec& vec)
{
	capacity=vec.capacity;
	size=vec.size;
	ptr=new char[capacity];//making memory for the size of capacity pointers
	for (int i=0;i<size;i++)
	{
		ptr[i]=vec[i]; // the elements of vector are placed in as characs and formede to a vector of caracs (string)
	}

}

	My_vec& My_vec::operator=(const My_vec& vec)
	{
		//assigning the elements of vec to the newly developed object
		size=vec.size;
		capacity=vec.capacity;
		ptr=new char[capacity];//making memory for the size of capacity pointers
	for (int i=0;i<size;i++)
	{
		ptr[i]=vec[i]; // the elements of vector are placed in as characs and formede to a vector of caracs (string)
	}
	}

	int My_vec::get_size() const
	{
		return size;
	}
	

	int My_vec::get_capacity() const
	{
		return capacity;
	}


	char& My_vec::operator[](int i) const
	{return ptr[i];}

	char& My_vec::operator[](int i)
	{return ptr[i];}

	bool My_vec::is_empty() const
	{
		if (size==0)
			return true;
	}

	char& My_vec::elem_at_rank(int r) const
	{return ptr[r];}

	void My_vec::replace_at_rank(int r, const char& elem)
	{ ptr[r]=elem;}

	void My_vec::insert_at_rank(int r, const char& elem)
	{
		for (int i=size;i>r;i--)
			{ptr[i+1]=ptr[i];}
		ptr[r]=elem;
		
	}
	void My_vec::remove_at_rank(int r) // overwrite all previous values
	{
		for (int i=r;i<size;i++)
			{ptr[i]=ptr[i+1];}
	}


	/*int My_vec::find_max_index(const My_vec& v,int size)
	{}


	void My_vec::sort_max(My_vec& vec);
	{}
*/

	/*ostream& My_vec::operator<<(ostream& out, const My_vec& vec)
	{
		for (int i=0;i<vec.size;i++)
			{out<<vec[i];}
		return out;
	
	}*/

