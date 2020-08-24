/*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 示例:
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 */

/*
 * // task1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for(int i = 0; i < nums.size();i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {2, 7 , 11 , 15};
    vector<int> result;
    int target = 9;
    Solution task1;
    result = task1.twoSum(nums, target);
    for(int i=0 ; i< result.size();i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
*/








/*
小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，小A 每次也从 1, 2, 3 中选择一个猜。他们一共进行三次这个游戏，请返回 小A 猜对了几次？

输入的guess数组为 小A 每次的猜测，answer数组为 小B 每次的选择。guess和answer的长度都等于3。

示例 1：
输入：guess = [1,2,3], answer = [1,2,3]
输出：3
解释：小A 每次都猜对了。

示例 2：
输入：guess = [2,2,3], answer = [3,2,1]
输出：1
解释：小A 只猜对了第二次。

限制：

guess的长度 = 3
answer的长度 = 3
guess的元素取值为 {1, 2, 3} 之一。
answer的元素取值为 {1, 2, 3} 之一。
*/
// task2
/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int times = 0;
        for(int i = 0; i < 3; i++)
        {
            if(guess[i] == answer[i])
            {
                times++;
            }
        }
        return times;
    }
};
int main()
{
    vector<int> gusess;
    vector<int> answer;
    int temp;
    for(int i = 0; i < 3; i++)
    {
        cin >> temp;
        gusess.push_back(temp);
    }

    for(int i = 0; i < 3; ++i)
    {
        cin >> temp;
        answer.push_back(temp);
    }

    Solution sl;
    int times = sl.game(gusess, answer);
    cout << "right times is " << times << endl;
}
*/









/*
 给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
J 中的字母不重复，J 和 S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。

示例 1:
输入: J = "aA", S = "aAAbbbb"
输出: 3

示例 2:
输入: J = "z", S = "ZZ"
输出: 0
*/



