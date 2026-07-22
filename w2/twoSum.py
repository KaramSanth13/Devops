def twoSum(arr,n):
    left = 0
    right = len(arr) -1

    while left < right:
        target = arr[left] + arr[right]

        if target == n:
            return [arr[left],arr[right]]
        elif target< sum:
            left+=1
        else:
            right-=
    return []

def main():
    arr = [1,2,3,4,5]
    n = 8
    print("Vanakkam Da Karameyy")
    print(twoSum(arr,n))

if __name__ == "__main__":
    main()

