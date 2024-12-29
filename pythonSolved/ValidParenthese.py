class Solution(object):
    def isValid(self, s):
        check = []
        i = 0
        while i < range(len(s)):
            print(i, s[i], check)
            if s[i] == "(" or s[i] == "{" or s[i] == "[":
                check.append(s[i])
            elif check[-1] == "(" and s[i] == ")":
                    check.pop()
            elif check[-1] == "{" and s[i] == "}":
                check.pop()
            elif check[-1] == "[" and s[i] == "]":
                check.pop()
            i += 1
            
        if len(check):
            return False
        return True
            



Solution().isValid()

