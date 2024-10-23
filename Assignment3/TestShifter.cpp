// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Shifter.h"
#include "Autobot.h"
#include "Decepticon.h"

TEST(Shifter, getSize) {
    Shifter shifter;
    EXPECT_EQ(100, shifter.getSize());
}

TEST(Shifter, setSize) {
    Shifter shifter;
    shifter.setSize(1000);
    EXPECT_EQ(1000, shifter.getSize());
}

TEST(Shifter, getWeight) {
    Shifter shifter;
    EXPECT_EQ(100, shifter.getWeight());
}

TEST(Shifter, setWeight) {
    Shifter shifter;
    shifter.setWeight(1000);
    EXPECT_EQ(1000, shifter.getWeight());
}

TEST(Shifter, transform_size) {
    Shifter shifter;
    shifter.transform_size();
    EXPECT_EQ(101, shifter.getSize());
}

TEST(Shifter, transform_weight) {
    Shifter shifter;
    shifter.transform_weight();
    EXPECT_EQ(101, shifter.getWeight());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
