/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include <gtest/gtest.h>
#include <sstream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include "Gun.h"
#include "Core.h"
#include "Transformer.h"

// Test for the input/output stream operators for Transformer
TEST(TransformerTest, TestInputOutput)
{
    Transformer transformer(10, 50.0, true, Gun("laser"));

    // Stringstream to capture the output
    std::stringstream ss;

    ss << transformer;
    EXPECT_EQ(ss.str(), "Ammo: 10, Fuel: 50, Form: Robot, Power: 100, Gun: laser");
    std::stringstream input;
    input << "20 100 0 machineGun";
    input >> transformer;

    EXPECT_EQ(transformer.get_ammo(), 20);
    EXPECT_EQ(transformer.get_fuel(), 100);
    EXPECT_FALSE(transformer.get_form());
    EXPECT_EQ(transformer.get_gun(), "machineGun");
}

// Test for the input/output stream operators for Autobot
TEST(AutobotTest, TestInputOutput)
{
    Autobot autobot("Autobots", 5);
    std::stringstream ss;

    ss << autobot;
    EXPECT_EQ(ss.str(), "Autobot Team: Autobots, Allies: 5");
    std::stringstream input;
    input << "Decepticons\n10";
    input >> autobot;
    EXPECT_EQ(autobot.get_teamName(), "Decepticons");
    EXPECT_EQ(autobot.get_allyCount(), 10);
}

// Test for the input/output stream operators for Decepticon
TEST(DecepticonTest, TestInputOutput)
{
    Decepticon decepticon("Destroy the world", 3);
    std::stringstream ss;

    ss << decepticon;
    EXPECT_EQ(ss.str(), "Decepticon Evil Plan: Destroy the world, Enemies: 3");
    std::stringstream input;
    input << "Take over universe\n5";
    input >> decepticon;
    EXPECT_EQ(decepticon.get_evilPlanName(), "Take over universe");
    EXPECT_EQ(decepticon.get_enemyCount(), 5);
}

// Test for the input/output stream operators for Dinobot
TEST(DinobotTest, TestInputOutput)
{
    Dinobot dinobot("T-Rex", 50);
    std::stringstream ss;

    ss << dinobot;
    EXPECT_EQ(ss.str(), "Dinobot Species: T-Rex, Hunger: 50");
    std::stringstream input;
    input << "Raptor\n30";
    input >> dinobot;
    EXPECT_EQ(dinobot.get_species(), "Raptor");
    EXPECT_EQ(dinobot.get_hunger(), 30);
}

// Test for the input/output stream operators for Gun
TEST(GunTest, TestInputOutput)
{
    Gun gun("shotgun");
    std::stringstream ss;

    ss << gun;
    EXPECT_EQ(ss.str(), "Gun Type: shotgun");
    std::stringstream input;
    input << "bazooka";
    input >> gun;
    EXPECT_EQ(gun.get_gun(), "bazooka");
}

// Test for the input/output stream operators for Core
TEST(CoreTest, TestInputOutput)
{
    Core core(100);
    std::stringstream ss;

    ss << core;
    EXPECT_EQ(ss.str(), "Core Power: 100");
    std::stringstream input;
    input << "150";
    input >> core;
    EXPECT_EQ(core.get_power(), 150);
}

// Test for comparison operators for Transformer
TEST(TransformerTest, TestComparisonOperators)
{
    Transformer t1(10, 50.0, true, Gun("laser"));
    Transformer t2(20, 100.0, false, Gun("machineGun"));
    Transformer t3(10, 50.0, true, Gun("laser"));

    EXPECT_TRUE(t1 == t3);
    EXPECT_FALSE(t1 == t2);
    EXPECT_TRUE(t1 != t2);
    EXPECT_FALSE(t1 != t3);
    EXPECT_TRUE(t1 < t2);
    EXPECT_FALSE(t2 < t1);
    EXPECT_TRUE(t1 <= t3);
    EXPECT_TRUE(t2 >= t1);
}

// Test for comparison operators for Autobot
TEST(AutobotTest, TestComparisonOperators)
{
    Autobot a1("Autobots", 5);
    Autobot a2("Autobots", 10);
    Autobot a3("Decepticons", 5);

    EXPECT_FALSE(a1 == a3);
    EXPECT_TRUE(a1 != a3);
    EXPECT_TRUE(a1 < a2);
    EXPECT_TRUE(a2 > a1);
    EXPECT_TRUE(a1 <= a3);
    EXPECT_TRUE(a2 >= a1);
}

// Test for comparison operators for Decepticon
TEST(DecepticonTest, TestComparisonOperators)
{
    Decepticon d1("Evil plan A", 3);
    Decepticon d2("Evil plan B", 5);
    Decepticon d3("Evil plan A", 3);

    EXPECT_TRUE(d1 == d3);
    EXPECT_TRUE(d1 != d2);
    EXPECT_TRUE(d1 < d2);
    EXPECT_TRUE(d2 > d1);
    EXPECT_TRUE(d1 <= d3);
    EXPECT_TRUE(d2 >= d1);
}

// Test for comparison operators for Dinobot
TEST(DinobotTest, TestComparisonOperators)
{
    Dinobot d1("T-Rex", 50);
    Dinobot d2("Raptor", 30);
    Dinobot d3("T-Rex", 50);

    EXPECT_TRUE(d1 == d3);
    EXPECT_TRUE(d1 != d2);
    EXPECT_TRUE(d2 < d1);
    EXPECT_TRUE(d1 > d2);
    EXPECT_TRUE(d1 <= d3);
    EXPECT_TRUE(d1 >= d2);
}

// Test for comparison operators for Gun
TEST(GunTest, TestComparisonOperators)
{
    Gun g1("laser");
    Gun g2("bazooka");
    Gun g3("laser");

    EXPECT_TRUE(g1 == g3);
    EXPECT_TRUE(g1 != g2);
    EXPECT_FALSE(g1 < g2);
    EXPECT_TRUE(g2 < g1);
    EXPECT_TRUE(g1 <= g3);
    EXPECT_FALSE(g2 >= g1);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
