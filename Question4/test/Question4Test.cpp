#include <gtest/gtest.h>
#include "../Question4.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(11, ConcatRemove("jhair","acosta",90) );
  EXPECT_EQ(8, ConcatRemove("jh", "acosta", 90));
  EXPECT_EQ(8, ConcatRemove("blablablabla", "blablabcde", 90));
  EXPECT_EQ(0, ConcatRemove("abc","abc",90) );
  EXPECT_EQ(3, ConcatRemove("abcdef", "abc", 90));
  EXPECT_TRUE(is_lower_alpha_portugues(" "));
  EXPECT_TRUE(is_lower_alpha_portugues("J"));
  EXPECT_TRUE(is_lower_alpha_portugues("#"));
  EXPECT_TRUE(is_lower_alpha_portugues("@"));
}