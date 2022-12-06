"""
Largest Palindrome Number program in python :
    This program accepts a string of numbers and finding the largest
    palindrome number possible from it.

    Example :
    input: 566657
    output: 65756
"""


def solutin(num):
    largePalindrome = ''
    char_count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

    # Counting the frequency of the characters
    for digit in num:
        index = int(digit)
        char_count[index] += 1

    # Now we have to pick the largest number in the string
    count = 9
    while count > -1:
        while char_count[count] > 1:
            largePalindrome += str(count)
            char_count[count] -= 2
        count -= 1

    other_half = largePalindrome

    for i in range(9, -1, -1):
        if str(i) in num:
            largePalindrome += str(i)
            break

    for num in other_half[::-1]:
        largePalindrome += num

    return largePalindrome


def main():
    num = input(" ?: ")
    # solution(num)
    print(solution(num))


if __name__ == '__main__':
    main()
