#include "../inc/stos.hh"

using namespace std;

void Stos::Push(int val)
{
	data.Add(data.Size(), val);
}

int Stos::Pop()
{
	int tmp;
	tmp = data.Get(data.Size() - 1);
	data.Remove(data.Size() - 1);
	return tmp;
}

int Stos::Size()
{
	return data.Size();
}
