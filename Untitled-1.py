word="Bhavya"
with open("data.txt","r") as f:
    data=f.read()
    if(word in data):
        print("Found")
    else:
        print("not found")