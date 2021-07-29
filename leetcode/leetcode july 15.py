class Solution:
    def addBinary(self, a, b):
        self.a=a
        self.b=b
        a=list(a)
        b=list(b)
        if '"' in a:
            a.remove('"')
        if '"' in a:
            a.remove('"')
        if '"' in b:
            b.remove('"')
        if '"' in b:
            b.remove('"')
        ar=""
        for i in range(len(a)):
            ar=ar+a[i]
        a=str(ar)
        br=""
        for i in range(len(b)):
            br=br+b[i]
        b=str(br)
        a=int(a,2)
        b=int(b,2)
        c=str(bin(a+b))
        return c[2:]
if __name__ == "__main__":
    s1=Solution()
    c='"'
    print(c+s1.addBinary(input(),input())+c)

        
