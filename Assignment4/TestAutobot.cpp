// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Autobot.h"

TEST(Autobot, constructor) {
    Autobot autobot(200, 200, 200);
    bool fl = (200 == autobot.getLevel_of_kidness());
    fl = fl & (200 == autobot.getHappiness_level());
    fl = fl & (200 == autobot.getLevel_of_greatness());
    EXPECT_EQ(1, fl);
}

TEST(Autobot, LessThanOperator) {
    Autobot autobot1;
    Autobot autobot2;
    autobot2.setHappiness_level(500);
    bool fl = autobot1 < autobot2;
    autobot1.setHappiness_level(1000);
    fl = fl & !(autobot1 < autobot2);
    EXPECT_EQ(1, fl);
}

TEST(Autobot, GreaterThanOperator) {
    Autobot autobot1;
    Autobot autobot2;
    autobot2.setHappiness_level(500);
    bool fl = autobot2 > autobot1;
    autobot1.setHappiness_level(1000);
    fl = fl & !(autobot2 > autobot1);
    EXPECT_EQ(1, fl);
}

TEST(Autbot, OutputStreamOperator) {
    Autobot autobot;
    std::ostringstream oss;
    oss << autobot;
    std::string expectedOutput = "Level: 1; Strength: 100; Range: 100; Fuel: 100; Ammo: 100; Gun: 401 1; Level of kidness: 100; Happiness level: 100; Level of greatness: 100";
    EXPECT_EQ(oss.str(), expectedOutput);
}




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
