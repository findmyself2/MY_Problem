year = int(input()) #연도를 입력받는다

if (year % 4 == 0) and (year % 100 != 0 or year % 400 == 0): #윤년 조건식, 4의 배수면서 100의 배수가 아니거나 400의 배수여야 함
    print(1) #윤년이면 1 출력
else:
    print(0) #아니면 0 출력