#include<iostream>
using namespace std;
void callarray() {
	string  names[] = {"Sajjad","Reza","Sahar","Arsalan","Sepehr"};
	int sizearray = sizeof(names) / sizeof(int);
	for (int i = 0; i <4;i++ ) {
		cout << names[i]<<"\n"<<endl;
	}
	cout << "*********Multi Array*************" << "\n";

}
void bimeh() {
	//این یک مینی پروژه بیمه هستش
	int month = 12;
	int costmonth;
	int years;
	//int result[20];//20years
	cout << "Mizin mahiyaneh bimeh khod ra Elam Namaid:\n" << "1.80000 \n2.90000 \n3.100000 \n*************\n";
	cin >> costmonth;
	cout << "Mizin Sal bimeh khod ra Elam Namaid:\n" << "1.10 \n2.15 \n3.20 \n*************\n";
	cin >> years;

	//cout << costmonth<<"****" <<years<< endl;
	int sumyaers = month * costmonth;
	cout << "...SAleAval...."<<sumyaers<<".....\n";
	for (int i = 2; i <= years; i++) {
		
		int sood = sumyaers * 20 / 100;
		sumyaers += sood;
		
		cout << "*****constmonth*month*******\n" << "years[" << i << "] :" << sumyaers <<"$" << "\n";
		
	}
	


}
void multiArray() {
	//برای نمایش ارایه های چند بعدی باید از حلقه های تو در تو استفاده کنیم
	string names[][4] = { {"Bayden","Boosh","Obama","Teramp"},{"Raisi","Rohani","AhmadiNezhad","Khatami"}};
	int width = 4, height = 2;
	for (int i = 0; i < height;i++) {//inja setr ro moshkhas mikonim
		for (int n = 0; n < width; n++) {//inja soton ro moshkhas mikonim
			cout << names[i][n]<<' ';
	}
		std::cout << std::endl;
	}
}
int main(){
	bimeh();
	//callarray();
	//multiArray();
	
	
}