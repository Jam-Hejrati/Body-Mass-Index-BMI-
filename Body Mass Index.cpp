#include<iostream>
#include<cmath>
using namespace std;

//Body Mass Index (BMI) 
class BMI{
	private:
		float Weight,Height,Bmi;
	public:
		float BmiCalculation();
		BMI(){
			printf("Enter Your Weight(Kg) : ");
			cin>>Weight;
			printf("Enter Your Height(m) : ");
			cin>>Height;
			cout<<"\n";
		}	
};
float BMI::BmiCalculation(){
	
	Bmi=Weight/(pow(Height,2));
	
	if(Bmi<18.5){
		cout<<"Under Weight! \n";
		cout<<"Color Situation : Blue!\n";
		system("color 09");
	}
	else if(Bmi>=18.5 && Bmi<=24.9){
		cout<<"Normal Weight \n";
		cout<<"Color Situation : Green\n";
		system("color 02");
	}
	else if(Bmi>24.9){
		cout<<"Over Weight! \n";
		cout<<"Color Situation : Red!\n";
		system("color 04");
	}
	
	return Bmi;
}
int main()
{
	BMI Person1;
	cout<<Person1.BmiCalculation()<<"\n";
	cout<<"_______________________________\n\n";
	
	
	BMI Person2;
	cout<<Person2.BmiCalculation();
	
	
	cout<<"\n\n\n\n   ____Jam Hejrati____\n\n";
	system("pause");
}
