def solution(sides):
    sides.sort()
    answer = 0
    
    if sides[2] < sides[0] + sides[1] :
        return 1
    else :
        return 2
    
    return answer