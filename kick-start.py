cases = int(input())

for c in range(cases):
    book = input()
    
    kicks = 0
    total = 0
    for i in range(len(book) - 4):
        if book[i:i+4] == "KICK":
            kicks += 1
        elif book[i:i+5] == "START":
            total += kicks
            
    print(f"Case #{c+1}: {total}")
