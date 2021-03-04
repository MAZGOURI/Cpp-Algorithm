            /** by Youssef Mazgouri. **
++  ++  +---+  ++ ++  +----+  +----+  +---+  +---+
¦++++¦  ¦+-+¦  ¦¦ ¦¦  ¦+--+¦  ¦+--+¦  ¦+--+  ¦+--+
++++++  ¦¦ ¦¦  ¦¦ ¦¦  ¦¦  ++  ¦¦  ++  ¦+--+  ¦+--+
 ++++   ¦¦ ¦¦  ¦¦ ¦¦  ¦+---+  ¦+---+  ¦+--+  ¦+--+
  ¦¦    ¦¦ ¦¦  ¦¦ ¦¦  +---+¦  +---+¦  ¦¦     ¦¦ 
  ¦¦    ¦+-+¦  ¦+-+¦  +---+¦  +---+¦  ¦+--+  ¦¦
  ++    +---+  +---+  +----+  +----+  +---+  ++
****************************************************/


#include <iostream>
using namespace std;

const int N = 100010; 
int table[N]; // table for lowest prime factor

/*
* Description : method for compute sieve
*/
void sieve()
{
	for(int i = 2; i < N; i += 2) table[i] = 2;	
	for(int i = 3; i < N; i += 2)
	{
		if(table[i] == 0) 
		{
			table[i] = i;
			for(int j = i + i; j < N; j += i) 
			{
				if(table[j] == 0) table[j] = i;
			}
		}
	}
}

/*
* Description : method for compute prime factors of a number
*  
* @param : number - integer number
*/
void factorize(int number) 
{
	while(number > 1) 
	{
		cout << table[number] << " ";
		number /= table[number];
	}
	cout << endl;
}

/* Example of testing */
int main() 
{
	sieve();
	//Display of primes for numbers less than 100
	for(int i = 1; i <= 100; i++) 
	{
		cout << "prime of " << i << " is: ";
		factorize(i);
		cout << endl;
	}
	return 0;
}
