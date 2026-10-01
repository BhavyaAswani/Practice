def new(name,age,grd):
    with open("new.txt","a") as f:
        def x(type,ent):
            f.write(type + ent + "\n")
        x("Name: ",name)
        x("Age: ",age)
        x("Grade: ",grd)
        f.write("\n")
def show_all():
    with open("new.txt","r") as f:
        data=f.read()
        print(data)
def change_grade(ntt,newgrd):
    with open("new.txt","r+") as f:
        data=f.readlines()
        for i in range (len(data)):
         if(data[i].strip().startswith("Name: " + ntt)):
            data[i+2]="Grade:  " + newgrd + "\n"
        f.seek(0)
        f.writelines(data)
def del_stud(name):
    found=True
    with open("new.txt","r+") as f:
        l=f.readlines()
        for i in range(len(l)):
            if l[i].strip().startswith("Name: " + name):
                del(l[i:i+4])
                found=True
                break
        if not found:
           print("Not Found")
        f.seek(0)
        f.truncate()
        f.writelines(l)
show_all()
new("Kashish","39","A+")