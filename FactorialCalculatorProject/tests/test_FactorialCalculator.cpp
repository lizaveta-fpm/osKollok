#include <gtest/gtest.h>
#include "../src/main.cpp" // Подключаем реализацию

// Тесты для FactorialCalculator
TEST(FactorialCalculatorTests, ValidInput) {
    EXPECT_EQ(FactorialCalculator::first_n_factorials(1), (std::vector<unsigned long long>{1}));
    EXPECT_EQ(FactorialCalculator::first_n_factorials(5), (std::vector<unsigned long long>{1, 2, 6, 24, 120}));
}

TEST(FactorialCalculatorTests, InvalidInput) {
    EXPECT_THROW(FactorialCalculator::first_n_factorials(0), std::invalid_argument);
    EXPECT_THROW(FactorialCalculator::first_n_factorials(-5), std::invalid_argument);
}

// Тесты для UniqueElements
TEST(UniqueElementsTests, RemoveDuplicates) {
    EXPECT_EQ(UniqueElements::remove_duplicates({1, 2, 2, 3, 4, 4, 5}), (std::vector<int>{1, 2, 3, 4, 5}));
    EXPECT_EQ(UniqueElements::remove_duplicates({1, 1, 1, 1}), (std::vector<int>{1}));
    EXPECT_EQ(UniqueElements::remove_duplicates({}), (std::vector<int>{}));
}

// Тесты для LinkedList
TEST(LinkedListTests, ReverseLinkedList) {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.reverse();

    std::ostringstream os;
    testing::internal::CaptureStdout(); // Захват стандартного вывода
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "3 2 1 \n"); // Проверка корректного развертывания
}

TEST(LinkedListTests, ReverseEmptyList) {
    LinkedList emptyList;
    emptyList.reverse();
    
    std::ostringstream os;
    testing::internal::CaptureStdout(); // Захват стандартного вывода
    emptyList.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "\n"); // Проверка корректного вывода для пустого списка
}

// Дополнительный тест на вывод исходного списка
TEST(LinkedListTests, InsertAndDisplay) {
    LinkedList list;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    
    std::ostringstream os;
    testing::internal::CaptureStdout(); // Захват стандартного вывода
    list.display();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ(output, "5 10 15 \n"); // Проверка, что элементы вставлены правильно
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
