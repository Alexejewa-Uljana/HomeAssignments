#include <gtest/gtest.h>
#include "TemplateClass.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

TEST(TemplateClassTest, Class1True) {
    Class1 obj;
    TemplateClass<Class1> templateObj(&obj, 1, {});
    EXPECT_EQ(true, templateObj.foo());
}

TEST(TemplateClassTest, Class1False) {
    Class1 obj;
    TemplateClass<Class1> templateObj(&obj, -1, {});
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateClassTest, Class2True) {
    Class2 obj;
    std::vector<float> vec = {1.0f};
    TemplateClass<Class2> templateObj(&obj, 0, vec);
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateClassTest, Class2False) {
    Class2 obj;
    std::vector<float> vec;
    TemplateClass<Class2> templateObj(&obj, 0, vec);
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateClassTest, Class3True) {
    Class3 obj;
    std::vector<float> vec(2);
    TemplateClass<Class3> templateObj(&obj, -2, vec);
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateClassTest, Class3False) {
    Class3 obj;
    std::vector<float> vec(3);
    TemplateClass<Class3> templateObj(&obj, -4, vec);
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateClass, SpecializationTestInt) {
    int dummy = 0;
    TemplateClass<int> templateObj(&dummy, 0, {});
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateClass, SpecializationTestDouble) {
    double dummy = 0.0;
    TemplateClass<double> templateObj(&dummy, 0, {});
    EXPECT_FALSE(templateObj.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


