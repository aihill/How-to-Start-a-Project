# Example Python

[![Build Status](https://travis-ci.org/Shenggan/Example-Python.svg?branch=master)](https://travis-ci.org/Shenggan/Example-Python)
[![Documentation Status](https://readthedocs.org/projects/example-python/badge/?version=latest)](http://example-python.readthedocs.io/en/latest/?badge=latest)
[![GitHub license](https://img.shields.io/github/license/mashape/apistatus.svg)](./LICENSE)

这个仓库是 [How to Start a Project](https://github.com/Shenggan/How-to-Start-a-Project) 的 Python 版本的例子，说明了一个开源项目的基本结构。

### 项目结构

* `example/`
    
    主要的功能代码，文件夹的名字可以改为项目的名字。

* `tests/`

    主要的单元测试的代码，本示例使用的是 pytest。

* `docs/`

    文档源代码和编译文件，本示例使用 Sphinx 来管理文档。

* `requirements/`

    存放项目依赖，可包括多个文件，`requirements.txt` 包含整个项目的依赖，`docs.txt` 包含文档编译所需要的依赖。

* `README.md`

    项目的基本信息和简介。

* `LICENSE`

    一个项目所选择的协议。本项目选择 MIT License。

* `setup.py`

    用来给用户安装所用的脚本。

* `readthedocs.yml`

    使用 [Read the Docs](https://readthedocs.org) 托管所需要的配置文件。

* `.travis.yml`

    使用 [Travis CI](https://travis-ci.org) 持续集成所需要的配置文件。

* `.gitignore`

    git 所忽略的文件和文件夹。