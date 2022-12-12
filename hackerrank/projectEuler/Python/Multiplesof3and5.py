def solution(num):
    num = num-1

    last3 = num - (num % 3)
    last5 = num - (num % 5)
    last15 = num - (num%15)

    """print("Last term of 3 series : ", last3)
    print("Last term of 5 series : ", last5)
    print("Last term of 15 series : ", last15)"""

    n3 = ((last3 - 3) // 3) + 1
    n5 = ((last5 - 5) // 5) + 1
    n15 = ((last15 - 15) // 15) + 1

    """print("No of terms in 3 series : ", n3)
    print("No of terms in  5 series : ", n5)
    print("No of terms in 15 series : ", n15)"""

    s3 = ((0.5 * n3) * (6 + ((n3 - 1) * 3))
    s5 = ((0.5 * n5) * (15 + ((n5 - 1) * 5))
    s15 = ((0.5 * n15) * (30 + ((n15 - 1) * 15))


def main():
    t = int(input("Enter the number of test cases : "))
    for i in range(0, t, 1):
        n = int(input(" : "))
        solution(n)


if __name__ == '__main__':
    main()
