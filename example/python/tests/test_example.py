"""A test scripts"""

import os
from context import example
from example.add import add
import pytest

def test_example():
    """main function"""

    assert add(1, 2) is 3
