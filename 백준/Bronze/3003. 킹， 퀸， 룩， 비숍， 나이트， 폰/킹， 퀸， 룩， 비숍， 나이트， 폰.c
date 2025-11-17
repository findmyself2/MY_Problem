#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int king, queen, look, vishop, knight, pon;
	//킹, 퀸, 룩, 비숍, 나이트, 폰 설정
	int lim_k = 1; //킹은 한 개
	int lim_q = 1; //퀸은 한 개씩
	int lim_l = 2; //룩 2개
	int	lim_v = 2; //비숍 2개
	int lim_kn = 2; //나이트는 두 개씩 
	int lim_p = 8; //폰은 8개

	//몇 개 찾았는지 입력하는 식
	scanf("%d %d %d %d %d %d", &king, &queen, &look, &vishop, &knight, &pon);
	
	//몇 개를 빼고 더해야 하는지 연산하는 식
	int result_king = lim_k - king; 
	int result_queen = lim_q - queen;
	int result_look = lim_l - look;
	int result_vishop = lim_v - vishop;
	int result_knight = lim_kn - knight;
	int result_pon = lim_p - pon;

	//동혁이가 찾은 개수, 0보다 크거나 같으면서 10보단 작거나 같아야 함
	if (king, queen, look, vishop, knight, pon >= 0 & king, queen, look, vishop, knight, pon <= 10)
	{
		printf("%d %d %d %d %d %d", result_king, result_queen, result_look, result_vishop, result_knight, result_pon);
	}

	return 0;
}