#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// 如果大家下载的版本是英语版本或者本身就是linux,ios系统,想输入中文字符同时又不想本地化程序,
// 可以下载扩展库google-pinyin. 下载之后使用ctrl+space键切换输入法,很简单

// 快捷键介绍:
// Tab----自动补全
// ctrl+k+c -----多行注释
// ctrl+k+u -----多行取消注释(macbook将ctrl好象是commond命令)

// 笔记大多是霍老弟的,我只是增减了些内容和总结了下.如果其他同学有补充的,可以在这里直接修改.不过,
// 你们可能暂时没哟掌握怎么pull,push github库,所以我在周六的时候会带着大家一起把玩下,
// 下次大家就能同步需改了

// 我稍微讲下我们的要求:
// 1. 我希望每次都有同学主动整理笔记和分享笔记,
// 2. 大家在整理发布击笔记的时候,如果遇到不懂的问题或者自己觉得某处需要研讨研讨地方,
// 请用"#TODU"来标明,就像我下面下面例子的一样!!!!!!!!!!!!!!!!!
// 3. 经常关注github的变化
// 4. 笔记命名格式为 "Number.note_Name.cpp",代表着谁的第几次笔记

// // Abstract:
// 目前为止,我们大概学了两大类型的数据,基本类型如:
// 整数类型:int,short,long,long long
// 浮点数类型: float, double, long double
// 无符号类型:unsinged + typename
// 布尔类型:true,false

// 另哇的已经掌握掌握派生数据类型如:
// 数组,字符,字符串,下次要学的结构体,共用体,指针和引用等等

// 在使用不同的数据类型的时候,要注意以下几点:
// 1. 数据类型类型长度和大小可能根据具体的平台不一样,我感觉我的系统跟你们的就不太一样
// 2. 注意有符号和无符号类型的差别
// 3. TODU 你们来补充......


// 以下是霍同学的笔记:

//unsigned int 从0开始
//int 从负到正

//C++默认数据类型为int和double

//转换
//(1)
//#include <iostream>
//using namespace std;

// int main()
// {
//     cout.setf(ios_base::fixed,ios_base::floatfield);
//     int x = 5;
//     double b = x;
//     cout<<b;
//     return 0;
// }

//(2)
//#include <iostream>
//using namespace std;

//int main()
//{
    //cout.setf(ios_base::fixed,ios_base::floatfield);
    //double y {5.0};
    //cout<<int(y)<<endl;
    //return 0;
//}

//(3)
//#include <iostream>
//using namespace std;

// int main()
// {
//     cout.setf(ios_base::fixed,ios_base::floatfield);
//     int z {10};
//     cout<<(double)z<<endl;
//     cout << "Floatting-point division: 9.0/5.0 = "
//          << 9.0/5.0 <<endl;
//     cout << "double constants: 1e7/9.0 = "
//          << 1e7/9.0 << endl;
    
//     cout << "float constants: 1e7f/9.0f = "
//          << 1e7f/9.0f <<endl;
    
//     // 简而言之,cout.setf命令可以让编译器显示全部的位数,而系统默认默认显示格式是int或者double
//     // 他们的差别体现在最后两个例子
//     return 0;
// }

//C++算数
//#include <iostream>
//#include <cmath>
//using namespace std;

//int main()
//{
    //int x = pow(8,2);
    //cout<<x<<endl;
    //return 0;
//}

//优先级运算double>float>int

//数组
//#include <iostream>
//using namespace std;

// int main()
// {
//     int cards []= {1,2,3,4,5};  //这种方法计算元素个数很糟
//     cout<<cards; //这里直接打印数组的话,显示的其实是他的地址,如果要显示他的元素,得用for循环
// #TODU 我也不太确定是地址还是什么,
//     return 0;
// }

//#include <iostream>
//using namespace std;

//int main()
//{
    //int cards [5]= {1,2,3,4,5};  
    //cout<<sizeof cards/sizeof (int)<<endl;//数组元素个数是5个
    //cout<<sizeof cards<<endl;//数组中总共20个字节
    //return 0;
//}

//#include <iostream>
//using namespace std;

// int main()
// {
//     char cards []= {'1','2','3','4','5','\0'};  //char定义一个字符，存储一个字符，占一个字节
//     cout<<sizeof cards<<endl;//数组中总共6个字节
//     cout<<cards<<endl;//输出数组
//     string str []= {"abcd\0"};//string定义一个字符串
//     cout<<sizeof str<<endl;//数组中总共32个字节
//     cout<<str<<endl;//系统将数组名当作一个地址来输出
//     return 0;
// }

//for循环输出数组
//#include <iostream>
//using namespace std;

// int main()
// {
//     int cards[7]={1,2,3,4,5};
//     for (int i=0;i<7;i++)//用for循环输出int数组内容
//     cout<<cards[i]<<endl;
//     char karten[5]={'a','b','c','d','\0'};
//     for (char i:karten)//for循环的另一种方式，注意‘\0'不输出
//     cout<<i<<endl;
//     return 0;
// }
// 上面这个for循环里面,前者的i类似于下标x1,x2,x3,数组的元素是从0开始;后者相当于遍历数组的元素,
// 把数组的元素直接遍历出来

//#include <iostream>
//#include <cstring>//注意加上函数头在计算字符长度的时候
//using namespace std;

//int main()
//{
    //char cards[10]={'a','b','c','\0','d'};//output=3
    //cout<<strlen(cards)<<endl;//strlen计算char类型的长度
    //string str = "abc\0dss";//output=3
    //cout<<str.length()<<endl;//计算string类型的长度
    //cout<<str.size()<<endl;//两种方式都可以
    
    //return 0;

//}


