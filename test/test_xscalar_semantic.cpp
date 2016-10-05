#include "gtest/gtest.h"
#include "xarray/xarray.hpp"
#include "test_xsemantic.hpp"

namespace qs
{
    TEST(xscalar_semantic, a_plus_equal_b)
    {
        scalar_operation_tester<std::plus<>> tester;

        {
            SCOPED_TRACE("row_major += scalar");
            xarray<int> a = tester.ra;
            a += tester.b;
            EXPECT_EQ(tester.res_r, a);
        }

        {
            SCOPED_TRACE("column_major += scalar");
            xarray<int> a = tester.ca;
            a += tester.b;
            EXPECT_EQ(tester.res_c, a);
        }

        {
            SCOPED_TRACE("central_major += scalar");
            xarray<int> a = tester.cta;
            a += tester.b;
            EXPECT_EQ(tester.res_ct, a);
        }

        {
            SCOPED_TRACE("unit_major += scalar");
            xarray<int> a = tester.ua;
            a += tester.b;
            EXPECT_EQ(tester.res_u, a);
        }
    }

    TEST(xscalar_semantic, a_minus_equal_b)
    {
        scalar_operation_tester<std::minus<>> tester;

        {
            SCOPED_TRACE("row_major -= scalar");
            xarray<int> a = tester.ra;
            a -= tester.b;
            EXPECT_EQ(tester.res_r, a);
        }

        {
            SCOPED_TRACE("column_major -= scalar");
            xarray<int> a = tester.ca;
            a -= tester.b;
            EXPECT_EQ(tester.res_c, a);
        }

        {
            SCOPED_TRACE("central_major -= scalar");
            xarray<int> a = tester.cta;
            a -= tester.b;
            EXPECT_EQ(tester.res_ct, a);
        }

        {
            SCOPED_TRACE("unit_major -= scalar");
            xarray<int> a = tester.ua;
            a -= tester.b;
            EXPECT_EQ(tester.res_u, a);
        }
    }

    TEST(xscalar_semantic, a_times_equal_b)
    {
        scalar_operation_tester<std::multiplies<>> tester;

        {
            SCOPED_TRACE("row_major *= scalar");
            xarray<int> a = tester.ra;
            a *= tester.b;
            EXPECT_EQ(tester.res_r, a);
        }

        {
            SCOPED_TRACE("column_major *= scalar");
            xarray<int> a = tester.ca;
            a *= tester.b;
            EXPECT_EQ(tester.res_c, a);
        }

        {
            SCOPED_TRACE("central_major *= scalar");
            xarray<int> a = tester.cta;
            a *= tester.b;
            EXPECT_EQ(tester.res_ct, a);
        }

        {
            SCOPED_TRACE("unit_major *= scalar");
            xarray<int> a = tester.ua;
            a *= tester.b;
            EXPECT_EQ(tester.res_u, a);
        }
    }

    TEST(xscalar_semantic, a_divide_by_equal_b)
    {
        scalar_operation_tester<std::divides<>> tester;

        {
            SCOPED_TRACE("row_major /= scalar");
            xarray<int> a = tester.ra;
            a /= tester.b;
            EXPECT_EQ(tester.res_r, a);
        }

        {
            SCOPED_TRACE("column_major /= scalar");
            xarray<int> a = tester.ca;
            a /= tester.b;
            EXPECT_EQ(tester.res_c, a);
        }

        {
            SCOPED_TRACE("central_major /= scalar");
            xarray<int> a = tester.cta;
            a /= tester.b;
            EXPECT_EQ(tester.res_ct, a);
        }

        {
            SCOPED_TRACE("unit_major /= scalar");
            xarray<int> a = tester.ua;
            a /= tester.b;
            EXPECT_EQ(tester.res_u, a);
        }
    }
}

