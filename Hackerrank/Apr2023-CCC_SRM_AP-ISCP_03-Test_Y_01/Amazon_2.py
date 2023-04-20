# You are given two non-empty linked lists representing two non-negative integers.
# The digits are stored in reverse order, and each of their nodes contains a
# single digit. Add the two numbers and return the sum as a linked list.

# You may assume the two numbers do not contain any leading zero, except the number 0 itself.

# Input Format

# Given the Head of two linked lists

# Constraints

# The number of nodes in each linked list is in the range [1, 100].
# 0 <= Node.val <= 9
# It is guaranteed that the list represents a number that does not have leading zeros.
# Output Format

# Return the Head of the Linked List

# Sample Input 0

# 10 6
# 0 8 2 8 6 7 2 8 7 2
# 5 7 9 5 7 9
# Sample Output 0

# 5 5 2 4 4 7 3 8 7 2
# Sample Input 1

# 4 3
# 8 1 1 6
# 7 4 4
# Sample Output 1

# 5 6 5 6


class ListNode:
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next


def insert(root, item):
    temp = ListNode()
    temp.val = item
    temp.next = None
    if root == None:
        root = temp
    else:
        ptr = root
        while ptr.next != None:
            ptr = ptr.next
        ptr.next = temp
    return root


def print_list(root):
    while root != None:
        print(root.val, end=" ")
        root = root.next


def array_to_list(arr):
    root = None
    for i in range(len(arr)):
        root = insert(root, arr[i])
    return root


def addTwoNumbers(l1, l2):
    dummy = ListNode()
    carry = 0
    cur = dummy
    while l1 or l2 or carry:
        s = (l1.val if l1 else 0) + (l2.val if l2 else 0) + carry
        carry = s // 10
        cur.next = ListNode(s % 10)
        cur = cur.next
        l1 = l1.next if l1 else None
        l2 = l2.next if l2 else None
    return dummy.next


n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

root1 = array_to_list(a)
root2 = array_to_list(b)
root3 = addTwoNumbers(root1, root2)
print_list(root3)
