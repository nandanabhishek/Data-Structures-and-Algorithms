"""
def __init__(self, data):
        self.data = data
        self.next = None
"""


def detectLoop(head):
        slow_p = head
        fast_p = head
        while(slow_p and fast_p and fast_p.next):
            slow_p = slow_p.next
            fast_p = fast_p.next.next
            if slow_p == fast_p:
                return 1 # which means loop exists
        return 0 # which means no loop
