#include "gtest/gtest.h"
#include "Transformer.h"
#include "Core.h"
#include "Gun.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

// Transformer Tests
TEST(Transformer, Constructor) {
    Transformer transformer;
    EXPECT_EQ(transformer.get_ammo(), 0);
    EXPECT_DOUBLE_EQ(transformer.get_fuel(), 0.0);
    EXPECT_TRUE(transformer.get_form());
}

TEST(Transformer, Fire) {
    Transformer transformer(5);
    transformer.fire();
    EXPECT_EQ(transformer.get_ammo(), 4);
}

TEST(Transformer, FireNoAmmo) {
    Transformer transformer(0);
    testing::internal::CaptureStdout();
    transformer.fire();
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(out, "No ammo! Reload!\n");
}

TEST(Transformer, Drive) {
    Transformer transformer(5, 10.0, true, Gun("shotgun"));
    transformer.drive(50);
    EXPECT_DOUBLE_EQ(transformer.get_fuel(), 10.0 - (50 * 0.08));
}

TEST(Transformer, DriveNotTransformed) {
    Transformer transformer(5, 10.0, false, Gun("shotgun"));
    testing::internal::CaptureStdout();
    transformer.drive(50);
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(out, "You need to transform to drive!\n");
}

// Core Tests
TEST(Core, Power) {
    Core core(100);
    EXPECT_EQ(core.get_power(), 100);
    core.change_power(50);
    EXPECT_EQ(core.get_power(), 50);
}

// Gun Tests
TEST(Gun, GunTest) {
    Gun gun("shotgun");
    EXPECT_EQ(gun.get_gun(), "shotgun");
    gun.change_gun(Gun("laser"));
    EXPECT_EQ(gun.get_gun(), "laser");
}

// Autobot Tests
TEST(Autobot, TeamAllies) {
    Autobot autobot("A-Team", 10);
    EXPECT_EQ(autobot.get_teamName(), "A-Team");
    EXPECT_EQ(autobot.get_allyCount(), 10);
    autobot.make_alliance();
    EXPECT_EQ(autobot.get_allyCount(), 11);
    autobot.change_team("B-Team");
    EXPECT_EQ(autobot.get_teamName(), "B-Team");
}

// Decepticon Tests
TEST(Decepticon, EvilPlan) {
    Decepticon decepticon("Conquer the Earth", 5);
    EXPECT_EQ(decepticon.get_evilPlanName(), "Conquer the Earth");
    EXPECT_EQ(decepticon.get_enemyCount(), 5);
    decepticon.make_enemy();
    EXPECT_EQ(decepticon.get_enemyCount(), 6);
}

// Dinobot Tests
TEST(Dinobot, SpeciesHunger) {
    Dinobot dinobot("T-Rex", 100);
    EXPECT_EQ(dinobot.get_species(), "T-Rex");
    EXPECT_EQ(dinobot.get_hunger(), 100);
    dinobot.eat();
    EXPECT_EQ(dinobot.get_hunger(), 101);
}

TEST(Dinobot, Roar) {
    Dinobot dinobot("T-Rex", 100);
    testing::internal::CaptureStdout();
    dinobot.roar();
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(out, "ROAARR!\n");
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
