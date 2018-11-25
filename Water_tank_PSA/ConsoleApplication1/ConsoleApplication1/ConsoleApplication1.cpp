#include "pch.h"
#include <iostream>
#include <cstdio>	//cstdio是标准C++（STL），且cstdio中的函数都是定义在一个名称空间std里面的，如果要调用这个名字空间的函数，必须得加std::或者在文件中声明using namespace std。它们提供的内容和相应的旧C头文件相同，只是内容在std中。
#include <vector>

#define IOS std::ios::sync_with_stdio(false)

using namespace std;

struct Node_s
{
	typedef string Str;
	Str NodeIndex,Attr;	//Attr为节点属性，有root、node、Gleaf（事故节点）、Wleaf
	typedef int Int;
	Int time, Pro, K1State, K2State, K3State;	//阀门状态0、1两种状态
	typedef bool Bool;
	Bool isK1OK, isK2OK, isK3OK,Tag;	//Tag关键状态搜索标志（False、True两种状态）
	//Node_c* current;
	
};


class Node_c
{
private:

public:

};


int main()
{
	IOS;

	return 0;
}


