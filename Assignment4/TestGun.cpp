// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Gun.h"

TEST(Gun, constructor) {
    Gun gun(500, 500);
    bool fl = (500 == gun.getPower());
    fl = fl & (500 == gun.getStrength());
    EXPECT_EQ(1, fl);
}

TEST(Gun, LessThanOperator) {
    Gun gun1;
    Gun gun2;
    gun2.setPower(500);
    bool fl = gun1 < gun2;
    gun1.setPower(1000);
    fl = fl & !(gun1 < gun2);
    EXPECT_EQ(1, fl);
}

TEST(Gun, LassGreaterOperator) {
    Gun gun1;
    Gun gun2;
    gun2.setPower(500);
    bool fl = gun2 > gun1;
    gun1.setPower(1000);
    fl = fl & !(gun2 > gun1);
    EXPECT_EQ(1, fl);
}


TEST(Gun, OutputStreamOperator) {
    Gun gun;
    std::ostringstream oss;
    oss << gun;
    std::string expectedOutput = "Power of gun = 100, strength of gun = 100";
    EXPECT_EQ(oss.str(), expectedOutput);
}


TEST(Gun, getPower) {
    Gun gun;
    EXPECT_EQ(100, gun.getPower());
}

TEST(Gun, setPower) {
    Gun gun;
    gun.setPower(1000);
    EXPECT_EQ(1000, gun.getPower());
}

TEST(Gun, getStrength) {
    Gun gun;
    EXPECT_EQ(100, gun.getStrength());
}

TEST(Gun, setStrength) {
    Gun gun;
    gun.setStrength(1000);
    EXPECT_EQ(1000, gun.getStrength());
}

TEST(Gun, attack) {
    Gun gun;
    gun.setPower(2);
    gun.setStrength(2);
    gun.attack();
    gun.attack();
    gun.attack();
    bool fl_attack = (gun.getPower() == 0) and (gun.getStrength() == 0);
    EXPECT_EQ(true, fl_attack);
}
