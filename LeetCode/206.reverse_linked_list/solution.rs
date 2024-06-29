impl Solution {
    pub fn reverse_list(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut current_node = head;
        let mut new_node = None;
        while let Some(mut node) = current_node {
            current_node = node.next;
            node.next = new_node;
            new_node = Some(node);
        }
        return new_node;
    }
}
