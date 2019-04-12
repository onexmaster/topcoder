#include<bits/stdc++.h>
using namespace std;
class Genetics
{
    public:
    string getOffspring(string g1, string g2, string dom)
    {
        //parent1
        int p1=g1.length();
        char parent_1[p1+1];
        strcpy(parent_1, g1.c_str());
        //parent2
        int p2=g2.length();
        char parent_2[p2+1];
        strcpy(parent_2, g2.c_str());
        //dom_rec
        int domi=dom.length();
        char dom_rec[domi+1];
        strcpy(dom_rec, dom.c_str());
        //
        char child[p2];
        child[p2]='\0';
       
        for (int i=0;i<domi;i++)
            {
            if (dom_rec[i]=='R')
                {
                if (int(parent_1[i])>=int(parent_2[i]))
                    {
                    child[i]=parent_1[i];
                    }
                else
                    {
                    child[i]=parent_2[i];
                }
                }
            else
                {
                if (int(parent_1[i])>=int(parent_2[i]))
                    {
                    child[i]=parent_2[i];
                    }
                else
                    {
                    child[i]=parent_1[i];
                }
                }
            }
        return child;
        }
    };
