// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Decepticon.h"

TEST(Decepticon, getLevel_of_evil) {
    Decepticon decepticon;
    EXPECT_EQ(100, decepticon.getLevel_of_evil());
}

TEST(Decepticon, setLevel_of_evil) {
    Decepticon decepticon;
    decepticon.setLevel_of_evil(1000);
    EXPECT_EQ(1000, decepticon.getLevel_of_evil());
}

TEST(Decepticon, getLevel_of_deception) {
    Decepticon decepticon;
    EXPECT_EQ(100, decepticon.getLevel_of_deception());
}

TEST(Decepticon, setLevel_of_deception) {
    Decepticon decepticon;
    decepticon.setLevel_of_deception(1000);
    EXPECT_EQ(1000, decepticon.getLevel_of_deception());
}

TEST(Decepticon, evil_attack) {
    Decepticon decepticon;
    decepticon.evil_attack();
    bool fl_evil_attack = (decepticon.getLevel_of_deception() == 101) and (decepticon.getLevel_of_evil() == 101);
    EXPECT_EQ(true, fl_evil_attack);
}

TEST(Decepticon, act_of_kidness) {
    Decepticon decepticon;
    decepticon.act_of_kidness();
    EXPECT_EQ(99, decepticon.getLevel_of_evil());
}
