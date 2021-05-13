/*
题目描述
在程序员编写程序的时候，通常会引用其他文件，而引用的文件也会引用其它的头文件。但是出现循环引用的现象编译时便会报错。例如A引用了B，B引用了C，C引用了A，那么就产生了循环引用（Circular reference）。考虑另外一个情况，A引用了B和C，B引用D，C引用D，虽然D被引用了两次，但是没有出现循环引用。 

输入
第一行是一个整数T，代表测试数据的组数。每组数据中第一行是一个整数n，代表有多少个引用关系。接下来n行每行有2个字符串a,b，用空格分隔，代表a引用了b。其中T<=50, n<=10^5，每个字符串的长度不超过100。
输出
共T行。若不会产生编译错误则输出Passed，否则输出Failed

样例输入
2
8
client.cpp client.h
client.h server.h
server.cpp server.h
server.h common.h
client.h common.h
common.cpp common.h
common.h gtest.h
common.h glog.h
4
work.cpp client.cpp
client.cpp server.cpp
server.cpp adhoc.cpp
adhoc.cpp work.cpp
样例输出
Passed
Failed

提示
拓扑排序/有向无环图 不可n^2算法
*/
