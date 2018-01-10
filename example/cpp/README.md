# Example C++

[![Build Status](https://travis-ci.org/Shenggan/Example-Cpp.svg?branch=master)](https://travis-ci.org/Shenggan/Example-Cpp)
[![Documentation Status](https://readthedocs.org/projects/example-cpp/badge/?version=latest)](http://example-cpp.readthedocs.io/en/latest/?badge=latest)
[![GitHub license](https://img.shields.io/github/license/mashape/apistatus.svg)](./LICENSE)

[How to Start a Project](https://github.com/Shenggan/How-to-Start-a-Project) 的 C++ 版本的例子。说明了一个崭新的开源项目的基本结构。

### 项目结构

* `include/`

    存放项目的头文件。

* `tests/`

    主要的单元测试的代码，本示例使用的是 [google-test](https://github.com/google/googletest)。

* `docs/`

    文档源代码和编译文件，本示例使用 [Doxygen](http://www.doxygen.nl/) 和 [Sphinx](http://www.sphinx-doc.org/en/stable/) 来管理文档。

* `README.md`

    项目的简介。

* `scripts`

    存放项目所需要的脚本文件，包括 [Travis CI](https://travis-ci.org) 所需要的脚本。

* `LICENSE`

    本项目选择 MIT License。

* `.travis.yml`

    使用 [Travis CI](https://travis-ci.org) 所需要的配置文件。

* `docs.txt`

    A pip requirements file needed to build your documentation.

* `.gitignore`

    git 所忽略的文件和文件夹。