//task3
/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(int i =0; i < J.size(); i++)
        {
            for(int j = 0 ; j < S.size(); j++)
            {
                if(J[i] == S[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    std::string J,S;
    std::cout << "qing shu ru ni de bao shi lei xing: ";
    getline(std::cin, J);
    std::cout << "qing shu ru ni de shi tou lei xing: ";
    getline(std::cin,S);
    Solution sl;
    int count = sl.numJewelsInStones(J,S);
    std::cout << "numers Jevels in stones is : " << count << std::endl;
    return 0;
}
*/






/*
给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。

示例 1：
输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"

示例 2：
输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"
*/


/*
//task 4
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = address.size(); i >=0 ; i--)
        {
            if(address[i] == '.')
            {
                address.replace(i, 1, "[.]");
            }
        }
        return address;
    }
};
int main()
{
    std::string address;
    std::cin >> address;
    Solution sl;
    string addressResult = sl.defangIPaddr(address);
    std::cout <<addressResult<<std::endl;
    return 0;
}
*/





/*
请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
现有一个链表 -- head = [4,5,1,9]，它可以表示为:

示例 1:
输入: head = [4,5,1,9], node = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.

示例 2:
输入: head = [4,5,1,9], node = 1
输出: [4,5,9]
解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.

*/

/*
//task5
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};

int main()
{
    ListNode *head, *p;
    int data;
    head = new ListNode(0);
    p = head;
    std::cout <<"please input your data: ";
    std::cin >>data;
    while (std::cin)
    {
        ListNode *node;
        node = new ListNode(data);
        p->next = node;
        p = node;
        std::cout <<"please inpur your data(q to quit):";
        std::cin >>data;
    }
    head = head->next;

    std::cout <<"please input your delete data: ";
    std::cin.clear();
    std::cin.ignore();
    int deleteData;
    std::cin >> deleteData;
    ListNode *q = head;
    while (q != NULL)
    {
        if(q->val == deleteData)
        {
            Solution sl;
            sl.deleteNode(q);
        }
        else
        {
            std::cout << q->val<<std::endl;
            q = q->next;
        }
    }
    return 0;
}
*/






/*
//task 6
给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。

示例 1：
输入：n = 234
输出：15 
解释：
各位数之积 = 2 * 3 * 4 = 24 
各位数之和 = 2 + 3 + 4 = 9 
结果 = 24 - 9 = 15

示例 2：
输入：n = 4421
输出：21
解释： 
各位数之积 = 4 * 4 * 2 * 1 = 32 
各位数之和 = 4 + 4 + 2 + 1 = 11 
结果 = 32 - 11 = 21
*/


/*
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while ( n != 0)
        {
            int remainder = n % 10;
            product *= remainder;
            sum += remainder;
            n = n / 10;
        }
        return product - sum; 
    }
};

#include <iostream>
int main()
{
    int data;
    std::cout << "Please input your data: ";
    std::cin>>data;
    Solution sl;
    int result = sl.subtractProductAndSum(data);
    std::cout << "result: " << result<<std::endl;
    return 0;
}
*/









/*
//task 7

平面上有 n 个点，点的位置用整数坐标表示 points[i] = [xi, yi]。请你计算访问所有这些点需要的最小时间（以秒为单位）。
你可以按照下面的规则在平面上移动：
每一秒沿水平或者竖直方向移动一个单位长度，或者跨过对角线（可以看作在一秒内向水平和竖直方向各移动一个单位长度）。
必须按照数组中出现的顺序来访问这些点。
 

示例 1：
输入：points = [[1,1],[3,4],[-1,0]]
输出：7
解释：一条最佳的访问路径是： [1,1] -> [2,2] -> [3,3] -> [3,4] -> [2,3] -> [1,2] -> [0,1] -> [-1,0]   
从 [1,1] 到 [3,4] 需要 3 秒 
从 [3,4] 到 [-1,0] 需要 4 秒
一共需要 7 秒

示例 2：
输入：points = [[3,2],[-2,2]]
输出：5
*/

/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime = 0;
        for(int i = 0; i < points.size()-1;i++)
        {
            int minX = abs(points[i][0] - points[i+1][0]);
            int minY = abs(points[i][1] - points[i+1][1]);
            minTime += minX>minY?minX:minY;
        }
        return minTime;
    }
};
int main()
{
    
    int numPoints;
    cout << "How many points do you want to input? ";
    cin >>numPoints;
    vector<vector<int>> points(numPoints,vector<int>(2));
    for(int i = 0; i < numPoints; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>points[i][j];
        }
    }
    Solution sl;
    int minTimes = sl.minTimeToVisitAllPoints(points);
    std::cout << "Min times: "<<minTimes <<endl;
    return 0;
}
*/





/*
// task 8
在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
返回可以通过分割得到的平衡字符串的最大数量。


示例 1：
输入：s = "RLRRLLRLRL"
输出：4
解释：s 可以分割为 "RL", "RRLL", "RL", "RL", 每个子字符串中都包含相同数量的 'L' 和 'R'。

示例 2：
输入：s = "RLLLLRRRLR"
输出：3
解释：s 可以分割为 "RL", "LLLRRR", "LR", 每个子字符串中都包含相同数量的 'L' 和 'R'。

示例 3：
输入：s = "LLLLRRRR"
输出：1
解释：s 只能保持原样 "LLLLRRRR".
*/



/*
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:                                                                                                     
    int balancedStringSplit(string s) {
        int lNum = 0;
        int BalStrNum= 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
            {
                lNum ++;
            }
            else
            {
                lNum --;
            }
            if(lNum == 0)
            {
                BalStrNum ++;
            }  
        }    
        return BalStrNum;    
    }
};

int main()
{
    string s;
    cout << "Please input your string: ";
    getline(cin,s);
    cout << "The String is : " << s << endl;
    Solution sl;
    int number = sl.balancedStringSplit(s);
    cout << "The banlanced string split number is: " << number <<endl;
    return 0;
}
*/





/*
//Task 9
实现一个算法，确定一个字符串 s 的所有字符是否全都不同。

示例 1：
输入: s = "leetcode"
输出: false 

示例 2：
输入: s = "abc"
输出: true
限制：

0 <= len(s) <= 100
如果你不使用额外的数据结构，会很加分。
*/


