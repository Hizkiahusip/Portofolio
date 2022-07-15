import string

s = input("Enter a string: ")
ignore = string.whitespace + string.digits + string.punctuation
s = s.upper()
all_freq = {}

for c in s:
    if c not in ignore:
        all_freq[c] = all_freq.get(c, 0) + 1
print(all_freq)
