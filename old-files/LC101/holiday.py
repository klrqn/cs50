days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', \
            'Friday', 'Saturday']

leavingDay = input('What day of the week are you leaving? (Sunday = 0)')
print('Ok, you\'re leaving on', days[int(leavingDay)])
leavingDay = int(leavingDay)

length = input('How long are you staying?')
length = int(length)

print('OK! That means you\'ll be back on', days[(leavingDay + length) % 7])

