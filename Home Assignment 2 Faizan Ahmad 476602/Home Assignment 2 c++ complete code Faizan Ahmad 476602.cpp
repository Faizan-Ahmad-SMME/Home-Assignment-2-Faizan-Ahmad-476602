#include<iostream>
using namespace std;
int main ()
{
	//TASK 1
	
	//used float as i can now use grades in decimels.
	float grade;
	//simple promt to ask for the score.
	cout<<"Enter your score:"<<endl;
	cin>>grade;
	//using "if" and a chain of "else if" i was able to make a system of code that out puts the grades based on the score.
	
	
	if(grade>=90 && grade<100){cout<<"Your grade is A"<<endl;
	}
	else if(grade>=75 && grade<100){cout<<"Your grade is B"<<endl;
	}
	else if(grade>=60 && grade<100){cout<<"Your grade is C"<<endl;
	}
	else if(grade>=45 && grade<100){cout<<"Your grade is D"<<endl;
	}
	else if(grade>=0 && grade<100){cout<<"Your grade is F"<<endl;
	}
	// i added error detections which displays an error if input is beyond the range [0,100]
	else {cout<<"ERROR"<<endl;
	cout<<"INVALID SCORE"<<endl;}
	//added cout<<end; to create a gap between the task exicutes
	cout<<endl;
	
	//TASK 2
	
	int X;
	//i wanted to use float however i found out that using float let to comlecated code that i have not been taught yet 
	
	cout<<"Enter an integer value:"<<endl;
	cin>>X;
	// using % the code is able to see if the remainder is zero when dividing with 2 and 5
	//this chain of ifs and else ifs allows for an output for every type of input (all combinations are accounted for)
	if (X % 2 == 0){
		if (X % 5 == 0){cout<<"Your integer is both even and divisible by 5."<<endl;
		}
		else {cout<<"Your integer is even but no devisible by 5."<<endl;
		}
	}
	else if (X % 5 == 0){cout<<"Your integer is not even but divisible by 5."<<endl;
	}
		else {cout<<"Your integer is not even and not divisible by 5."<<endl;
		}
	
	//TASK 3
	
	int year;
	//used int as years are most often then not displayed as whole numbers
	
	cout<<"Enter a year:";
	cin>>year;
	//this line below checks if the year us divisible by 4 and is not divisible by 100 (hence the !=) 
	//it also uses the OR function to check if the year is instead divisible by 400
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {cout<<"This year is a leap year."<<endl;
	}
	else {cout<<"This year is not a leap year."<<endl;
	}

	//TASK 4
	
	float GPA, ATT;
	//using float i can input decimal values for gpa and attendence

	cout<<"Enter student GPA and attendence (in percentage)"<<endl;
	cin>>GPA>>ATT;
	//again making use of the OR function to make a multi conditional "if" this line also serves the perpouse of being the limit (error) detection 
	if ((GPA > 4) || (GPA < 0) || (ATT < 0) || (ATT > 100)){cout<<"ERROR INPUTS ARE INVALID"<<endl;
	}
	//these condtions determine the output for the code
	else if (GPA >= 3.5 && ATT >= 80) {cout<<"This student is eligible for a scholarship."<<endl;
	}
	
	else {cout<<"This student is not eligible for a scholarship."<<endl;
	}

	//TASK 5
	//to start of i used char and not string as i will only be dealing with 1 letter at a time
	char letter;
	// a simple code that takes 1 letter inputs
	cout<<"Enter a letter"<<endl;
	cin>>letter;
	// this first code is for lowercase letters
	// i have made a simple filter that only accepts lowercase letters
	if ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')) {
	//if a vowel is detected the out put is displayed
		cout<<"This letter is a vowel"<<endl;
	}
	// this secound code is for uppercase letters
	// i have made a simple filter that only accepts uppercase letters
	else if (((letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U'))) {
	//if a vowel is detected the out put is displayed
		cout<<"This letter is a vowel"<<endl;
	}
	//if non of the conditions match the letter must be a consonant and not a vowel
	else {cout<<"This letter is a consonant"<<endl;
	}
	
	return 0;
}
