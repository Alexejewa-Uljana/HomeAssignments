// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Degree.h"

TEST(Degree, getDegree) {
    Degree degree;
    EXPECT_EQ(0, degree.getDegree());
}

TEST(Degree, setDegree) {
    Degree degree;
    degree.setDegree(305);
    EXPECT_EQ(305, degree.getDegree());
}

TEST(Degree, getPeriod) {
    Degree degree;
    EXPECT_EQ(0, degree.getPeriod());
}

TEST(Degree, setPeriod) {
    Degree degree;
    degree.setPeriod(1);
    EXPECT_EQ(1, degree.getPeriod());
}
