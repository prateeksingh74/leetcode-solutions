
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:       
        dummy = ListNode(0)  # dummy node to make building easier
        current = dummy
        carry = 0
        
        while l1 or l2 or carry:
            # Step 1: Get the values (0 if node is None)
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            
            # Step 2: Calculate sum and new carry
            total = val1 + val2 + carry
            carry = total // 10  # what's the carry?
            digit = total % 10   # what digit do we write?
            
            # Step 3: Create new node with the digit
            current.next = ListNode(digit)
            current = current.next
            
            # Step 4: Move to next nodes (if they exist)
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return dummy.next
