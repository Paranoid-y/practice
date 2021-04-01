#include<iostream>
#include<string>
#include<cstring>
#include<typeinfo>
#include <stdio.h>
#include <stdlib.h>
#include<fstream>
using namespace std;
int main()
{
    int a1=23;
    char ss[] = "/mnt/mtd/nsd/platform/%d.txt";
    char buf[strlen(ss)];
    sprintf(buf, ss, a1);
    cout << buf << endl;
     

    /*FILE *fp;
    fp=fopen("num.txt","w+");
    int a=2267;
    char p[4];
    sprintf(p,"%d", a);
    cout << p << endl;
    cout<<strlen(p)<<endl;
    fwrite(p, sizeof(char), strlen(p), fp);
    fclose(fp);
    */
   /*
    FILE *fp;
    fp = fopen("num.txt", "r");
    char *step;
    fseek(fp, 0, SEEK_END);
    int lsize=ftell(fp);
    cout<<lsize<<endl;
    fseek(fp, 0, SEEK_SET);
    step=(char *)malloc(lsize*sizeof(char)+1);
    memset(step,0,lsize*sizeof(char)+1);;
    fread(step, sizeof(char), lsize, fp);
    cout<<step<<endl;
    fclose(fp);
    free(step);
    step=NULL;*/
    char m_aMotorStepRecordFn[128]="aabc.txt";
    /*int m_iMotorStepRecord=6;
    ofstream ofMotorStepRecordFile(m_aMotorStepRecordFn,ios::out);
    ofMotorStepRecordFile << m_iMotorStepRecord;
    ofMotorStepRecordFile.close();*/
    ifstream ifMotorStepRecordFile(m_aMotorStepRecordFn);
    string sLine;
    getline(ifMotorStepRecordFile, sLine);

    cout<<sLine<<endl;
    int32_t iMotorSumFile = static_cast<int32_t>(atoi(sLine.c_str()));

   cout<< iMotorSumFile <<endl;
   
   fprintf(stderr, "%lu\n", &iMotorSumFile);
   fprintf(stderr, "%lu\n", (char *)&iMotorSumFile);
           //cout<< (char *)&iMotorSumFile << endl;
   ifMotorStepRecordFile.close();
}


