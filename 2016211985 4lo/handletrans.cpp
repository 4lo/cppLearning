#include "handletrans.h"

//���ٿؽ����л�����࣬�����滭
void transToLeftPort()//���ٿؽ����л�����࣬�����滭
{
	//���ٿؽ����л�����࣬�����滭
	setviewport(0, 0, 906, 640, 1);
}


void transToRightPort()//����Ļ�л����Ҳ������в���
{
	setviewport(910, 0, 1190, 640, 1);
}

void recreateBorder()//�Ի�����лָ���ʼֵ�����߿�
{
	setviewport(0, 0, 1200, 650, 1);
}