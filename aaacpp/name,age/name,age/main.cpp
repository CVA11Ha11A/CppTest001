#include <iostream>
#include <stdio.h>
int critcal(float critcalhitdamege, int damege)
{
	return (critcalhitdamege * damege);
}

int main(void) //����
{
	

	
	
	int stalldamege = critcal(1.5, 150); //�Լ��� ȣ��;
	printf("ũ��Ƽ��! �������� �� %d �Դϴ�.", stalldamege);
}
