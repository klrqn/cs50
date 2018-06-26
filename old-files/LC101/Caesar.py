import string
UPPERASCII = 65
LOWERASCII = 97
alphaL = string.ascii_lowercase
alphaU = string.ascii_uppercase
alpha = string.ascii_letters


def alphabet_position(letter):
    if letter in alphaU:
        # num = alphaU[ord(letter)-65]
        num = ord(letter)-UPPERASCII
        return num
    if letter in alphaL:
        # num = alphaL[ord(letter)-97]
        num = ord(letter)-LOWERASCII
        return num
    return letter

def rotate_character(char, rot):
    if char in alpha:
        position = alphabet_position(char)
    else:
        return char
    rotatedNum = (position + rot) % 26

    if char in alphaU:
        return chr(rotatedNum + UPPERASCII)
    if char in alphaL:
        return chr(rotatedNum + LOWERASCII)
    else:
        return char

# print(rotate_character('a', 3))
def encrypt(text, rot):
    encryptedText = ""
    for eachChar in text:
        if eachChar in alpha:
            encryptedText = encryptedText + rotate_character(eachChar, rot)
        else:
            encryptedText = encryptedText + eachChar
    return encryptedText

# $ python3 caesar.py
# Type a message:
# Hello, World!
# Rotate by:
# 5
# Mjqqt, Btwqi!

print("Type a message:")
message = input()
print("Rotate by:")
rotation = ord(input())
print(encrypt(message, rotation))
