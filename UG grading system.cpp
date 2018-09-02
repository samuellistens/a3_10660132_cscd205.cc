    #include <iostream>
    using namespace std;
    int main()
    {
	int Exam_Score;
	
	cout <<"UNIVERSITY OF GHANA-LEGON GRADING SYSTEM"<<endl;
	
	system("PAUSE");
	
	cout <<"PLEASE INPUT YOUR EXAM SCORE TO DETERMINE YOUR GRADE"<< endl;
	cin >> Exam_Score;
	
	if( Exam_Score >=80)
	{
	if( Exam_Score <=100)
	{
	cout <<"Grade  -  A"<<endl <<"Grade Point  -  4.0"<<endl <<"Comment  -  Excellent"<<endl;
	}
    }
    
	if( Exam_Score >=75)
	{
	if( Exam_Score <=79)
	{
	cout <<"Grade  -  B+"<<endl <<"Grade Point  -  3.5"<<endl <<"Comment  -  Very good" <<endl;
	}
	}
	
    if( Exam_Score >=70)
    {
	if( Exam_Score <=74)
	{
	cout <<"Grade  -  B"<<endl <<"Grade Point  -  3.0"<<endl <<"Comment  -  Good"<<endl;
	}
	}
		
	if( Exam_Score >= 65)
	{
	if( Exam_Score <= 69)
	{
	cout <<"Grade  -  C+"<<endl <<"Grade Point  -  2.5"<<endl <<"Comment  -  Fairly good"<<endl;
	}
	}
	
	if( Exam_Score >=60 )
	{
	if( Exam_Score <= 64)
	{
	cout <<"Grade  -  C"<<endl <<"Grade Point  -  2.0"<<endl <<"Comment  -  Average"<<endl;
	}
	}
	
	if( Exam_Score >=55)
	{
	if( Exam_Score <=59)
	{
	cout <<"Grade  -  D+"<<endl <<"Grade Point  -  1.5"<<endl <<"Comment  -  Below average"<<endl;
	}
	}
	
	if( Exam_Score >=50)
	{
	if( Exam_Score <=54)
	{
	cout <<"Grade  -  D"<<endl <<"Grade Point  -  1.0"<<endl <<"Comment  -  Marginal pass"<<endl;
	}
	}
	
	if( Exam_Score >=45)
	{
	if( Exam_Score <=49)
	{
	cout <<"Grade  -  E"<<endl <<"Grade Point  -  0.5"<<endl <<"Comment  -  Unsatisfactory"<<endl;
	}
    }
    
	if( Exam_Score >=0)
	{
	if( Exam_Score <=44)
	{
	cout <<"Grade  -  F"<<endl <<"Grade Point  -  0.0"<<endl <<"Comment  -  Fail"<<endl;
	}
	}
	
	else
	{
	cout << "Wrong input...please make sure the Exam score you input is between the range of 0 and 100"<<endl;
    }
	
	system("PAUSE");
	
	return 0;
    }
