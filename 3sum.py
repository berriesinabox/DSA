nums = [-1,0,1,2,-1,-4]
lis = []
nums.sort()   # → [-4, -1, -1, 0, 1, 2]

for i in range(len(nums)):
    if i > 0 and nums[i] == nums[i-1]:
        continue
        
    target = -nums[i]
    left, right = i+1, len(nums)-1

    while left < right:
        total = nums[left] + nums[right]

        if total == target:
            lis.append([nums[i], nums[left], nums[right]])
            left += 1
            right -= 1

            while left < right and nums[left] == nums[left-1]:
                left += 1
            while left < right and nums[right] == nums[right+1]:
                right -= 1

        elif total < target:
            left += 1
        else:
            right -= 1

print(lis)
