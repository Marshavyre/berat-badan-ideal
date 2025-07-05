#include <iostream>
#include <string>

using namespace std;

int main()
{
	float tinggi, berat_ideal;
	string jenis_kelamin;
	
	cout <<"Masukkan jenis kelamin (pria/wanita): ";
	cin >> jenis_kelamin;
	
	cout<<"Masukkan tinggi badan Anda (dalam cm):";
	cin>>tinggi;

	if (jenis_kelamin == "pria" || jenis_kelamin =="Pria"){
		berat_ideal = (tinggi - 100) - ((tinggi - 100) *0.1;
	} else if (jenis_kelamin == "wanita" || jenis_kelamin == "Wanita"){
		berat_ideal = (tinggi - 100 ((tinggi - 100) * 0.15);
	} elsa {
		cout <<"Input jenis kelamin tidak valid!" <<endl;
	return 1;
}
cout <<"Berat badan ideal kamu adalah: "<< berat_ideal << "kg" <<endl;
return 0;
{
	
	
