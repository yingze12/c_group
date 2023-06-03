#include <iostream>
#include <cstring>
using namespace std;
// 本次会议主要讨论学习了4.1-4.7。加深了对数组的理解，
// 区别char,string, 对get(),getline()做比较，结构体、公用体、枚举和指针的作用

// 1. 数组
// 数组的初始化很简单,就书上的那几种,需要注意的就是narrowing问题,比如
// int main(){
//     int p = {25,92,16.0} //这个就不行,因为16.0是浮点类型,而我们预设的数组是int类型
//     char a = {"A","B",4645656}//这个也不可以,因为char的长度是8,2^8=256
// }

// 2. 字符串和string类

// int main()
// {
//     using namespace std;
//     char ch[5] = {'a', 'b', 'c', 'd'};
//     char ch_2[2] = {'e', '\0'}; 
//     //后面有'\0'才代表一个字符串,如果后面去掉去掉空字符,那么他将不是字符串组,你在运行
//     // strcpy、strlen等的时候可能就会出错,因为strcpy、strlen等在运行的时候都是去读取'\0',
//     // 读到的时候就截止计算.

// // problem? 
//     // strcpy(ch_2, "string");
//     strcpy(ch_2, ch);

//     cout << ch_2 << endl;
//     cout << ch << endl;
//     // printf("no \0: ",strlen(ch));
//     return 0;
// }

// 这里主要是发现了一个奇怪的现象:当使用strcpy()的时候,它会把原本的数据给修改掉,如果你把鼠标放在strcpy上面
// 它会提示你第二位是const类型,char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src)
// 也就是说默认不会改变它的数据.但是却改变了.
// 这里,我的理解是这样的,它要求输入的是一个const类型,否则就会变,比如下一个例子:
// int main(){
//     const char ch[4] = {'A','B','C','\0'};
//     char ch_2[5] = {'g','\0'};

//     strcpy(ch_2,ch);
//     cout<< "ch_2: "<<ch_2 << endl;
//     cout<< ch ;
//     return 0;
// }

// #TUDO 那么你们的理解是什么?



// 拓展:
// 另外有一点需要注意,char是一个字符数组,元素只能是单引号,string是一个字符串,需要用双引号
// 单引号和双引号引号意义是不一样的,字符组类型char和string的长度也是不一样的
// int main(){
//     cout << sizeof(string) <<endl; //32
//     cout << sizeof(char) <<endl; //1
//     cout << sizeof(int);//4
//     return 0;
// }
// 然后字符数的不同形式(注意去区别):
// int main(){
//     char ch = 'A' ;
//     cout<< sizeof(ch)<< endl;
//     char str[] = "ABC";
//     cout<< sizeof(str)<< endl;
//     char ch_2[4] = {'A','B','C','\0'};
//     cout << sizeof(ch_2)<< endl;
//     return 0;
// }

// 字符组相对于字符串的优势:
// 字符组不能赋值,字符串可以赋值.其实不止是字符组,其他类型的数组也不能,后面的结构体可以赋值
// 比如:
// int main(){
//     char ch_1[] = "asd";
//     char ch_2[] = "zxc";
//     ch_2 = ch_1;
//     cout << ch_2;
//     return 0;
// }//错误示范

// int main(){
//     string str_1 = "adsf";
//     string str_2 = "zxcv";
//     str_1 = str_2;
//     cout << str_1;
//     return 0;
// }//成功案例

// int main(){
//     const int size = 10;
//     char name[size];
//     cout << "enter your name: " << endl;
//     cin >> name;
//     cout << name << endl; 
//     return 0;
// }


// 3. 比较三种输出流输出流区别,cin,cin.get(),cin.getline()
// 通过名字很好区分getline()用于读取整行文本,而get()用于读取字符串,也能读取单个字符
// 区别在于:
// cin:使用空格,制表符,换行符来确定字符串的位置
// cin.get():使用空字符(空格)来确定字符串字符串位置,并保留换行符在输入列当中
// 这样就会导致,你如果分别使用了两个cin.get() 将输入存入两个字符数组中,将出现问题;
// cin.getline():使用空字符(空格)来确定字符串字符串位置,但却删除了输入列中中换行符,
// 它将换行都自动添加到来字符串后面,如果分别使用了两个cin.get() 将输入存入两个字符数组中
// 不会出现问题.

// 如果要纠正cin.get()带来的困扰,只需要这样使用:cin.get(vairable,size).get(),相当于调用了get()函数
// 等价于"
// cin.get(variable_1,size).get()
// cin.get()
// 紧接着
// cin.get(variable_2,size).get()就不会出现问题了
// "
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[15];
//     char dessert[ArSize]; //这里体现体现这样命令字符组字符组优势,可以固定长度
//     char ch;
// // problem2: why not get the third letter? (cin.get)
//     cout << "Enter your name:\n";
//     cin.get(name, 10);
//     // ch = cin.get();
//     cin.get();
//     // cout << ch << endl;
//     cout << "dessert:\n";
//     cin.get(dessert, 20);

//     // cout << dessert << endl;
//     cout << name;

//     return 0;
// }

// 拓展:
//get() 函数用于逐个读取字符，并可以通过检查下一个字符是否是换行符来判断是否读取完毕。
//它的使用方式如下：

// int main() {
//     char ch;
//     while ((ch = std::cin.get()) != '\n') {
//         // 逐个处理字符
//         std::cout << ch;
//     }
//     std::cout << std::endl;

//     return 0;
// }

