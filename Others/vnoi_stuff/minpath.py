factor_count = [-1] * 100009
import sys

def main():
    # sys.stdin = open("CHIPHI.INP" , "r")
    # sys.stdout = open("CHIPHI.OUT" , "w")
    T = int(input())

    # using python to prevent the endl incident :)))
    while T > 0:
        T -= 1
        

        n , m = list( map(int , input().split(" ") ))

        matrix = []

        for i in range(n):
            matrix.append( list(map(int,input().split(" ") )))

        print( find_min_path(matrix) )




def find_min_path(matrix: list[list[int]]) -> int:
    # convert the matrix from numbers to its factor count

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            # check if we have already found the factor count for this number
            if factor_count[ matrix[i][j] ] == -1:
                #if not then count the number of factor and store it in the factor_count
                count_factor( matrix[i][j] , factor_count )
            
            matrix[i][j] = factor_count[ matrix[i][j] ]
        
    # now , find the min_path by using the simple dp

    #intiallize the dp array
    min_path = []
    for i in range(len(matrix)):
        min_path.append( [9999999] * len(matrix[0]) )
    
    # now , dp
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if i==0 and j==0 :
                min_path[i][j] = matrix[i][j]
                continue
            
            last_min_path = 9999999
            if i > 0:
                last_min_path = min(last_min_path , min_path[i - 1][j])
            if j > 0:
                last_min_path = min(last_min_path , min_path[i][j - 1])

            min_path[i][j] = last_min_path + matrix[i][j]

    return min_path[ len(matrix) - 1 ][ len(matrix[0]) - 1 ]             


def count_factor( number: int , factor_count: list[list[int]]):
    # this function will count number of factor that an interger have. 
    count = 0

    factor = 2

    tmp = number
    
    # algorithm to count the number of factor
    # tthis algorithm  inspirated by this solution : https://www.geeksforgeeks.org/efficient-program-print-number-factors-n-numbers/
    # using the number theory
    while factor <= tmp:
        if tmp % factor == 0:
            count += 1
            tmp /= factor
        else:
            factor += 1

    factor_count[ number ] = count
        
if __name__ == '__main__':
    main()
