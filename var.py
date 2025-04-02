#positional and keyboard args

def sumME(x,y):
    print(f" x is {x} and y is {y}")
    sum = x+y
    return sum

#double underline, dunder
if __name__ == "__main__":
    answer = sumME(1,2)
    print(answer) 