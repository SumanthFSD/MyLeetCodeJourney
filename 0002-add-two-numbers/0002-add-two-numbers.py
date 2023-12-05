# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        sumHeadNode = ListNode(-1)
        tailNode = ListNode(-1)
        carry = 0
        while l1 is not None or l2 is not None or carry:
            l1Val = 0
            l2Val = 0
            # print(carry)
            if l1 is not None:
                l1Val = l1.val
                l1 = l1.next
            if l2 is not None:
                l2Val = l2.val
                l2 = l2.next
            temp = l1Val + l2Val + carry
            
            carry = 0
            if temp >= 10:
                carry = temp//10
                newNode = ListNode(temp%10)
            else:
                newNode = ListNode(temp)
            # print(newNode.val)
            if sumHeadNode.val == -1:
                sumHeadNode = newNode
                tailNode = sumHeadNode
            else:
                tailNode.next = newNode
                tailNode = tailNode.next
        return sumHeadNode
            

        # while l1 is not None:
        #     temp = l1.val + carry
        #     carry = 0
        #     if temp >= 10:
        #         carry = temp//10
        #         newNode = ListNode(temp%10)
        #     else:
        #         newNode = ListNode(temp)
        #     print(newNode.val)
        #     tailNode.next = newNode
        #     tailNode = tailNode.next
        #     l1 = l1.next
        # while l2 is not None:
        #     temp = l2.val + carry
        #     carry = 0
        #     if temp >= 10:
        #         carry = temp//10
        #         newNode = ListNode(temp%10)
        #     else:
        #         newNode = ListNode(temp)
        #     tailNode.next = newNode
        #     tailNode = tailNode.next
        #     l2 = l2.next
        # if carry:
        #     newNode = ListNode(carry)
        #     tailNode.next = newNode
        #     tailNode = tailNode.next

        # print(sumHeadNode)
        
        
