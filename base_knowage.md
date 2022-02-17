## 基本的数据结构

### 链表框架

```
/*单链表节点*/
class ListNode {
    int val;
    ListNode next;
}


/*链表的访问*/
void traverse(ListNode head) {
   for (ListNode p = head; p != null; p = p.next) {
        //迭代访问 p.val

   }
}

void traverse(ListNode head) {

  //递归访问head.val
  traverse(head.next);
}

```

### 二叉树框架

```
/*基本的二叉树*/
class TreeNode {
   int val;
    TreeNode left, right;
}

void traverse(TreeNode root) {
    traverse(root.left);
    traverse(root.right);
}
/*N叉树*/

class TreeNode {
    int val;
    TreeNode[] children;
}

void traverse(TreeNode root) {
    for (TreeNode child : root.children)
         traverse(child);
}
```

### 数组的遍历

```
for (int l = 2; l <= n; l++) {
  for (int i = 0; i <= n - l; i++) {
    int j = l + i - 1;
    //计算dp[i][j];

 }
}

```


### 二分查找

```
int binarySearch(int[] nums, int target) {
    int left = 0; 
    int right = nums.length - 1; // 注意

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
            return mid; 
        else if (nums[mid] < target)
            left = mid + 1; // 注意
        else if (nums[mid] > target)
            right = mid - 1; // 注意
    }
    return -1;
}
/*寻找右侧边界*/
int right_bound(int[] nums, int target) {
    if (nums.length == 0) return -1;
    int left = 0, right = nums.length;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            left = mid + 1; // 注意
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid;
        }
    }
    return left - 1; // 注意
}
```

### 快排
```
int partition(int a[], int start, int end){
    int p = a[start];
    while(start < end){
        while(a[end] >= p && start < end) end--;
        a[start] = a[end];
        while(a[start] < p && start < end) start++;
        a[end] = a[start];
    }
    a[start] = p;
    return start;
}

void qs(int a[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = partition(a, start, end);
    qs(a, start, mid-1);
    qs(a, mid+1, end);
}
```


















