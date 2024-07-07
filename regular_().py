
def brackets(n, s, open=0, closed=0, current_string="", memo=None):
    if memo is None:
        memo = {}

    key = (open, closed, current_string)
    if key in memo:
        return memo[key]

    if open == n and closed == n:
        if s in current_string:
            return 1
        return 0

    a = 0
    b = 0

    if open < n:
        a = brackets(n, s, open + 1, closed, current_string + "(", memo)

    if closed < open:
        b = brackets(n, s, open, closed + 1, current_string + ")", memo)

    memo[key] = a + b
    return memo[key]

def getCount(N,M,S):
  if (N%2!=0):
    return 0
  return brackets(N//2,S)

print(getCount(6,1,')('))