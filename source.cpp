//Kheirallah Ashkar & Imani McLaurin
//SOS project

/* before running code (Tested on Visual Studios 2013)
In Project tab/414Project properties

Configuration Properties -> General -> Common Language Runtime Support should be set to /clr
Configuration Properties -> C/C++ -> Common Language Runtime Support should be set to /clr
*/

#include "processes.h"

void menu(int type);
void exec(int x);
queue<int> jobList;

int main()
{
	int type = 0;

	//This is asking the user whether they would like to run the SOS in single process mode or multiple process mode
	//The difference is that single process mode will only allow one process active at a time, while multi process mode
	//allows for multiple processes to run concurrently
	cout << "Please select the processing mode you wish to use" << endl;
	cout << "1. Single process mode" << endl; 
	cout << "2. Multiple process mode" << endl;
	cin >> type;

	//Input validation
	while (type > 2 || type < 1)
	{
		cout << "invalid selection!" << endl << "Please try again: ";
		cin >> type;
	}

	menu(type);

	system("pause");
	return 0;
}

void menu(int type)
{
	int value;

	//This menu displays all of the possible programs the SOS can run
	for (;;)
	{
		cout << "===================================" << endl;
		cout << "1. Google Chrome" << endl;
		cout << "2. Internet Explorer" << endl;
		cout << "3. Mozilla Firefox" << endl;
		cout << "4. Wireshark" << endl;
		cout << "5. Windows Media Player" << endl;
		cout << "6. Notepad++" << endl;
		cout << "7. Notepad" << endl;
		cout << "8. Adobe Reader" << endl;
		cout << "9. SQL Plus" << endl;
		cout << "10. Paint" << endl;
		cout << "0. Exit the OS" << endl;
		cout << "===================================" << endl;
		cout << "Typing the negative value of a program terminates the program" << endl;
		cout << endl;

		//User inputs the program to execute
		cout << "Please choose a program to execute: ";
		cin >> value;
		cout << endl;
		
		//Input validation
		while (value < -10 || value > 10)
		{
			cout << "invalid selection!" << endl << "Please try again: ";
			cin >> value;
		}

		//If the type selected was single process the given program number is pushed into a queue, to ensure that only one process runs at a time
		if (type == 1)
		{
			//if there are no values in the queue, execute the program
			if (jobList.empty())
			{
				jobList.push(value);
				exec(value);
			}

			else
			{
				//if a process already running
				cout << "A process is already running" << endl;
				//The current process is terminated and removed 
				if (jobList.front() > 0)
					exec(jobList.front() * -1);
				else
					exec(jobList.front());
				jobList.pop();

				//next process is added to the queue and executed
				jobList.push(value);
				exec(jobList.front());
			}
		}

		//Multi-Process mode
		else
		{
			if (value > 0)
				start = clock();

			exec(value);
		}
	}
}

void exec(int x)
{
	if (x == 1)
		processOne();
	if (x == -1)
		killOne();
	if (x == 2)
		processTwo();
	if (x == -2)
		killTwo();
	if (x == 3)
		processThree();
	if (x == -3)
		killThree();
	if (x == 4)
		processFour();
	if (x == -4)
		killFour();
	if (x == 5)
		processFive();
	if (x == -5)
		killFive();
	if (x == 6)
		processSix();
	if (x == -6)
		killSix();
	if (x == 7)
		processSeven();
	if (x == -7)
		killSeven();
	if (x == 8)
		processEight();
	if (x == -8)
		killEight();
	if (x == 9)
		processNine();
	if (x == -9)
		killNine();
	if (x == 10)
		processTen();
	if (x == -10)
		killTen();

	if (x == 0)
	{
		exit(0);
	}
		
}

