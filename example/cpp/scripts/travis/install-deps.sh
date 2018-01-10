#!/bin/bash
# install dependencies
# please run this scripts as root

apt update
git clone https://github.com/google/googletest.git
cd googletest/googletest
cmake .
make
cp *.a /usr/lib
cp -r include/gtest /usr/include

