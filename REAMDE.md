# 洛谷刷题笔记

本仓库用来记录笨人在[洛谷](luogu.com)上做的题目及其笔记。

## 代码样式

参见 `template.cpp` ，最后的 `/*NOTES*/` 将会被提取整理。

## 按题目整理

使用 `generator.py` 提取整合。### [B2084.cpp](src/B2084.cpp)

#### 分解质因数
最优解[https://www.luogu.com.cn/record/163541460]
a=i, b=n/i，若 a*b=n 则判断可以还原

### [B2105.cpp](src/B2105.cpp)

#### IO优化
```C++
std::cin.tie(0); // 关闭 tie
std::ios::sync_with_stdio(false); // 不和 C 的 IO 混用
```
#### 数组初始化
```C++
array[m][n] = {0}; // 初始化数组
```

### [B3732.cpp](src/B3732.cpp)

建议学习的内容：

- gdb的学习，单步调试和断点
- 排序算法

### [B3827.cpp](src/B3827.cpp)

这是一道简单的结构体排序题目，使用STL里面的 `vector` 和 `stable_sort` 。

