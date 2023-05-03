#include <gtest/gtest.h>

#include <functions/vehiclearg.h>
using namespace trans;
TEST(FunctionsTests, Compute1) {
    transport l(vichal::EASY,199, 1.5, "AUDI R8", 15);
    transport g(vichal::KAMAZ, 12, 9, "UAZ", 20);
    transport m(vichal::MOTO, 213514, 0.5, "Harley dev.", 10);
    double T1 = l.Compute();
    int T2 = g.Compute();
    double T3 = m.Compute();
    l.Set_S(10);
    double T4 = l.Compute();
    EXPECT_EQ(T1, 22.5);
    EXPECT_EQ(T2, 1260);
    EXPECT_EQ(T3, 1.5);
    EXPECT_EQ(T4, 15);
}

TEST(dinamiccint, test1)
{
    transport v1;
    container dc;
    dc.add(v1);
    dc.add(v1);
    dc.add(v1);
    dc.add(v1);
    dc.add(v1);
    dc.add(v1);
    cout << dc << endl;
}
////
//TEST(mainfunc, test2)
//{
//    container dc;
//    auto T2 = dc.max_s();
//    transport l(vichal::EASY, 1.5, "AUDI R8", 15);
//    transport g(vichal::KAMAZ, 12, 9, "UAZ", 20);
//    transport m(vichal::MOTO, 0.5, "Harley dev.", 10);
//    dc.add(new transport(l));
//    dc.add(new transport(g));
//    dc.add(new transport(m));
//    auto T1 = dc.max_s();
//    EXPECT_EQ(T1, 1);
//    EXPECT_EQ(T2, 0);
//
//}
//
//TEST(containers, test3)
//{
//    container dc;
//    transport l(vichal::EASY, 1.5, "AUDI R8", 15);
//    transport g(vichal::KAMAZ, 12, 9, "UAZ", 20);
//    transport m(vichal::MOTO, 0.5, "Harley dev.", 10);
//    dc.add(new transport(l));
//    dc.add(new transport(m));
//    dc.add(new transport(l));
//    dc.add(new transport(m));
//    dc.add(new transport(m));
//    dc.add(new transport(l));
//    dc.add(new transport(g));
//    dc.add(new transport(m));
//    auto T1 = dc.max_s();
//    EXPECT_EQ(T1, 6);
//    dc.insert(new transport(g), 3);
//    auto T2 = dc.max_s();
//    EXPECT_EQ(T2, 3);
//}
//
//TEST(ttyyuum, test5)
//{
//    container dc;
//    dc.add(new transport);
//    dc.add(new transport);
//    dc.add(new transport);
//    dc.add(new transport);
//    dc.add(new transport);
//    dc.add(new transport);
//    dc.size();
//    auto T1 = dc.size();
//    EXPECT_EQ(T1, 6);
//    dc.clear();
//    auto T2 = dc.size();
//    EXPECT_EQ(T2, 0);
//    transport l(vichal::EASY, 1.5, "AUDI R8", 15);
//    cout << l << endl;
//}
////
//TEST(twet, gerg)
//{
//    container my_container;
//    my_container.add(new transport(vichal::EASY, 1.5, "AUDI R8", 15));
//    my_container.add(new transport(vichal::EASY, 1.5, "AUDI R4218", 15));
//    my_container.add(new transport(vichal::EASY, 1.5, "AUDI R8", 15));
//
//    transport* t1 = my_container[0]; // Получаем указатель на первый объект класса transport
//    transport* t2 = my_container[1];
//    cout << *my_container[1] << endl;
//}
//
//TEST(repl, 123)
//{
//    container my_container;
//    transport l(vichal::EASY, 1.5, "NEW TRANSPOORT", 15);
//    my_container.add(new transport(l));
//    my_container.add(new transport(vichal::EASY, 1.5, "RAII R4218", 15));
//    my_container.add(new transport(vichal::EASY, 1.5, "BMW X5", 15));
//    my_container.replace(1, new transport (l));
//    cout << *my_container[1] << endl;
//}