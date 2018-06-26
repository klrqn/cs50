# Strings Continued

# 9.1
# Traversal and the for loop, by item
for aName in ['Joe', 'Amy', 'Brad', 'etc']:
    print('Hi ' + aName + '. Please come to my party Sat!')

# the loop variable takes on each value in the sequence.
for aValue in range(10): # same is true with range
    print(aValue)
# This will traverse a string and print ever character
for aChar in "Go Spot Go":
    print(aChar)
# G \n o \n   \n S \n p \n o \n t ...

# 9.2
# Traversal and the for loop; by index
fruit = 'apple'
for idx in range(len(fruit)):
    print(fruit[idx])

# 9.3
# Traversal and the while loop
fruit = 'apple'
position = 0
while position < len(fruit):
    print(fruit[position])
    position += 1

# 9.4
# The in and not in operators
print('p' in 'apple')  # True
print('i' in 'apple')  # False
print('ap' in 'apple') # True
print('pa' in 'apple') # False
print('' in 'apple')   # True
print('x' not in 'apple') # True

# 9.5
# The Accumulator Pattern with Strings
def removeVowels(s):
    vowels = 'aeiouAEIOU'
    sWithoutVowels = ""
    for eachChar in s:
        if eachChar not in vowels:
            sWithoutVowels += eachChar
    return sWithoutVowels

print(removeVowels('compsci'))
print('aAxEeyIizOopUuq')

# 9.6
# Looping and Counting
def count(text, aChar):
    lettercount = 0
    for c in text:
        if c == aChar:
            lettercount += 1
    return lettercount
print(count('banana', 'a'))
# how many a's are in banana?

print('\n\n\n')
# 9.7
# A Find Function / Method
def find(astring, achar):
    ix = 0
    found = False
    while ix < len(astring) and not found:
        if astring[ix] == achar:
            found = True
        else:
            ix = ix + 1
    if found:
        return ix
    else:
        return -1

print(find("compsci", 'p'))
print(find("Compsci", 'C'))
print(find("Compsci", 'i'))
print(find("Compsci", 'x'))
# finds the index location of the in question

# 9.8
# Optional Parameters
def find4(astring, achar, start=0, end=None):
    """
    Find and return the index of achar in astring.
    Return -1 if achar does not occur in astring.
    """
    ix = start
    if end == None:
        end = len(astring)

    found = False
    while ix < end and not found:
        if astring[ix] == achar:
            found = True
        else:
            ix = ix + 1
    if found:
        return ix
    else:
        return -1

# 9.9
# Character Classification
import string
print(string.ascii_lowercase)
print(string.ascii_uppercase)
print(string.digits)
print(string.punctuation)
print(string.whitespace)

# 9.10
# Summary
indexing = 'this'
print(indexing[2]) # i
# length function (len)
# for loop traversal
for i in 'Example':
    print(i, end=' - ')
    print('\n')
# Slicing [:]
# String Comparison ( >, <, >=, <=, ==, !=)
# In and Not In operators
if 'heck' in 'I\'ll be checking for you':
    print('True')
if 'heck' not in 'I\'ll be checking for you':
    print('False') # it is so this won't print
