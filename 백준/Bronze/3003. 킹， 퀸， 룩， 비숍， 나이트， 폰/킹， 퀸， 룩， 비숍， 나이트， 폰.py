#동혁이가 찾은 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수
king_find, queen_find, look_find, vishop_find, knight_find, pone_find = map(int, input().split())


#원래 있어야 하는 체스 피스(기준값)들(총 16개)
chess_result = {'king':1, 'queen':1, 'look':2, 'vishop':2, 'knight':2, 'pone':8}


#필요한 체스 개수들(출력해야 하는 값)
king_need = chess_result['king'] - king_find #킹이 필요한 개수
queen_need = chess_result['queen'] - queen_find #퀸이 필요한 개수
look_need = chess_result['look'] - look_find #룩이 필요한 개수
vishop_need = chess_result['vishop'] - vishop_find #비숍이 필요한 개수
knight_need = chess_result['knight'] - knight_find #나이트가 필요한 개수
pone_need = chess_result['pone'] - pone_find #폰이 필요한 개수

#결과 출력
print(king_need, queen_need, look_need, vishop_need, knight_need, pone_need)