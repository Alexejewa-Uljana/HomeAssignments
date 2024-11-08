// Алексеева Ульяна st129990@student.spbu.ru

#include "gtest/gtest.h"
#include "Degree.h"

TEST(Degree, constructor) {
    Degree degree(30, 1);
    bool fl = (30 == degree.getDegree());
    fl = fl & (1 == degree.getPeriod());
    EXPECT_EQ(1, fl);
}

TEST(Degree, LessThanOperator) {
    Degree degree1;
    Degree degree2;
    degree2.setDegree(30);
    bool fl = degree1 < degree2;
    degree1.setDegree(60);
    fl = fl & !(degree1 < degree2);
    EXPECT_EQ(1, fl);
}

TEST(Degree, LassGreaterOperator) {
    Degree degree1;
    Degree degree2;
    degree2.setDegree(30);
    bool fl = degree2 > degree1;
    degree1.setDegree(60);
    fl = fl & !(degree2 > degree1);
    EXPECT_EQ(1, fl);
}

TEST(DEGREE, OutputStreamOperator) {
    Degree degree;
    std::ostringstream oss;
    oss << degree;
    std::string expectedOutput = "Degree = 0";
    EXPECT_EQ(oss.str(), expectedOutput);
}



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
