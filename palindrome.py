def flipper(oriString):
    flipList = []
    for x in range(len(oriString)):
        flipList.append(oriString[-(x+1)])
    flippedS = "".join(flipList)
    return flippedS

text = input("enter a text : ")

reversed = flipper(text)

if reversed == text:
    print(text + " = "+ reversed)
    print(f'"{text}" is a palindrome')
else:
    print(text + " =/= "+ reversed)
    print(f'"{text}" is not a palindrome')

