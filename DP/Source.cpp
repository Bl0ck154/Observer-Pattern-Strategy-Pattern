/*��� �������� ������ ������*/
#ifdef _DEBUG 
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>
#ifndef DBG_NEW 
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )		// �������� ���� � ������ � �������
#define new DBG_NEW 
#endif 
#endif  // _DEBUG


#include "Header.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"
#include "NewModelDuck.h"

void main()
{
	//��� ���������� ����� ������ �� ����������
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//��� ���� ������� ���������� ��������� � �������������� �������� ������
	{

		Duck* redHeadDuck = new RedHeadDuck();
		redHeadDuck->display();
		redHeadDuck->swim();
		redHeadDuck->performfly();
		//redHeadDuck->setPerformFly(new FlyNoWay());
		redHeadDuck->performQuack();
		cout << endl;
		Duck* rubberDuck = new RubberDuck();
		rubberDuck->display();
		rubberDuck->swim();
		rubberDuck->performfly();
		rubberDuck->performQuack();
		cout << endl;

		Duck* newModelDuck = new NewModelDuck();
		newModelDuck->display();
		newModelDuck->swim();
		newModelDuck->performfly();
		newModelDuck->performQuack();

		delete rubberDuck;
		delete redHeadDuck;
		delete newModelDuck;
	}
	//
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);	// ��������������� ������
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);	// ��������������� ������
	_CrtDumpMemoryLeaks();					// �������� �� ������

}