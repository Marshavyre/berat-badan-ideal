#include <iostream>

using namespace std;

int main()
{
	float tinggi, beratideal;
	
	cout<<"Masukkan tinggi badan Anda (dalam cm):";
	cin>>tinggi;
	
	//Rumus:(tinggi - 100) - 10% dari(tinggi - 100)
	float beratIdeal = (tinggi-100) - 0.1 * (tinggi - 100);
	
	cout<<"Berat badan ideal Anda adalah: " << beratIdeal << "kg"<<endl;
	
	return 0;
}
