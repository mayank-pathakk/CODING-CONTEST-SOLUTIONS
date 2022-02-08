for _ in range(int(input())):
    n=int(input())
    days=["SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"]
    if n<3:
        print("STUDY")
    else:
        print(days[n%7])