#include "../inc/lista.hh"
#include "../inc/wartosc.hh" 

using namespace std;


Lista::Lista(){
	head = new Wartosc();
	size = 0;
	head->U_Nastepny(0);
	head->U_Wartosc(0);
}

void Lista::Add(int pos,int value)
{
	if(pos <= size && pos >= 0)
	{
	Wartosc* tmp = head;
	Wartosc* element = new Wartosc();
	
	for(int i = 0; i < pos;i++)
	{
		tmp = tmp->Z_Nastepny();
	}

	element->U_Nastepny(tmp->Z_Nastepny());
	element->U_Wartosc(tmp->Z_Wartosc());

	tmp->U_Nastepny(element);
	tmp->U_Wartosc(value);

		size++;
	}
	else
	cerr << "Poza zakresem!1" << endl;
}

void Lista::Fill(int n)
{
srand(time(NULL));

	Wartosc* tmp = head;
	Wartosc* element;
	for(int i = 0; i < n; i++)
	{
		int a=rand()%1000;
		
	tmp->U_Wartosc(a);
	element = new Wartosc();
	tmp->U_Nastepny(element);
	tmp = tmp->Z_Nastepny();

	size++;
	}
	
	delete element;
}

void Lista::Remove(int pos)
{
Wartosc* tmp = head;
	if(pos <= size && pos >= 0)
{
	if(pos == 0)
{
	head->U_Wartosc(head->Z_Nastepny()->Z_Wartosc());
	head->U_Nastepny(head->Z_Nastepny()->Z_Nastepny());
}
	else{

	for(int i = 0; i < pos-1;i++)
	{
		tmp = tmp->Z_Nastepny();
	}
	
	Wartosc* deleted_ptr = tmp->Z_Nastepny();

	tmp->U_Nastepny(deleted_ptr->Z_Nastepny());
	//delete deleted_ptr;
}
size--;
	}
	else
		cerr << "Poza zakresem!" << endl;

}

int Lista::Get(int pos)
{
	if(pos <= size && pos >= 0)
	{
		Wartosc* tmp = head;
	for(int i = 0; i < pos;i++)
	{
		tmp = tmp->Z_Nastepny();
	}
		return tmp->Z_Wartosc();
			delete tmp;
	}
	else
	{
		cerr << "Poza zakresem!" << endl;
		return -1;
	}
}
int Lista::Size()
{
	return size;
}

int Lista::Search()
{
	Wartosc* tmp = head;
	for(int i = 0;i < size - 1;i++)
	{

		{
			tmp = tmp->Z_Nastepny();
		}

	}
	return tmp->Z_Wartosc();
	
	delete tmp;
}

void Lista::Wypisz(){
	
		Wartosc* tmp = head;	
	for(int i = 0; i < Size();i++)
	{
		if(i == 0){cout << tmp->Z_Wartosc() << endl;}
		if(i>0){
		tmp = tmp->Z_Nastepny();
		cout << tmp->Z_Wartosc() << endl;
	}
	}
	cout << endl << "Wielkosc listy: " << Size() << endl;
	}