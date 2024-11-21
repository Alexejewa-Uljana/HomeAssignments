// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Decepticon.h"

TEST(Decepticon, constructor)
{
    Decepticon decepticon(200, 200);
    bool fl = (200 == decepticon.getLevel_of_evil());
    fl = fl & (200 == decepticon.getLevel_of_deception());
    EXPECT_EQ(1, fl);
}

TEST(decepticon, LessThanOperator)
{
    Decepticon decepticon1;
    Decepticon decepticon2;
    decepticon2.setLevel_of_evil(500);
    bool fl = decepticon1 < decepticon2;
    decepticon1.setLevel_of_evil(1000);
    fl = fl & !(decepticon1 < decepticon2);
    EXPECT_EQ(1, fl);
}

TEST(decepticon, GreaterThanOperator)
{
    Decepticon decepticon1;
    Decepticon decepticon2;
    decepticon2.setLevel_of_evil(500);
    bool fl = decepticon2 > decepticon1;
    decepticon1.setLevel_of_evil(1000);
    fl = fl & !(decepticon2 > decepticon1);
    EXPECT_EQ(1, fl);
}


TEST(Decepticon, OutputStreamOperator)
{
    Decepticon decepticon;
    std::ostringstream oss;
    oss << decepticon;
    std::string expectedOutput = "Level: 1; Strength: 100; Range: 100; Fuel: 100; Ammo: 100; Gun: 401 1; Level of evil: 100; Level of deception: 100";
    EXPECT_EQ(oss.str(), expectedOutput);
}

TEST(Decepticon, getLevel_of_evil)
{
    Decepticon decepticon;
    EXPECT_EQ(100, decepticon.getLevel_of_evil());
}

TEST(Decepticon, setLevel_of_evil)
{
    Decepticon decepticon;
    decepticon.setLevel_of_evil(1000);
    EXPECT_EQ(1000, decepticon.getLevel_of_evil());
}

TEST(Decepticon, getLevel_of_deception)
{
    Decepticon decepticon;
    EXPECT_EQ(100, decepticon.getLevel_of_deception());
}

TEST(Decepticon, setLevel_of_deception)
{
    Decepticon decepticon;
    decepticon.setLevel_of_deception(1000);
    EXPECT_EQ(1000, decepticon.getLevel_of_deception());
}

TEST(Decepticon, evil_attack)
{
    Decepticon decepticon;
    decepticon.evil_attack();
    bool fl_evil_attack = (decepticon.getLevel_of_deception() == 101) and (decepticon.getLevel_of_evil() == 101);
    EXPECT_EQ(true, fl_evil_attack);
}

TEST(Decepticon, act_of_kidness)
{
    Decepticon decepticon;
    decepticon.act_of_kidness();
    EXPECT_EQ(99, decepticon.getLevel_of_evil());
}
