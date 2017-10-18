# 单元测试

如果你听说过“测试驱动开发”（TDD：Test-Driven Development），单元测试就不陌生。单元测试是用来对一个模块、一个函数或者一个类来进行正确性检验的测试工作。

![test](../../../res/img/test.jpg)

<div align = center>
<i>Image source: http://simply-the-test.blogspot.com</i>
</div>

<br />

### 我们讨厌测试

如果说为什么我们的项目没有测试，以下总是我们的借口：

1. 单元测试是什么
2. 不知道怎么编写单元测试
3. 项目小或者项目没有要求编写单元测试
4. 单元测试是在浪费时间
5. 项目赶进度，没有足够的时间编写测试


### 重要性

既然测试是程序员十分厌倦的一个活动。测试能给我们带来什么？了解这些是非常重要的，虽然测试不可能保证一个程序是完全正确的，但是测试却可以增强我们对程序完整的信心，测试可以让我们相信程序做了我么期望它做的事情。测试能够使我们尽早的发现程序的 bug 和不足。一个 bug 被隐藏的时间越长，修复这个 bug 的代价就越大。

当然，我们主要讨论的是单元测试。单元测试是一个方法层面上的测试，也是最细粒度的测试。用于测试一个类的每一个方法都已经满足了方法的功能要求。在开发中，对于自己开发的模块，只有在通过单元测试之后，才能提交到 Git 库中。

总结三个最主要的原因：

1. 知道你的代码是否真的可以运行。
2. 减少Bug带来的痛苦，帮你省下大量的时间和精力。
3. 帮助你在集成或发布前，确保你的代码是可靠的。

### 如何单元测试

我们将在接下来各个语言的工作流中介绍具体的单元测试框架，一些单元测试的设计准则可参考推荐材料中的几篇文章。

> **Tips:** 即使我们讨厌测试，也要将测试变成我们的习惯。

### 推荐材料

[单元测试准则](https://github.com/yangyubo/zh-unit-testing-guidelines)

[Writing Great Unit Tests: Best and Worst Practices](http://blog.stevensanderson.com/2009/08/24/writing-great-unit-tests-best-and-worst-practises/)

[How to write “good” unit tests?](https://softwareengineering.stackexchange.com/questions/21133/how-to-write-good-unit-tests)
