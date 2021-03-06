#include "testconfig.h"
#define TEST_FUNC_F_F __MATH_PRECNAME(fabs)
#include "testdriver.h"



static test_f_f_data const fabs_data[] = {
	{ __LINE__, ZERO_P, ZERO_P, 0 },
	{ __LINE__, ZERO_M, ZERO_P, 0 },
	{ __LINE__, INF_P, INF_P, 0 },
	{ __LINE__, INF_M, INF_P, 0 },
	{ __LINE__, QNAN_P, QNAN_P, 0 },
	{ __LINE__, QNAN_M, QNAN_P, 0 },
	{ __LINE__, SNAN_P, QNAN_P, 0 },
	{ __LINE__, SNAN_M, QNAN_P, 0 },
	{ __LINE__, SUBNORM_P, SUBNORM_P, FLAG_SUBNORM },
	{ __LINE__, SUBNORM_M, SUBNORM_P, FLAG_SUBNORM },
	{ __LINE__, MIN_M, MIN_P, 0 },
	{ __LINE__, MIN_P, MIN_P, 0 },
	{ __LINE__, MAX_M, MAX_P, 0 },
	{ __LINE__, MAX_P, MAX_P, 0 },

	{ __LINE__, HEXCONSTE(38.0, 0x4004, 0x98000000L, 0x00000000L), HEXCONSTE(38.0, 0x4004, 0x98000000L, 0x00000000L), 0 },
	{ __LINE__, HEXCONSTE("2.718281828459045235360287471352662498", 0x4000, 0xadf85458L, 0xa2bb4a9aL), HEXCONSTE("2.718281828459045235360287471352662498", 0x4000, 0xadf85458L, 0xa2bb4a9aL), 0 },
	{ __LINE__, HEXCONSTE("-2.718281828459045235360287471352662498", 0xc000, 0xadf85458L, 0xa2bb4a9aL), HEXCONSTE("2.718281828459045235360287471352662498", 0x4000, 0xadf85458L, 0xa2bb4a9aL), 0 },
	{ __LINE__, HEXCONSTE(-55, 0xc004, 0xdc000000L, 0x00000000L), HEXCONSTE(55, 0x4004, 0xdc000000L, 0x00000000L), 0 },
	{ __LINE__, HEXCONSTE(-1024, 0xc009, 0x80000000L, 0x00000000L), HEXCONSTE(1024, 0x4009, 0x80000000L, 0x00000000L), 0 },
	{ __LINE__, HEXCONSTE(1.2345, 0x3fff, 0x9e041893L, 0x74bc6a7fL), HEXCONSTE(1.2345, 0x3fff, 0x9e041893L, 0x74bc6a7fL), 0 },
	{ __LINE__, HEXCONSTE(-1.2345, 0xbfff, 0x9e041893L, 0x74bc6a7fL), HEXCONSTE(1.2345, 0x3fff, 0x9e041893L, 0x74bc6a7fL), 0 },
	{ __LINE__, HEXCONSTE(1.2345e+20, 0x4041, 0xd626d01dL, 0xe23f2000L), HEXCONSTE(1.2345e+20, 0x4041, 0xd626d01dL, 0xe23f2000L), 0 },
	{ __LINE__, HEXCONSTE(-9.987e+25, 0xc055, 0xa5389718L, 0xbb9cafaeL), HEXCONSTE(9.987e+25, 0x4055, 0xa5389718L, 0xbb9cafaeL), 0 },
	{ __LINE__, HEXCONSTE(-7.89e-24, 0xbfb2, 0x989d633cL, 0x5d6fc7a1L), HEXCONSTE(7.89e-24, 0x3fb2, 0x989d633cL, 0x5d6fc7a1L), 0 },
	{ __LINE__, HEXCONSTE(5.67e-15, 0x3fcf, 0xcc4884faL, 0x9b8365a7L), HEXCONSTE(5.67e-15, 0x3fcf, 0xcc4884faL, 0x9b8365a7L), 0 },
};

int main(int argc, char **argv)
{
	int status;
	
	status = 0;
	
	test_init(argc, argv);
	
	status |= test_table_f_f(fabs_data, ARRAY_SIZE(fabs_data), __FILE__);
	
	return status ? EXIT_FAILURE : EXIT_SUCCESS;
}
