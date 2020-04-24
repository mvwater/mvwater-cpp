//File Name: CommentInfo.h
//Author: Shane, Michaela, and Sejin
//Email Address: canfield1@kenyon.edu, kim3@kenyon.edu, brydon1@kenyon.edu
//Assignment: Mount Vernon City Water Database
//Description: Header file for Comment Information for Account
//Last Changed: 24 April 2020

#include <string>
#include <vector>

using namespace std;

#ifndef COMMENTINFO_H
#define COMMENTINFO_H



class CommentInfo {
  public:
	CommentInfo();
	CommentInfo(string input_accountNo, vector<strings> input_comments, bool input_hasComments);
	
	string getAccountNo();
	vector<strings> getComments();
	bool getHasComments();
	

  private:
	string accountNo;
    vector<strings> comments;
	bool input_hasComments;
};

#endif //COMMENTINFO_H
