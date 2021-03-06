| Editing Period | File Main Title | File Sub Title | Environment | Contents | Focus On & Main issue |
|:--------|:--------|:--------|:--------|:---------|:---------|
|| 자료구조 | 9주차 |  C / VS2019 | Stack | |
|| 자료구조 | 10주차 |  C / VS2019 | Stack | |
|~2019/<br>06/15| 자료구조 | 11주차 |  C / VS2019 | Queue | ADT Capsulization, make Cricle queue methods<br> *significant error (find 2019/05/28) : element pointer sometimes grab unnecessary memories and not be free flexibly. My big mistake. This error will be fixed after this week's solutions* |
|~2019/<br>05/30| 자료구조 | 12주차 |  C / VS2019 | Tree | Make Capsulized Tree ADT method <br> 기존에 사용했던 element를 유연한 적용을 위해 element 구조체를 새로 정의하고, binary tree 메소드를 모두 정의해 보았다. |
|~2019/<br>05/31| 자료구조 | 13주차 |  C / VS2019 | Binary Tree | 어떻게 오버로딩 없이 함수를 깔끔하게 구성할 수 있을까에 대한 고민. 전역변수도 사용해 보고 했지만 무엇보다 함수 파라미터를 일일이 다 바꾸어 주어야 한다는 것은 너무 귀찮았음. 그런데 오버로딩이나 오버라이딩이 금지되어 있기 때문에 더욱 깔끔한 코드를 작성하는 방법에 대한 고민을 많이 하게 되는 것 같음. |
|~2019/<br>06/02| 자료구조 | HW 3 4 | C / VS2019 | Deque by Stack, Stack by Queue | Make complicated data structure ADT methods like Deque and Stack implemented by simple data structure ADT mehtods |
|~2019/<br>06/10| 자료구조 | 14주차 |  C / VS2019 | Binary Tree | Bug fix from week 13, add some function : Example Code |
|~2019/<br>06/10| 자료구조 | 7주차 |  C / VS2019 | Destructive Set | Make Capsulized Set ADT method |
|~2019/<br>06/18| 자료구조 | HW 5 |  C / VS2019 | Binary Tree | 현재 위치에서 전위순회 기준 다음 노드를 반환하는 함수를 작성한다. 그리고, 전위순회하여 input 과 일치하는 원소를 가진 node를 찾아내는 함수를 제작함.|



## example code

### 14주차 : Tree

```C

//***STRUCTURE EXAMPLE***
//tr_nd_bylist*
//tr 	 : This structure is for "TREE" data structure
//nd 	 : This structrue is about "NODE"
//bylist : This structure was implemented "BY (Linked)LIST"

//***FUNCTION EXAMPLE***
//tr_nextNodeByPreorder_byList
//tr	 		: This function is for "TREE" data structure
//nextNodeByPreorder	: This function returns "NEXT NODE" by "PREORDER"
//byList		: This function was implemented "BY (linked)LIST" ADT too.

tr_nd_bylist* tr_nextNodeByPreorder_byList(tr_nd_bylist *node) {

	if (tr_bi_isInternal_byList(node)) {

		if (tr_bi_isLeftChildExist_byList(node)) return tr_bi_leftChild_byList(node);
		else 					 return tr_bi_rightChild_byList(node);
	}	
	
	tr_nd_bylist* tmpnode;
	tmpnode = node->parent;
	if (tmpnode == NULL)return;

	while (1) {
		while (node != tr_bi_leftChild_byList(tmpnode)) {

			if (tr_bi_isRootNode_byList(tmpnode)) {
				//한바퀴 돌아 다시 root node 로 돌아오는 케이스.
				return NULL;
			}
			node = tmpnode;
			tmpnode = tmpnode->parent;
		}
		if (tr_bi_isRightChildExist_byList(tmpnode)) return tr_bi_rightChild_byList(tmpnode);

		node = tmpnode;
		tmpnode = tmpnode->parent;
		if (tmpnode == NULL)return;
	}
}
```

### HW5 : Tree

```C
int tr_bi_findSizeOfSubTree(tr_nd_bylist* node) {
	
	int k = 0;
	return tr_bi_eulerTour_byList(node, &k);
}

int tr_bi_eulerTour_byList(tr_nd_bylist *node, int *k) {


	tr_bi_visitLeft(node, k);
	if (tr_bi_isLeftChildExist_byList(node)) {
		tr_bi_eulerTour_byList(node->children_list->left, k);
	}
	tr_bi_visitBelow(node, k);
	if (tr_bi_isRightChildExist_byList(node)) {
		tr_bi_eulerTour_byList(node->children_list->right, k);
	}
	tr_bi_visitRight(node, k);

	return node->euler_size;
}

int tr_bi_visitLeft(tr_nd_bylist *node, int *k) {
	*k = *k + 1;
	node->euler_left = *k;
}

void tr_bi_visitBelow(tr_nd_bylist *node) {

}

int tr_bi_visitRight(tr_nd_bylist *node, int *k) {
	node->euler_size = *k - node->euler_left + 1;
	return node->euler_size;

}
```
