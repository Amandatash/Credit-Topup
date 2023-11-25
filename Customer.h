/*
 * Customer.h
 *
 *  Created on: Oct 30, 2021
 *      
 */

#ifndef CUSTOMER_H_ 
#define CUSTOMER_H_

#include <iostream>
#include<string>
#include "Administration.h"

using namespace std;

class Customer{
private:
     int phoneNo;
     int trn;
     string lastName;
     int areaCode;
     int serialNo;
     string address;
     int creditBalance;
     int prefix;
     Administration admin;
public:
     //default constructor
     Customer()
     {
    	 phoneNo=0000000;
    	 trn=000000000;
    	 lastName="Last Name";
    	 areaCode=000;
    	 serialNo=000;
    	 address="Address";
    	 creditBalance=0;
    	 prefix=0;
    	 admin.setPassWord("");
    	 admin.setCompanyId("");
    	 admin.setAddress("");
    	 admin.setNoCustomers(0);
     }
     //primary constructor
     Customer(int phoneNo, int trn, string lastName, int areaCode, int serialNo, string address,
    		 int creditBalance, int prefix, int noCustomers)
     {
    	 this->phoneNo =phoneNo;
    	 this->trn=trn;
    	 this->lastName=lastName;
    	 this->areaCode=areaCode;
    	 this->serialNo=serialNo;
    	 this->address=address;
    	 this->creditBalance=creditBalance;
    	 this->prefix=prefix;
    	 admin.setNoCustomers(noCustomers);


     }
     void addCredit()
     {


     }
     /*int checkBalance(){
    	 ++creditBalance;
     }*/
     void setPhoneNo(int phoneNo)
     {
          this->phoneNo = phoneNo;
     }

     int getPhoneNo()
     {
     	return phoneNo;
     }

     void setTrn(int trn)
     {
		this->trn = trn;
	 }

     int getTrn()
     {
		return trn;
	 }

     void setLastName(string lastName)
     {
		this->lastName = lastName;
	 }

     string getLastName()
     {
     	return lastName;
     }

     void setAreaCode(int areaCode)
     {
        this->areaCode = areaCode;
     }

     int getAreaCode() const
     {
     		return areaCode;
     }

     void setSerialNo(int serialNo)
     {
		this->serialNo = serialNo;
	 }

     int getSerialNo()
     {
		return serialNo;
	 }

     void setAddress(string address)
     {
		this->address = address;
	 }

	 string getAddress()
	 {
		return address;
	 }

	 void setCreditBalance(int creditBalance)
	 {
	 	this->creditBalance = creditBalance;
	 }

	 int getCreditBalance()
	 {
		return creditBalance;
	 }

	 void setPrefix(int prefix)
	 {
		this->prefix = prefix;
	 }

	 int getPrefix()
	 {
		return prefix;
	 }

	 void Display(){
		 cout << "The Phone Number is: " << phoneNo << endl;
		 cout << "TRN: " << trn << endl;
		 cout << "Customer Last Name: " << lastName << endl;
		 cout << "The areaCode: " << areaCode<< endl;
		 cout << "Serial Number: " << serialNo <<endl;
		 cout << "The address is: " << address << endl;
		 cout << "The new credit balance is: " << creditBalance << endl;
		 cout << "Prefix: " << prefix << endl;
	 }





};

#endif /* CUSTOMER_H_ */
