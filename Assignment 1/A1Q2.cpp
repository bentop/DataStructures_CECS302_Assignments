//William Benton Parrish
//CECS 302
//September 1, 2015
//Assignment 1, Question 2

/*Design a class template, OrderedCollection , that stores a collection of Comparable s
(in an array), along with the current size of the collection. Provide public functions
isEmpty , makeEmpty , insert , remove , findMin , and findMax . findMin and findMax return
references to the smallest and largest, respectively, Comparable in the collection.
Explain what can be done if these operations are performed on an empty collection.*/

#include<iostream>
#include<stdlib.h>

/*//Testing Purposes
class ComparableClass{
	private:
		int size;
	public:
		ComparableClass():size(0){}
		int getSize()
		{
			return size;
		}
		void setSize(int entry)
		{
			size=entry;
		}
		bool operator<( ComparableClass & rhs)
		{
			return size<rhs.getSize();
		}
		bool operator>(ComparableClass & rhs)
		{
			return size>rhs.getSize();
		}
};
*/
template<typename Comparable>
class OrderedCollection
{
	private:
		int size;
		Comparable *collection;
	public:
		OrderedCollection(int s) : size(s) 
		{
			Comparable temp[size];
			collection=temp;
			free(temp);
		}//Constructor
		~OrderedCollection(){ delete collection;}//Destructor
		bool isEmpty()
		{
			for(int i=0;i<size;i++)
				{
					if(collection[i]!=0;)
						return 0;	
				}
			return 1;
		}
		void makeEmpty()
		{
			if(!isEmpty())
			{
				for(int i=0;i<size;i++)
				{
					collection[i]=0;
				}
			}	
		}
		void insert(Comparable entry, int i)
		{	
				collection[i]=entry;			
		}
		void remove(int i)
		{
			collection[i]=0;	
		}
		Comparable getComparable(int i=0) const
		{
			return collection[i];
		}
		Comparable findMin() const
		{
			if(isEmpty())
			{
				return collection[0];
			}
			int i;
			Comparable tempComp,min;
			for(i=0;i<size;i++)
			{
				tempComp=collection[i];
				if (tempComp < min)
					min=tempComp;
			}
			return min;
		}
		Comparable findMax() const
		{
			if(isEmpty())
			{
				return collection[0];
			}
			int i;
			Comparable tempComp,max;
			for(i=0;i<size;i++)
			{
				tempComp=collection[i];
				if (tempComp > max)
					max=tempComp;
			}
			return max;
		}	
};
/*//Testing Purposes
int main()
{
	OrderedCollection<ComparableClass> oc1(5);
	std::cout<<"test";
	return 0;
}
*/
