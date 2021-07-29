import textwrap

def wrap(string, w):
    k=0
    for i in string:
        print(i,end="")
        k=k+1
        if k%w==0:
            print()
    return ' '

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