/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isUnique(string astr) 
    {
        for(int i = 1; i < astr.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(astr[i] == astr[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    string test;
    cout << "Please input your string:";
    cin >> test;
    
    Solution sl;
    bool flag = sl.isUnique(test);
    if(flag)
    {
        cout << "true" <<endl;
    }
    else
    {
        cout << "false" <<endl;
    }
    
    return 0;
}
*/



/*
//Task 10

编写一个方法，找出两个数字a和b中最大的那一个。不得使用if-else或其他比较运算符。

示例：

输入： a = 1, b = 2
输出： 2

*/

/*
#include <iostream>
class Solution {
public:
    int maximum(int a, int b) {
        return(a > b ? a : b);
    }
};

int main()
{
    int a,b, maxVal;
    std::cout << "please input a value and b value:";
    std::cin >> a >> b;
    Solution sl;
    maxVal = sl.maximum(a,b);
    std::cout << "The more bigger is " << maxVal << std::endl;
    return 0;
}
*/












/*
//Task 11
编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。

示例：
输入: numbers = [1,2]
输出: [2,1]
提示：

numbers.length == 2

*/

/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers)
    {
        numbers[0] = numbers[0] - numbers[1];
        numbers[1] = numbers[0] + numbers[1];
        numbers[0] = numbers[1] - numbers[0];
        return numbers;
    }
};

int main()
{
    vector<int> num(2);
    cout << "please input your number: ";
    for(int i =0 ; i <2; i++)
    {
        cin >>num[i];
    }

    Solution sl;
    num = sl.swapNumbers(num);
    cout << "[" << num[0] << "," <<num[1] << "]";
    return 0;

}
*/






/*
//Task 12
给两个整数数组 A 和 B ，返回两个数组中公共的、长度最长的子数组的长度。

示例：
输入：
A: [1,2,3,2,1]
B: [3,2,1,4,7]
输出：3
解释：
长度最长的公共子数组是 [3, 2, 1] 。
*/


/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) 
    {
        int ans = 0;
        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0; j < B.size(); j++)
            {
                int k =0;
                bool flag = false;
                while (i+k < A.size() && j+ k < B.size() &&A[i+k] == B[j+k])
                {
                    k++;
                    flag = true;
                }
                ans = ans >k?ans:k;
                if(flag &&j+k == B.size()-1)
                {
                    return ans;
                }
            }

        }
        return ans;
    }
};
int main()
{
    vector<int> v1 = {1,2,3,2,1};
    vector<int> v2 = {3,2,1,4,7};
    Solution sl;
    int num = sl.findLength(v1, v2);
    cout << num <<endl;
    return 0;
}
*/



/*
//Task 13
实现一种算法，删除单向链表中间的某个节点（即不是第一个或最后一个节点），假定你只能访问该节点。

示例：

输入：单向链表a->b->c->d->e->f中的节点c
结果：不返回任何数据，但该链表变为a->b->d->e->f
*/

/*
#include <string>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution
{
public:
    void deleteNode(ListNode* node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main()
{
    ListNode *head, *p;
    head = new ListNode(0);
    p = head;

    int v;
    while (cin>>v)
    {
        ListNode* n = new ListNode(v);
        head->val = n->val;
        p->next = n;
        p = n;
    }

    head = head->next;
    ListNode *m = head;
    while (m !=NULL)
    {
        cout << m->val;
        m = m->next;
        if(m != NULL)
        {
            cout << "->";
        }
        
    }
    ListNode* d = head;
    for(int i = 0 ;i < 3; i++)
    {
         d = d->next;
    }
    Solution sl;
    sl.deleteNode(d);
        while (head !=NULL)
    {
        cout << head->val;
        head = head->next;
        if(head != NULL)
        {
            cout << "->";
        }
        
    }
    return 0;
}
*/







//Task 14
/*
实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。

注意：本题相对原题稍作改动

示例：

输入： 1->2->3->4->5 和 k = 2
输出： 4
*/


