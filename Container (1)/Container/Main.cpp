#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <vector>
#include <list>
#include <string>


using namespace std;


struct StudentInfo
{
	string Name;
	int iKor;
	int iEng;
	int iMath;

	StudentInfo(){}
	StudentInfo(string _Name, int _Kor, int _Eng, int _Math)
		:Name(_Name), iKor(_Kor), iEng(_Eng), iMath(_Math){}

};




class Object
{
protected:
	StudentInfo Info;


public:
	

public:
	Object() {}
	virtual ~Object() {}
};



class Student : public Object
{
public:
	

public:
	Student() {}
	virtual ~Student() {}
};




vector<StudentInfo> StudentList;

int Count = 0;


void AddStudent();
//void DeleteStudent();



int main(void)
{
	while (true)
	{
		system("cls");

		cout << "1. 학생 정보 추가" << endl;
		cout << "2. 학생 정보 변경" << endl;
		cout << "3. 학생 정보 삭제" << endl;
		cout << "4. 학생 정보 전체 출력" << endl;
		cout << "5. 종료" << endl;

		int Choice = 0;
		cin >> Choice;

		system("cls");

		switch (Choice)
		{
		case 1:
			AddStudent();
			break;

		case 2:
			//** 문제가 있음.
			//DeleteStudent();
			//AddStudent();
			break;

		case 3:
			//DeleteStudent();
			break;

		case 4:
			/*
			for (int i = 0; i < Count; ++i)
			{
				cout << tStudent[i].Index << ". " << tStudent[i].Name << endl;
				cout << tStudent[i].iKor << endl;
				cout << tStudent[i].iEng << endl;
				cout << tStudent[i].iMath << endl << endl;
			}
			*/
			break;

		case 5:
			exit(NULL);
			break;
		}

		system("pause");
	}

	return 0;
}


void AddStudent()
{




	cout << "** 학생 정보 추가 **" << endl << endl;

	cout << "학생 이름 입력 : ";

	char buffer[128] = "";
	cin >> buffer;

	tStudent[Count].Name = new char[strlen(buffer)];
	strcpy(tStudent[Count].Name, buffer);

	cout << "국어 점수 입력 : ";
	cin >> tStudent[Count].iKor;

	cout << "영어 점수 입력 : ";
	cin >> tStudent[Count].iEng;

	cout << "수학 점수 입력 : ";
	cin >> tStudent[Count].iMath;

	tStudent[Count].Index = Count + 1;
	++Count;
}

/*

void DeleteStudent()
{
	cout << "** 학생 정보 삭제 **" << endl << endl;

	if (Count == 1)
	{
		tStudent[0].Name = (char*)"";
		tStudent[0].iKor = 0;
		tStudent[0].iEng = 0;
		tStudent[0].iMath = 0;
		tStudent[0].Index = 0;
		--Count;
	}
	else
	{
		int n = 0;
		cout << "학생 번호 입력 : ";
		cin >> n;

		for (int i = 0; i < (Count - 1); ++i)
		{
			if (tStudent[i].Index == n)
			{
				for (int j = i; j < (Count - 1); ++j)
				{
					tStudent[j].Name = tStudent[j + 1].Name;
					tStudent[j].iKor = tStudent[j + 1].iKor;
					tStudent[j].iEng = tStudent[j + 1].iEng;
					tStudent[j].iMath = tStudent[j + 1].iMath;
					tStudent[j].Index = tStudent[j + 1].Index;
				}
				--Count;
				break;
			}
		}
	}
}
	*/