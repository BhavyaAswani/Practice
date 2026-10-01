s = "Bhavya"

s.split("Seperator",int)        #splits function in parts default seperator is whitespace(" ") we can put maxsplit or directly integer after seperator to split specified times
s.rsplit("",int)                #splits function from last but assigns from the start only


s.strip("character")            #strips off all the specified characters from start or end default character whitespace
s.lstrip()                      #from left
s.rstrip()                      #from right

s.partition()                   # splits function into 3 parts start | partition | end , also we can specify seperator
s.rpartition()                  # same but from last

s.lower()                       # changes all cases to lower
s.upper()                       # changes all cases to upper
s.capitalize()                  # changes first letter to capital
s.title()                       # changes first letter of each word to capital
s.swapcase()                    # changes lower to upper and upper to lower

s.isdigit()                     # checks if the input is only digits
s.isalpha()                     # checks if the input is only alphabets 
s.isalnum()                     # checks if the input is only digits and alphabets (No spaces or special char)
s.islower()                     # checks if case of all the letters is lower
s.isupper()                     # checks if the case of all the letters is upper
s.isspace()                     # checks if all the input is whitespace
s.istitle()                     # checks if first letter of each word is capital
s.isdecimal()                   # checks if input is only decimal digits


s.find('')                      # finds the index of first occurence of given char (gives -1 if not found)
s.index()                       # same as find but gives error on not found
s.rfind()                       # find from last
s.rindex()                      # index from last
s.count()                       # counts the number of occurence of given char
s.replace('word_in_input','word to replace',int)      # replaces the word the many times specified and all of them if not


"seperator".join(list)          # joins all the items in the list with given seperator
''.join(reversed(s))            # reverses the alphabet (basically reversed adds every char from last as a string in a list and then join reunites them resulting the string return reverted)

s.startswith()                  # checks if the input starts with the specified string
s.endswith()                    # checks if the input ends with the specified string

#                               # if char>int gives the input
s.center(int,'')                # adjusts the string in the center to make total char specified with string given whitespace if unspecified, adds in last if uneven
s.ljust()                       # adds given string to left to reach total char 
s.rjust()                       # adds given string to right to reach total char 
s.zfill()                       #adds 0's to left
s.removeprefix()                # removes string from the start
s.removesuffix()                # removes string from the end
list(s)                         # adds all char as string in list
sorted(s)                       # sorts the char's as their positions