/*
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x ):val(x),next(NULL){}
};


class Solution
{
public:
    int kthToLast(ListNode* head,int k)
    {
        ListNode *pCount = head;
        ListNode *pIter = head;
        int i  =0;
        while (pCount != NULL)
        {
            i++;
            pCount = pCount->next;
        }
        for(int j =0; j < i-k;j++)
        {
            pIter = pIter->next;
        }
        return pIter->val;
    }
};

int main()
{
    ListNode *head, *p, *pDisplay;
    head = new ListNode(0);
    p = head;
    int value, k;
    std::cout << "input list value:";
    while (std::cin>>value)
    {
        ListNode *temp = new ListNode(value);
        p->next = temp;
        p = temp;
        std::cout << "input list value:";
    }
    head = head->next;

    std::cin.clear();
    std::cin.ignore();
    std::cout << "input k:";
    std::cin >>k;
    pDisplay = head;

    while (pDisplay!=NULL)
    {
        std::cout << pDisplay->val;
        
        if(pDisplay->next != NULL)
        {
            std::cout << "->";
        }
        pDisplay = pDisplay->next;
    }

    std::cout << std::endl;
    Solution sl;
    int kVal = sl.kthToLast(head,k);
    std::cout << kVal <<std::endl;
    return 0;
    
}
*/






//Task 15
/*
实现一个MyQueue类，该类用两个栈来实现一个队列。


示例：

MyQueue queue = new MyQueue();

queue.push(1);
queue.push(2);
queue.peek();  // 返回 1
queue.pop();   // 返回 1
queue.empty(); // 返回 false

说明：

你只能使用标准的栈操作 -- 也就是只有 push to top, peek/pop from top, size 和 is empty 操作是合法的。
你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）。
*/

/*
#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
public:
	stack<int> st1, st2;
	MyQueue() {}

	void Push(int x)
	{
		st1.push(x);
	}

	int Pop()
	{
		if (st2.empty())
		{
			while (!st1.empty())
			{
				st2.push(st1.top());
				st1.pop();
			}
		}

		int ret = st2.top();
		st2.pop();
		return ret;
	}

	int Peek()
	{
		if (st2.empty())
		{
			while (!st1.empty())
			{
				st2.push(st1.top());
				st1.pop();
			}
		}

		return st2.top();
	}

	bool Empty()
	{
		if (st2.empty())
		{
			while (!st1.empty())
			{
				st2.push(st1.top());
				st1.pop();
			}
		}

		return st2.empty();
	}
};

int main()
{
	MyQueue *obj = new MyQueue();
	obj->Push(1);
	obj->Push(2);
	obj->Push(3);

	int param_2 = obj->Pop();
	int param_3 = obj->Peek();
	bool param_4 = obj->Empty();

	cout << param_2 << endl;
	cout << param_3 << endl;
	cout << param_4 << endl;

	return 0;
}
*/




/*
//Task 16
编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。

示例1 :

输入：[1, 2, 3, 3, 2, 1]
输出：[1, 2, 3]
示例2 :

	输入：[1, 1, 1, 1, 2]
	输出：[1, 2]
	提示：

	链表长度在[0, 20000]范围内。
	链表元素在[0, 20000]范围内。
	进阶：

	如果不得使用临时缓冲区，该怎么解决？
*/

/*
#include <string>
#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeDuplicateNodes(ListNode* head) {
        ListNode *pl = head;
        while (pl != NULL)
        {
            ListNode *pr = pl;
            while (pr->next != NULL)
            {
                if(pr->next->val == pl->val)
                {
                    pr->next = pr->next->next;
                }
                else
                {
                    pr = pr->next;
                }
            }
            pl = pl->next;
        }
	}
};

int main()
{
	ListNode *head, *p, *display;
	head = new ListNode(0);
	p = head;
	int v;
	while (cin >> v)
	{
		ListNode *temp = new ListNode(v); 
		p->next = temp;
		p = temp;
	}
	head = head->next;

    ListNode* rn = head;
    Solution sq;
    sq.removeDuplicateNodes(rn);

	display = head;
	cout << "[";
	while (display!= NULL)
	{
		cout << display->val ;
		display = display->next;
		if (display)
			cout << ",";
	}
	cout << "]";
	return 0;
}
*/



