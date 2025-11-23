A = int(input()) #첫번째 피연산자
B = input() #두번째 피연산자(문자열로 입력받는 것은, 문자열은 각 요소에 접근할 수 있기 때문에)

cal1 = A*int(B[2]) #첫번째 연산과정 472*5
cal2 = A*int(B[1]) #두번째 연산과정 472*8
cal3 = A*int(B[0]) #세번째 연산과정 472*3
result_cal = A*int(B) #최종 연산 472*385
print(cal1, cal2, cal3, result_cal, sep='\n')