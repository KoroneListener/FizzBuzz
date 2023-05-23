def FizzBuzz(rules, n, curr_num, rule_idx, out):
    if rule_idx < len(rules):
        if curr_num % rules[rule_idx] == 0:
            out += rules[rule_idx + 1]
        return FizzBuzz(rules, n, curr_num, rule_idx + 2, out) or (not rule_idx and curr_num < n and FizzBuzz(rules, n, curr_num + 1, 0, '')) or 0
    else:
        print(out or curr_num)

FizzBuzz([3, 'fizz', 5, 'buzz'], 100, 0, 0, '')

