H, M = map(int, input().split()) #H는 시간, M은 분
clock_number = 60
hour_number = 24

if M < 45: #기준 시간에서 분이 45보다 작을 때, 시는 하나 내려 가야 한다.
    if H == 0:
        print(H-1+hour_number, M-45+clock_number)
    else:
        print(H-1, M-45+clock_number)
elif 45 <= M < 60: #기준 시간에서 분이 45보다 클 때, 시는 내려 가지 않는다.
    print(H, M-45)