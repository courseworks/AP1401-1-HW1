
#include <string>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "book_inventory.h"
#include "regression.h"


// TEST(HW1Test, TEST1) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     EXPECT_EQ(inventory.size(), 59);

//     EXPECT_EQ(inventory[4].title, "A Short History of Nearly Everything");
// }

// TEST(HW1Test, TEST2) {
//     using namespace book;
//     EXPECT_THROW(read_database("inventory_wrong_filename.txt"), std::runtime_error);
// }

// TEST(HW1Test, TEST3) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");

//     EXPECT_EQ(inventory[4].title, "A Short History of Nearly Everything");
//     EXPECT_EQ(inventory[4].author, "Bill Bryson");
//     EXPECT_NEAR(inventory[4].cost, 4.21, 0.001);
//     EXPECT_EQ(inventory[4].isbn, "076790818X");
//     EXPECT_EQ(inventory[4].language_code, "eng");
//     EXPECT_EQ(inventory[4].num_pages, 544);
//     EXPECT_EQ(inventory[4].publisher, "Broadway Books");
//     EXPECT_EQ(inventory[4].count, 25);
// }

// TEST(HW1Test, TEST4) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");

//     EXPECT_EQ(inventory[42].title, "Heidi");
//     EXPECT_EQ(inventory[42].author, "Johanna Spyri");
//     EXPECT_NEAR(inventory[42].cost, 3.99, 0.001);
//     EXPECT_EQ(inventory[42].isbn, "753454947");
//     EXPECT_EQ(inventory[42].language_code, "eng");
//     EXPECT_EQ(inventory[42].num_pages, 352);
//     EXPECT_EQ(inventory[42].publisher, "Kingfisher");
//     EXPECT_EQ(inventory[42].count, 6);
// }

// TEST(HW1Test, TEST5) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");

//     std::string isbn = search(inventory, "Simply Beautiful Beaded Jewelry");
//     EXPECT_EQ(isbn, "1581807740");
// }

// TEST(HW1Test, TEST6) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");

//     std::string isbn = search(inventory, "Simply Beautiful Beaded Jewelry FAKE");
//     EXPECT_EQ(isbn, "none");
// }

// TEST(HW1Test, TEST7) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     Books shopinglist;

//     std::string isbn = search(inventory, "What to Expect the First Year");
//     bool ordered = order(inventory, shopinglist, isbn);
//     EXPECT_TRUE(ordered);
//     EXPECT_EQ(shopinglist.size(), 1);
//     EXPECT_EQ(shopinglist[0].isbn, "761129588");
// }

// TEST(HW1Test, TEST8) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     Books shopinglist;

//     std::string isbn = search(inventory, "What to Expect the First Year FAKE");
//     bool ordered = order(inventory, shopinglist, isbn);
//     EXPECT_FALSE(ordered);
//     EXPECT_EQ(shopinglist.size(), 0);
// }

// TEST(HW1Test, TEST9) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     Books shopinglist;

//     std::string isbn = search(inventory, "What to Expect the First Year");

//     EXPECT_EQ(inventory[45].count, 15); // before order
//     bool ordered = order(inventory, shopinglist, isbn);
//     EXPECT_EQ(inventory[45].count, 14); // after order
// }

// TEST(HW1Test, TEST10) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     Books shopinglist;


//     order(inventory, shopinglist, search(inventory, "What to Expect11"));
//     order(inventory, shopinglist, search(inventory, "Heidi"));
//     order(inventory, shopinglist, search(inventory, "Giving Good Weight"));
//     order(inventory, shopinglist, search(inventory, "The Lord of the Rings: The Art of the Fellowship of the Ring"));
//     order(inventory, shopinglist, search(inventory, "Neither Here nor There: Travels in Europe"));

//     EXPECT_EQ(shopinglist.size(), 4);
// }

// TEST(HW1Test, TEST11) {
//     using namespace book;
//     Books inventory = read_database("inventory.txt");
//     Books shopinglist;


