// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Gun.h"

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
