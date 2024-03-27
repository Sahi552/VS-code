def brackets(s):
    if len(s) % 2 == 0:
        stack = []
        for i in s:
            if i in "{([":
                stack.append(i)
            else:
                if not stack or \
                    (i == ')' and stack[-1] != '(') or \
                    (i == '}' and stack[-1] != '{') or \
                    (i == ']' and stack[-1] != '['):
                     return False
                stack.pop()
        return not stack
    else:
        return False
    
a = brackets(s="(){}[]")
b = brackets(s="{]")
print(a)
print(b)