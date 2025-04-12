def find_min_max(arr):
    if not arr:
        return None, None  # Handle empty array

    min_val = arr[0]
    max_val = arr[0]

    for num in arr:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num

    return min_val, max_val

# Example usage:
arr = [10, 25, 3, 7, 89, -5, 42]
min_val, max_val = find_min_max(arr)

print("Array:", arr)
print("Minimum element:", min_val)
print("Maximum element:", max_val)
