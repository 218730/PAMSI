#include "../inc/kolejka.hh"

using namespace std;

void Kolejka::Push(int val)
{
	data.Add(data.Size(),val);
}

int Kolejka::Get()
{
	int tmp = 0;

	if(Size() > 0)
	{
		tmp = data.Get(0);
		data.Remove(0);
	}
	else
	{
		throw "Out_Of_Range_Exception.";
	}
	return tmp;
}

int Kolejka::Size()
{
	return data.Size();
}