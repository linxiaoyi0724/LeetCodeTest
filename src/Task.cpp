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



