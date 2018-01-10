#include <gtest/gtest.h>
#include "abacus/tensor.h"

int hello() {
    return 1;
}

TEST(ShapeTest, test0) {
    abacus::Shape<2> a;
    a.shape_[0] = 2;
    a.shape_[1] = 1;
    
    abacus::Shape<2> b(a);

    EXPECT_EQ(2, a[0]);
    EXPECT_EQ(1, a[1]);

    EXPECT_EQ(2, b[0]);
    EXPECT_EQ(1, b[1]);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
