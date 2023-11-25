/*
 * Administration.h
 *
 *  Created on: Oct 21, 2021
 *      
 */

#ifndef ADMINISTRATION_H_
#define ADMINISTRATION_H_
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
using namespace std;
class Administration {
private:
	string passWord;
	string companyId;
	string address;
	static int noCustomers;
	//string credit;
public:
	Administration(){
		passWord = " ";
		companyId = " ";
		address = " ";
		++noCustomers;
		//credit= "0000000000000";
	}

	Administration(string pword, string coid, string address, int numcus){ //string credit
		this->passWord= pword;
		this->companyId=coid;
		this->address=address;
		this->noCustomers=numcus;
		//this->credit=credit;
	}

	string getAddress() {
		return address;
	}

	void setAddress(string address) {
		this->address = address;
	}

	string getCompanyId() {
		return companyId;
	}

	void setCompanyId(string companyId) {
		this->companyId = companyId;
	}

	int displayTotalCustomer() {
		return noCustomers;
	}

	void addCustomer(int noCustomers) {
		this->noCustomers = noCustomers;
	}

	string getPassWord() {
		return passWord;
	}

	void setPassWord(string passWord) {
		this->passWord = passWord;
	}

	void setNoCustomers(int noCustomers) {
		this->noCustomers = noCustomers;
	}

	int getNoCustomers() {
		return noCustomers;
	}
	void CreateCredit() {
		int num, denominations;
		string status;
		cout<<"ENTER THE 13 DIGIT CARD NUMBER: "<<endl;
		cin>>num;
		cout<<"CREDIT AMOUNT: "<<endl;
		cin>>denominations;
		cout<<"STATUS (USED/AVAILABLE): "<<endl;
		cin>>status;
		try
		{
			//Creating a file for writing
			ofstream outToFile("creditfile.txt", ios::out | ios::app);

			if(outToFile.fail())
			{
				throw runtime_error("File cannot be access!");
			}

			//delimiter to separate each field
			outToFile << num << "\t" << denominations << "\t" <<status <<  endl;

			outToFile.close();

		}
		catch(runtime_error &ex)
		{
			cerr << ex.what() << endl;
		}

	};
	Administration readcredit(){
		Administration credit;
		int num, denominations;
		string status;
				try
				{
					ifstream inFromFile("creditfile.txt", ios::in);

					if(inFromFile.fail())
					{
						throw runtime_error("File cannot be accessed!");
					}

					inFromFile >> num >> denominations >> status ;

					while (!inFromFile.eof()) //read the file until you reach the end-of-file
					{
						inFromFile >> num >> denominations >> status ;
					}

					inFromFile.close();

				}
				catch(runtime_error &ex)
				{
					cerr << ex.what() << endl;
				}
				return credit;
			};

	void displayCompanyInfo(){
		cout<<"COMPANY INFORMATION: "<<endl;
		cout<<"COMPANY ID: "<< getCompanyId()<<"\nADDRESS: "<<getAddress()<<"\nNUMBER OF CLIENTS: "<<getNoCustomers()<<endl;
	};

};

int Administration::noCustomers=0;

#endif /* ADMINISTRATION_H_ */
