// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Autobot.h"

TEST(Autobot, getLevel_of_kidness) {
    Autobot autobot;
    EXPECT_EQ(100, autobot.getLevel_of_kidness());
}

TEST(Autobot, setLevel_of_kidness) {
    Autobot autobot;
    autobot.setLevel_of_kidness(1000);
    EXPECT_EQ(1000, autobot.getLevel_of_kidness());
}

TEST(Autobot, getHappiness_level) {
    Autobot autobot;
    EXPECT_EQ(100, autobot.getHappiness_level());
}

TEST(Autobot, setHappiness_level) {
    Autobot autobot;
    autobot.setHappiness_level(1000);
    EXPECT_EQ(1000, autobot.getHappiness_level());
}

TEST(Autobot, getLevel_of_greatness) {
    Autobot autobot;
    EXPECT_EQ(100, autobot.getLevel_of_greatness());
}

TEST(Autobot, setLevel_of_greatness) {
    Autobot autobot;
    autobot.setLevel_of_greatness(1000);
    EXPECT_EQ(1000, autobot.getLevel_of_greatness());
}

TEST(Autobot, attack_against_evil) {
    Autobot autobot;
    autobot.attack_against_evil();
    bool fl_attack_against_evil = (autobot.getLevel_of_greatness() == 101) and (autobot.getHappiness_level() == 101);
    EXPECT_EQ(true, fl_attack_against_evil);
}

TEST(Autobot, attack_against_decepticon) {
    Autobot autobot;
    autobot.attack_against_decepticon();
    EXPECT_EQ(true, autobot.getLevel_of_greatness() == 101);
}
