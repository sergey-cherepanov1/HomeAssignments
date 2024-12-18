/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment6
*/

#include <gtest/gtest.h>
#include "template.h"

TEST(TemplateClassTest, Class1True)
{
    Class1 c1;
    Template<Class1> obj(c1, 5, {1.0f, 2.0f});
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class1False)
{
    Class1 c1;
    Template<Class1> obj(c1, -5, {1.0f, 2.0f});
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassTest, Class2True)
{
    Class2 c2;
    Template<Class2> obj(c2, 5, {1.0f, 2.0f});
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class2False)
{
    Class2 c2;
    Template<Class2> obj(c2, 5, {});
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassTest, Class3True)
{
    Class3 c3;
    Template<Class3> obj(c3, -2, {1.0f, 2.0f});
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class3False)
{
    Class3 c3;
    Template<Class3> obj(c3, 2, {1.0f, 2.0f});
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassTest, Int)
{
    Template<int> obj(5, 0, {1.0f, 2.0f});
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Float)
{
    Template<float> obj(5.5f, 0, {1.0f, 2.0f});
    EXPECT_FALSE(obj.foo());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
