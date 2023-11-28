s = input().strip()
obj = set()
for char in s:
   if char.islower():
      obj.add(char)

print(len(obj))
