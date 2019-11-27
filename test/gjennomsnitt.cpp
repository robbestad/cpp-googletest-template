#include "gtest/gtest.h"

#include "average/gjennomsnitt.h"

TEST(gjennomsnitt, ok) {
  int mylist [7] ={1,2};
	double snitt = gjennomsnitt(mylist, 2);
  ASSERT_EQ(snitt, 1.5);
}

