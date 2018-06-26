def sum67(nums):
  
    if len(nums) == 0:
        return 0
    
    listNum = len(nums)
  
    theSum = 0
    for digit in range(listNum):
        if nums[digit] == 6:
          nums[digit] = 0
          while nums[digit] != 7:
            nums[digit] = 0
            digit =+ 1
            if nums[digit] == 7:
                nums[digit] = 0
                break

        theSum += nums[digit]
  
    return theSum

aList = [1,2,3,4,5,6,7]

sum67(aList)
