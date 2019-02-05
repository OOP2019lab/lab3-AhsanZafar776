#include<iostream>
#include"githubuser1.h"
#include<string>
#include<fstream>
using namespace std;

void readdatafromfile(githubuser*record,string filepath)
{
	ifstream fin(filepath);
	int users,folders;
	fin>>users;
	for(int i =0;i<users;i++)
	{
		fin>>record[i].firstname;
		fin>>record[i].username;
		fin>>record[i].email;
		fin>>folders;
		record[i].institute=nullptr;
		record[i].institute=nullptr;

		for(int j=0;j<folders;j++)                //makes dynamic array for folders
		{
			record[i].githubfolders= new string [folders];
			record[i].githubfolders[j];
		}

	}
	for(int i =0;i<users;i++)                  //deleting array
		delete [] record[i].githubfolders;
}

void setedubg(githubuser & record)
{
	record.institute= new string[1]; // creating new pointer
	record.qualification = new string[1];
	cout<<record.firstname<<" enter the institue"<<endl; //pritning
	cin>>record.institute[0];
	cout<<record.firstname<<" enter the qualification"<<endl;
	cin>>record.qualification[0];


}
void print(githubuser record)
{
	//printing the user
	cout<<record.firstname<<endl;
	cout<<record.username<<endl;
	cout<<record.email<<endl;
	if(record.institute!=nullptr)
	{
		cout<<*record.institute<<endl;
		cout<<*record.qualification<<endl;
	}

}
void remover(githubuser & record)
{
	//removing the user
	if(record.institute!=nullptr)
	{
		record.institute=nullptr;
		record.qualification=nullptr;
	}
	cout<<"** removed**"<<endl;
}

void backuparray(githubuser record,githubuser backup,int usercount)
{
	
		backup.firstname=record.firstname;
		backup.username=record.username;
		backup.email=record.email;
		backup.password=record.password;
		backup.foldercount=record.foldercount;
		backup.githubfolders=new string[2];
		for(int j=0;j<record.foldercount;j++)
		{
			backup.githubfolders[j]=record.githubfolders[j];
		}
		if(record.institute!=nullptr)
		{
			backup.institute= new string[1];
			backup.institute[0]=record.institute[0];
			backup.qualification =new string[1];
			backup.qualification[0]=record.qualification[0];
		}
	

}

int main ()
{   
	int size=2,a=0;
	githubuser * record = new githubuser [size];
	githubuser * backup = new githubuser [size];
	readdatafromfile( record, "Hello.txt");    //read data from file
	while(8)
	{
		cout<<"\nEnter 1 in to enter background information\n Enter 2 to print the user information\n Enter 3 to remove backgorund information\n Enter 4 to keep the back of the files\n";
		cin>>a;

		if(a==1)
			setedubg(record[0]);
		if(a==2){
			print(record[0]);
		}

		if(a==3)
			remover(record[0]);
		if(a==4)
			backuparray(record[0],backup[0],size);

	}
	delete record[0].qualification;
	delete  record[0].institute;
	delete backup[0].qualification;
	delete backup[0].institute;
	delete[] record;                      //deleting array
	delete[] backup;
}