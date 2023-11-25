#include<iostream>
#include<string>
#include <cstring>
#include <fstream>

using namespace std;
int main()
{
    char ccommand[30];
    string command;
    cout<<"Enter the command\n";
    cin>>command;
    int n = command.length();
    int i;
    if(n>30)
    {
        cout<<"Command is too long,Please restart the program and try again\n";
        exit;
    }
    strcpy(ccommand, command.c_str());
    if(ccommand[0]!='*'||ccommand[1]!='1'||ccommand[2]!='2'||ccommand[3]!='1'||ccommand[4]!='*')
    {
        cout<<"Error, format is wrong\n";
        cout<<"Program will now terminate try again\n";
        exit(0);
    }
    for(i=5;i<=16;i++)
    {
        if (isdigit(ccommand[i]) == false)
        {
            cout<<"Voucher number is incorrect, Please restart program and try again\n";
        }
    }

    if(ccommand[17]!='*')
    {
      cout<<"Error, format is wrong\n";
        cout<<"Program will now terminate try again\n";
        exit(0);
    }
    if(ccommand[18]!='8'||ccommand[19]!='7'||ccommand[20]!='6')
    {
        cout<<"Area code not recognized, Please try again\n";
        exit;
    }
    if(ccommand[21]==3)
    {
        cout<<"number is digicel\n";
        if(ccommand[22]!=0)
        {
             cout<<"Phone number is invalid, Please try again\n";
            exit;
        }
        else if (ccommand[23]!=1||ccommand[23]!=2||ccommand[23]!=3||ccommand[23]!=4)
        {
            cout<<"Phone number is invalid, Please try again\n";
            exit;
        }
    }
        else if(ccommand[21]==6)
    {
        cout<<"number is Flow\n";
        if(ccommand[22]!=0)
        {
             cout<<"Phone number is invalid, Please try again\n";
            exit;
        }
        else if (ccommand[23]!=1||ccommand[23]!=2||ccommand[23]!=3||ccommand[23]!=4)
        {
            cout<<"Phone number is invalid, Please try again\n";
            exit;
        }

    }
    //6 Save phone card

    // Create a text file
      ofstream MyWriteFile("PhoneCard.txt");

      // Write to the file
      MyWriteFile << "command:";

      // Close the file
      MyWriteFile.close();

      // Create a text string, which is used to output the text file
      string record;

      // Read from the text file
      ifstream MyReadFile("Phonecard.txt");

      // Use a while loop together with the getline() function to read the file line by line
      while (getline (MyReadFile, record)) {
        // Output the text from the file
        cout << record;
      }
      // Close the file
      MyReadFile.close();
    }