//根据具体的需求和输入场景，选择使用 get() 还是 getline() 是有所区别的。
//如果你需要逐个处理字符并且需要自行判断何时停止读取，那么使用 get() 是合适的。
//如果你需要读取整行文本并且不需要逐个处理字符，那么使用 getline() 更加方便。



// 4. 结构体
// struct student
// {
//     string name;
//     float height;
// };


// int main()
// {
//     student s[3] = {
//         {"a", 1.0},
//         {"b", 2},
//         {"c", 1.5}
//     };
//     cout << s[0].height;
//     return 0;
// } //这里展示的结构体以数组的形式展现,类似与python中字典中的字典


// #扩展:
// 结构体部分需要注意的是,提前在开头申明,结构体可以是单个也可以是数组形式,
// 可储存不同类型的数据.

// 如何理解结构体,可以考虑如下几个角度:
// 1) 储存不同类型的数据,类似于一个集合
// 2) 创建新类型数据,之后你引用结构体的时侯,比如:
//     struct inflateble{
//         char name[20];
//         float volume;
//         double price;
//     };//注意后面的分号

//     inflateble hat;//这里相当于新定义定义一个数据类型inflateble的变量hat
//     hat.name或者hat.volume是指结构体中中成员
// 3) 类似于python中的class 类,而inflateble hat类似于对象实例化

// 构建结构体提时候,也能直接使用
// struct inflateble{
//         char name[20];
//         float volume;
//         double price;
//     }.hat来初始化对象

// 5. 枚举
// int main()
// {
//     enum spectrum {red, orange, yellow, green};
//     enum spectrum band;
//     band = red;
//     band = 5; //narrowing error "a value of type "int" 
//     //cannot be assigned to an entity of type "spectrum""
//     int c = band
//     // int c;
//     // c = band;
//     cout << band;
//     return 0;
// }

// #扩展
// 枚举enmu也是一种数据类型,是int的一种,但是级别比int小


// 6.指针
// int main()
// {
//     int c = 1;
//     int* p = &c;
//     int *ps; 
//指针的两种写法,推荐使用第一种
// 有一种说法是:指向指针的指针.说明指针其实也是一种数据类型.比如书上有个例子:

// int* pt;
// pt = 0xB8000000;//这肯定试错的,因为指针是一个数据类型,虽然它指向地址,但是却不能直接将0xB8000000给他
// 0xB8000000其实代表的是一个数值,你需要将他强制转为地址类型才可以
// //
// int* pt;
// pt = (int*) 0xB8000000//这样就可以,
//简单地说,指针pointer就是一种类型,叫做指针类型,不等价于地址也不等价于整数型
//当然了,指针的类型也可以是其他的,比如float 

//     cout << &c << endl;
//     cout << p << endl;
//     cout << c << endl;
//     cout << *p << endl;
//     return 0;
// }// *取值,&取地址

// #define pi 3.1415926;
// int main()
// {
//     float f = 1.0f;
//     int g = 1;
//     int h = 1;
//     float* pf = &f;// 指向地址的指针类型必须和数据类型一样
//     int* pg = &g;
//     int* ph = &h;
//     int* p = new int; 

//     cout << p<<endl;
//     cout << pg << endl;;
//     cout << ph;
//     return 0;//根据输出结果你可以发现,使用new的指针地址跟其他的区别很大
//相当于新开辟了空间,这是堆(heap)的概念,很方便使用的.假如你的
// }

// 在C++中，"stack" 表示堆栈，而 "heap" 表示堆。这两个术语用于描述内存的不同分配方式和使用情况：

// 堆栈（stack）是一种自动分配和释放内存的机制，用于存储局部变量和函数调用的上下文信息。
// 它使用堆栈指针（stack pointer）来跟踪分配和释放的内存块。当函数调用结束或局部变量超出作用域时，
// 自动释放在堆栈上分配的内存。堆栈上的内存分配和释放是自动管理的，无需手动干预。

// 堆（heap）是一种动态分配和释放内存的机制，用于存储动态分配的对象和数据结构。
// 在堆上分配的内存需要手动分配和释放。通过使用 new 运算符在堆上分配内存，
// 并使用 delete 运算符释放已分配的内存。堆上的内存分配和释放需要开发人员手动管理，
// 以确保适当的内存使用和避免内存泄漏。

// 在堆栈上分配的内存是自动管理的，它的生命周期与其所在的作用域相关。当函数调用结束或局部变量超出作用域时，
// 自动释放在堆栈上分配的内存。堆栈上的内存分配和释放是非常高效的，因为它们仅仅是通过移动堆栈指针来实现。

// 然而，堆栈上的内存是有限的，其大小通常受限于操作系统或编译器的限制。
// 当需要分配大量内存或需要在函数调用结束后仍然保持数据时，堆栈的可用空间可能会不足，导致堆栈溢出。

// 在这种情况下，可以使用动态内存分配来分配在堆上创建的内存。通过使用 new 运算符，
// 可以在堆上分配一块指定大小的内存，并返回指向该内存的指针。在堆上分配的内存可以在函数调用结束后继续存在，
// 并可以通过指针来引用。需要手动使用 delete 运算符来释放堆上分配的内存，以避免内存泄漏。
//比如:

int main(){
    int size = 10;
    int* pt = new int[size];

    for(int i= 0;i<size;i++){
        pt[i] = i;
    };

    for(int i=0;i<size;i++){
        cout << pt[i];
    };

    delete[] pt;
    return 0;

// }//这里需要注意注意是,如果使用来new,则需要用delete来删除动态地址,但不意味着delete只能用来删除new类型地址
// 然后就是,如果申明指针的时候使用来[],则delete也应该使用[]