//     order(inventory, shopinglist, search(inventory, "Rising from the Plains"));
//     order(inventory, shopinglist, search(inventory, "What to Expect the First Year FAKE"));
//     order(inventory, shopinglist, search(inventory, "Heidi"));
//     order(inventory, shopinglist, search(inventory, "Giving Good Weight"));
//     order(inventory, shopinglist, search(inventory, "The Control of Nature FAKE"));
//     order(inventory, shopinglist, search(inventory, "The Lord of the Rings: The Art of the Fellowship of the Ring"));
//     order(inventory, shopinglist, search(inventory, "Neither Here nor There: Travels in Europe"));

//     double total_cost = get_receipt(shopinglist);
//     EXPECT_NEAR(total_cost, 20.90, 0.001);
// }

// TEST(HW1Test, TEST12) {
//     using namespace regression;
//     Data dataset = read_database("fish.txt");

//     EXPECT_EQ(dataset.size(), 100);
//     for(const auto& row : dataset)
//         EXPECT_EQ(row.size(), 5);
    
// }

// TEST(HW1Test, TEST13) {
//     using namespace regression;
//     EXPECT_THROW(read_database("fish_wrong_filename.txt");, std::runtime_error);
// }

// TEST(HW1Test, TEST14) {
//     using namespace regression;
//     Data dataset = read_database("fish.txt");

//     for(const auto& row : dataset)
//         EXPECT_DOUBLE_EQ(row[0], 1);

//     EXPECT_NEAR(dataset[8][1], 16.2315, 0.001);
//     EXPECT_NEAR(dataset[8][2], 76.7456, 0.001);
//     EXPECT_NEAR(dataset[8][3], 12.74897, 0.001);
//     EXPECT_NEAR(dataset[8][4], 49.8, 0.001);

//     EXPECT_NEAR(dataset[97][1], 37.8035, 0.001);
//     EXPECT_NEAR(dataset[97][2], 118.1844, 0.001);
//     EXPECT_NEAR(dataset[97][3], 12.7140, 0.001);
//     EXPECT_NEAR(dataset[97][4], 83.4, 0.001);
// }

// TEST(HW1Test, TEST15) {
//     using namespace regression;

//     EXPECT_DOUBLE_EQ(hypothesis({0, 0, 0}, {5, 3, 1}), 0);
//     EXPECT_DOUBLE_EQ(hypothesis({0, 0, 1}, {10, 2, 1}), 1);
//     EXPECT_DOUBLE_EQ(hypothesis({0, 1.5, 0, 5}, {5, 4.5, 1, 0.5}), 9.25);
//     EXPECT_DOUBLE_EQ(hypothesis({1, 2, 1.5}, {5, 3, 1}), 12.5);  
// }

// TEST(HW1Test, TEST16) {
//     using namespace regression;
//     EXPECT_THROW(hypothesis({1, 1, 1, 1}, {5, 3, 1}), std::logic_error);
// }

// TEST(HW1Test, TEST17) {
//     using namespace regression;
//     Data dataset = read_database("fish.txt");

//     EXPECT_NEAR(cost_function(dataset, {0, 0, 0, 0}), 641234, 10);
//     EXPECT_NEAR(cost_function(dataset, {1, 1, 1, 1}), 618864, 10);
// }

// TEST(HW1Test, TEST18) {
//     using namespace regression;
//     Data dataset = read_database("fish.txt");

//     auto theta = linear_regression(dataset, {0, 0, 0, 0}, 1e-7);
//     //final theta must be around [-0.0109046, 0.510132, 0.543724, -0.0134072]
//     EXPECT_NEAR(theta[0], -0.0109046, 0.1);
//     EXPECT_NEAR(theta[1], 0.510132, 0.1);
//     EXPECT_NEAR(theta[2], 0.543724, 0.1);
//     EXPECT_NEAR(theta[3], -0.0134072, 0.1);
// }
