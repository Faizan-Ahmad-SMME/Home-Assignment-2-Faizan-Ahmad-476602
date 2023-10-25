#include <iostream>
using namespace std;
int main() {
//	TASK 1
	
	float age;
	cout<<"Enter your age:"<<endl;
	
	cin>>age;
	
	if(age>=18){
	cout<<"You are eligible to vote"<<endl;}
	
	else{
	cout<<"You are NOT eligible to vote"<<endl;}
	cout<<endl;
	
//	TASK 2
	
	float integer;
	cout<<"Enter Integer value:"<<endl;
	cin>>integer;
	
	if(integer<10){
		cout<<"Not within the range [10,50]"<<endl;}
	
	else if(integer>50){
		cout<<"Not within the range [10,50]"<<endl;}
	
	else{cout<<"Value within the range [10,50]"<<endl;}
	cout<<endl;
	
//	TASK 3
	
	float A, B;
	cout<<"Enter values for 2 integer's"<<endl;
	cin>>A>>B;
	
	if(A>B){cout<<"The greater value is:"<<A<<endl;
	}
	
	else if(B>A){cout<<"The greater value is:"<<B<<endl;
	}
	else {cout<<"Both values are equal"<<endl;
	}
	cout<<endl;
	
//	TASK 4
	
	float exam1, exam2, exam3, average;
	cout<<"Enter exam results"<<endl;
	cin>>exam1>>exam2>>exam3;
	
	average = (exam1 + exam2 + exam3)/3;
	
	cout << "The average is:"<< average << endl;
	
	if (average>=60){cout<<"PASSED"<<endl;
	}
	else {cout<<"FAILED"<<endl;
	}
	return 0;
}
