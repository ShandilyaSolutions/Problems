def solution(num):
    char_count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    final = ''  # to store the final palindrome number
    other_half = ''

    pos = 0
    for digit in num:
        # counting the frequency of each digit
        index = int(digit)
        char_count[index] += 1

    # print(char_count)
    for i in range(9, -1, -1):
        if char_count[i] % 2 == 0:
            for j in range(0, (char_count[i] // 2), 1):
                final += str(i)

        elif char_count[i]>1 & char_count[i] % 2 != 0:
            char_count[i] -= 2
            final += str(i)

    other_half = final

    for i in range(9, -1, -1):
        if char_count[i] % 2 != 0:
            final += str(i)
            break

    for i in other_half[::-1]:
        final += i

    return final


def main():
    num = input(" > ")
    print(solution(num))


if __name__ == '__main__':
    main()
