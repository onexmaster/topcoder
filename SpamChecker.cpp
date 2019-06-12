#include<bits/stdc++.h>
using namespace std;
class SpamChecker
{
    public:
    string spamCheck(string judgeLog, int good, int bad)
        {
       int len=judgeLog.length();
    	int sum=0;
        if(judgeLog.at(0)=='x')
        return("SPAM");
            else
            {
        for (int i=0;i<len;i++)
            {
            if (judgeLog.at(i)=='x')
                {
           		 sum=sum-bad;
            	if(sum<0)
                {
            	return("SPAM");
                break;
                }
                }
            else
            sum=sum+good;
            }
                return("NOT SPAM");
       // if(sum<0)
         //   return("SPAM");
        //else
          //  return("NOT SPAM");
            }
        }
    };
