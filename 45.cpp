#include <iostream>
#include <thread>
#include <pthread.h>
#include <unistd.h>
using namespace std;

void *WriteFile(void * m_iMotorStepRecord)
{
	int count = 1;
	int rTemp = -1;
	int Record;
	Record = *(int *)m_iMotorStepRecord;
	rTemp = Record;
	count++;
	cout << rTemp << endl;
	cout << count << endl;
}
int main()
{
	pthread_t thread_id_1;
	//int m_iMotorStepRecord = 46;
	int status = pthread_create(&thread_id_1, NULL, WriteFile, NULL);
	if (status != 0)
	{
		printf("pthread_create(),failed!\n");
	}
	int m_iMotor =20;
	cout << "ok" << endl;
	m_iMotor++;
	WriteFile((void *)&m_iMotor);
	 return 0;
}
