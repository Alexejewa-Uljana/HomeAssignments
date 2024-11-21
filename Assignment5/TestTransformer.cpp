// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"

TEST(Transformer, constructor)
{
    Gun gun;
    gun.setPower(500);
    gun.setStrength(500);
    Transformer transformer(200, 200, 200, 200, 200, &gun);
    bool fl = (200 == transformer.getAmmo());
    fl = fl & (200 == transformer.getFuel());
    fl = fl & (200 == transformer.getRange());
    fl = fl & (200 == transformer.getLevel());
    fl = fl & (200 == transformer.getStrength());
    fl = fl & (500 == transformer.getGun_power());
    fl = fl & (500 == transformer.getGun_strength());
    EXPECT_EQ(1, fl);
}

TEST(Transformer, LessThanOperator)
{
    Transformer transformer1;
    Transformer transformer2;
    transformer2.setLevel(500);
    bool fl = transformer1 < transformer2;
    transformer1.setLevel(1000);
    fl = fl & !(transformer1 < transformer2);
    EXPECT_EQ(1, fl);
}

TEST(Transformer, GreaterThanOperator)
{
    Transformer transformer1;
    Transformer transformer2;
    transformer2.setLevel(500);
    bool fl = transformer2 > transformer1;
    transformer1.setLevel(1000);
    fl = fl & !(transformer2 > transformer1);
    EXPECT_EQ(1, fl);
}

TEST(Transformer, OutputStreamOperator)
{
    Transformer transformer;
    std::ostringstream oss;
    oss << transformer;
    std::string expectedOutput = "Level: 1; Strength: 100; Range: 100; Fuel: 100; Ammo: 100; Gun: 401 1";
    EXPECT_EQ(oss.str(), expectedOutput);
}

TEST(Transformer, getGun_power)
{
    Transformer transformer;
    EXPECT_EQ(401, transformer.getGun_power());
}

TEST(Transformer, getGun_strength)
{
    Transformer transformer;
    EXPECT_EQ(1, transformer.getGun_strength());
}

TEST(Transformer, getAmmo)
{
    Transformer transformer;
    EXPECT_EQ(100, transformer.getAmmo());
}

TEST(Transformer, setAmmo)
{
    Transformer transformer;
    transformer.setAmmo(1000);
    EXPECT_EQ(1000, transformer.getAmmo());
}

TEST(Transformer, getFuel)
{
    Transformer transformer;
    EXPECT_EQ(100, transformer.getFuel());
}

TEST(Transformer, setFuel)
{
    Transformer transformer;
    transformer.setFuel(1000);
    EXPECT_EQ(1000, transformer.getFuel());
}

TEST(Transformer, getRange)
{
    Transformer transformer;
    EXPECT_EQ(100, transformer.getRange());
}

TEST(Transformer, setRange)
{
    Transformer transformer;
    transformer.setRange(1000);
    EXPECT_EQ(1000, transformer.getRange());
}

TEST(Transformer, getStrength)
{
    Transformer transformer;
    EXPECT_EQ(100, transformer.getStrength());
}

TEST(Transformer, setStrength)
{
    Transformer transformer;
    transformer.setStrength(1000);
    EXPECT_EQ(1000, transformer.getStrength());
}

TEST(Transformer, getLevel)
{
    Transformer transformer;
    EXPECT_EQ(1, transformer.getLevel());
}

TEST(Transformer, setLevel)
{
    Transformer transformer;
    transformer.setLevel(2);
    EXPECT_EQ(2, transformer.getLevel());
}

TEST(Transformer, fire)
{
    Transformer transformer;
    transformer.fire();
    bool flag_fire = (transformer.getAmmo() == 99) and (transformer.getGun_power() == 400) and (transformer.getGun_strength() == 0);
    EXPECT_EQ(true, flag_fire);
}

TEST(Transformer, move)
{
    Transformer transformer;
    transformer.move();
    EXPECT_EQ(99, transformer.getFuel());
}

TEST(Transformer, jump)
{
    Transformer transformer;
    transformer.jump();
    EXPECT_EQ(99, transformer.getFuel());
}

TEST(Transformer, ultimate)
{
    Transformer transformer;
    transformer.ultimate();
    EXPECT_EQ(99, transformer.getFuel());
}

TEST(Transformer, turn)
{
    Transformer transformer;
    Degree degree;
    degree.setDegree(30);
    transformer.turn(degree);
    EXPECT_EQ(70, transformer.getAmmo());
}
