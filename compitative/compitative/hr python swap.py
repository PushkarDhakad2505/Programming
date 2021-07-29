
def reverse_words_order_and_swap_cases(sentence):
    pass

    

if __name__ == '__main__':
    ar=[]
    sentence = input()
    ar.append(sentence.split(" "))
    sentence=ar[0]
    
    sentence.reverse()
    #print(sentence)
    for i in range(len(sentence)):
        for j in range(len(sentence[i])):
            if (sentence[i][j].isupper()):
                print(sentence[i][j].lower(),end="")
            else:
                print(sentence[i][j].upper(),end="")
        print("",end=" ")
    result = reverse_words_order_and_swap_cases(sentence)

