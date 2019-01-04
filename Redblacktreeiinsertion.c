#include <stdio.h>
#include <stdlib.h>
  enum nodeColor {
        RED,
        BLACK
  };

  struct rbNode {
        int data, color;
        struct rbNode *link[2];
  };

  struct rbNode *root = NULL;

  struct rbNode * createNode(int data) {
        struct rbNode *newnode;
        newnode = (struct rbNode *)malloc(sizeof(struct rbNode));
        newnode->data = data;
        newnode->color = RED;
        newnode->link[0] = newnode->link[1] = NULL;
        return newnode;
  }

  void insertion (int data) {
        struct rbNode *stack[98], *ptr, *newnode, *xPtr, *yPtr;
        int dir[98], ht = 0, index;
        ptr = root;
        if (!root) {
                root = createNode(data);
                return;
        }
        stack[ht] = root;
        dir[ht++] = 0;
        /* find the place to insert the new node */
        while (ptr != NULL) {
                if (ptr->data == data) {
                        printf("Duplicates Not Allowed!!\n");
                        return;
                }
                index = (data - ptr->data) > 0 ? 1 : 0;
                stack[ht] = ptr;
                ptr = ptr->link[index];
                dir[ht++] = index;
        }
        /* insert the new node */
        stack[ht - 1]->link[index] = newnode = createNode(data);
        while ((ht >= 3) && (stack[ht - 1]->color == RED)) {
                if (dir[ht - 2] == 0) {
                        yPtr = stack[ht - 2]->link[1];
                        if (yPtr != NULL && yPtr->color == RED) {
                                /*
                                 * Red node having red child. B- black, R-red
                                 *     B                R
                                 *    / \             /   \
                                 *   R   R  =>     B     B
                                 *  /               /   
                                 * R               R
                                 */
                                stack[ht - 2]->color = RED;
                                stack[ht - 1]->color = yPtr->color = BLACK;
                                ht = ht -2;
                        } else {
                                if (dir[ht - 1] == 0) {
                                        yPtr = stack[ht - 1];
                                } else {
                                        /*
                                         * XR - node X with red color
                                         * YR - node Y with red color
                                         * Red node having red child
                                         *(do single rotation left b/w X and Y)
                                         *         B             B
                                         *        /             /
                                         *      XR     =>      YR
                                         *        \           /
                                         *         YR        XR
                                         * one more additional processing will be
                                         * performed after this else part.  Since
                                         * we have red node (YR) with red child(XR)
                                         */
                                        xPtr = stack[ht - 1];
                                        yPtr = xPtr->link[1];
                                        xPtr->link[1] = yPtr->link[0];
                                        yPtr->link[0] = xPtr;
                                        stack[ht - 2]->link[0] = yPtr;
                                }
                                /*
                                 *  Red node(YR) with red child (XR) - single
                                 *  rotation b/w YR and XR for height balance. Still,
                                 *  red node (YR) is having red child.  So, change the
                                 *  color of Y to black and Black child B to Red R
                                 *          B           YR          YB
                                 *         /           /  \        /  \
                                 *        YR  =>   XR   B  =>  XR  R
                                 *       /
                                 *      XR
                                 */
                                xPtr = stack[ht - 2];
                                xPtr->color = RED;
                                yPtr->color = BLACK;
                                xPtr->link[0] = yPtr->link[1];
                                yPtr->link[1] = xPtr;
                                if (xPtr == root) {
                                        root = yPtr;
                                } else {
                                        stack[ht - 3]->link[dir[ht - 3]] = yPtr;
                                }
                                break;
                        }
                } else {
                        yPtr = stack[ht - 2]->link[0];
                        if ((yPtr != NULL) && (yPtr->color == RED)) {
                                /*
                                 * Red node with red child
                                 *        B             R
                                 *      /   \         /   \
                                 *     R     R =>  B     B
                                 *             \              \
                                 *              R              R
                                 *
                                 */
                                stack[ht - 2]->color = RED;
                                stack[ht - 1]->color = yPtr->color = BLACK;
                                ht = ht - 2;
                        } else {
                                if (dir[ht - 1] == 1) {
                                        yPtr = stack[ht - 1];
                                } else {
                                        /*
                                         * Red node(XR) with red child(YR) 
                                         *   B          B
                                         *    \          \
                                         *     XR  => YR
                                         *    /            \
                                         *   YR             XR
                                         * Single rotation b/w XR(node x with red color) & YR
                                         */
                                        xPtr = stack[ht - 1];
                                        yPtr = xPtr->link[0];
                                        xPtr->link[0] = yPtr->link[1];
                                        yPtr->link[1] = xPtr;
                                        stack[ht - 2]->link[1] = yPtr;
                                }
                                /*
                                 *   B              YR          YB
                                 *    \             /  \        /  \
                                 *     YR  =>   B   XR => R    XR
                                 *      \
                                 *       XR
                                 * Single rotation b/w YR and XR and change the color to
                                 * satisfy rebalance property.
                                 */
                                xPtr = stack[ht - 2];
                                yPtr->color = BLACK;
                                xPtr->color = RED;
                                xPtr->link[1] = yPtr->link[0];
                                yPtr->link[0] = xPtr;
                                if (xPtr == root) {
                                        root = yPtr;
                                } else {
                                        stack[ht - 3]->link[dir[ht - 3]] = yPtr;
                                }
                                break;
                        }
                }
        }
        root->color = BLACK;
  }
   void inorderTraversal(struct rbNode *node) {
        if (node) {
                inorderTraversal(node->link[0]);
                printf("%d  ", node->data);
                inorderTraversal(node->link[1]);
        }
        return;
  }

  int main() {
        int ch, data;
        while (1) {
                printf("1. Insertion\t2. Traverse\n");
                printf("3. Exit\nEnter your choice:");
                scanf("%d", &ch);
                switch (ch) {
                        case 1:
                                printf("Enter the data to insert:");
                                scanf("%d", &data);
                                insertion(data);
                                break;

                        case 2:
                                inorderTraversal(root);
                                printf("\n");
                                break;
                        case 3:
                                exit(0);
                        default:
                                printf("You have entered wrong option!!\n");
                                break;
                }
                printf("\n");
        }
        return 0;
  }
