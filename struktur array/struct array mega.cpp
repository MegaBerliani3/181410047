#include<iostream>
#include<string>
#include<sstream>
using namespace std;

	struct sepatu
	{
		string sepatu;
		int harga;
	}spt1[3];

void printsepatu1(sepatu sepatu1);

int main ()
{
     string sport;
     int b;
             for(b=0; b<3;b++)
             {
             cout<<"Masukkan merk sepatu	: ";
             getline(cin,spt1[b].sepatu);
             cout<<"Masukkan Harga		: Rp.";
             
             getline(cin,sport);
             stringstream(sport)>>spt1[b].harga;                    }
             
       cout<<"\nBarang yang Telah Diinput :\n";
       for(b=0;b<3;b++)
       printsepatu1(spt1[b]);   
     
return 0;

}

void printsepatu1(sepatu sepatu1)
{
	cout<<sepatu1.sepatu<<"\t";
	cout<<"\tRp. "<<sepatu1.harga<<",-\n";
}
