#include <iostream>
#include <stdio.h>
int critcal(float critcalhitdamege, int damege)
{
	return (critcalhitdamege * damege);
}

int main(void) //메인
{
	

	
	
	int stalldamege = critcal(1.5, 150); //함수의 호출;
	printf("크리티컬! 데미지는 총 %d 입니다.", stalldamege);
}
