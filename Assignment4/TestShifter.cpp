// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Shifter.h"
#include "Autobot.h"
#include "Decepticon.h"

TEST(Shifter, constructor) {
    Shifter shifter(200, 200);
    bool fl = (200 == shifter.getSize());
    fl = fl & (200 == shifter.getWeight());
    EXPECT_EQ(1, fl);
}

TEST(Shifter, LessThanOperator) {
    Shifter shifter1;
    Shifter shifter2;
    shifter2.setSize(500);
    bool fl = shifter1 < shifter2;
    shifter1.setSize(1000);
    fl = fl & !(shifter1 < shifter2);
    EXPECT_EQ(1, fl);
}

TEST(Shifter, GreaterThanOperator) {
    Shifter shifter1;
    Shifter shifter2;
    shifter2.setSize(500);
    bool fl = shifter2 > shifter1;
    shifter1.setSize(1000);
    fl = fl & !(shifter2 > shifter1);
    EXPECT_EQ(1, fl);
}

TEST(Shifter, OutputStreamOperator) {
    Shifter shifter;
    std::ostringstream oss;
    oss << shifter;
    std::string expectedOutput = "Level: 1; Strength: 100; Range: 100; Fuel: 100; Ammo: 100; Gun: 401 1; Size: 100; Weight: 100";
    EXPECT_EQ(oss.str(), expectedOutput);
}


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
