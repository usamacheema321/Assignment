#include<iostream>
using namespace std;
int main()
{
	int choice,marks;
	const int Math_marks=65,
	          phy_marks=55,
	          chem_marks=50,
	          total_marks=190,
	          math_phy=140;
	const int Math_choice=1,
	          phy_choice=2,
	          chem_choice=3,
	          total_marks_choice=4,
	          math_phy_choice=5,
	          quit_choice=6;
	cout<< " enter 1 to check math marks " << endl;
	cout<< " enter 2 to check phy marks " << endl;
	cout<< " enter 3 to check chemistry marks " << endl;
	cout<< " enter 4 to check total marks " << endl;
	cout<< " enter 5 to check math and physics marks " << endl;
	cout<< " enter 6 to quit " << endl;
	cin>>choice;
	if( choice==Math_choice)
	{
		cout<< " enter your maths marks " << endl;
		cin>>marks;
			  
	 if(marks>=Math_marks)
		{
			cout<< " you are eligible for math department " << endl;
		}	else
	{
		cout<< " sorry better luck next time " << endl;
	}	
						}	            
    if( choice==phy_choice)
	{
		cout<< " enter your physics marks " << endl;
		cin>>marks;
		if( marks>=phy_marks)
		{
			cout<< " you are eligible for physics " << endl;
		}	else
	{
		cout<< " sorry better luck next time " << endl;
	}	
			  }
								  		  
   if( choice==chem_choice)
	{
		cout<< " enter your chemistry marks " << endl;
		cin>>marks;
		if( marks>=chem_marks)
		{
			cout<< " you are eligible for chemistry " << endl;
		}
			else
	{
		cout<< " sorry better luck next time " << endl;
	}	
			  }		  		  
   if( choice==total_marks_choice)
	{
		cout<< " enter your total marks  " << endl;
		cin>>marks;
		if( marks>=total_marks)
		{
			cout<< " you are eligible for all three " << endl;
		}
			else
	{
		cout<< " sorry better luck next time " << endl;
	}	
			  }		  
	
	 if( choice==math_phy)
	{
		cout<< " enter your math and physics marks " << endl;
		cin>>marks;
		if(marks>=math_phy)
		{
			cout<< " you are eligible for math and physics " << endl; 
		}
			else
	{
		cout<< " sorry better luck next time " << endl;
	}	
			  }		  		  
	  
}