#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal. 
*/
void test_validate_my_username()
{
    // 1) Get the hardcoded username from my_username()
    const char *username_from_code = my_username();

    // 2) Get the username from the configuration file using malloc_username_from_conf_file()
    const char *username_from_file = malloc_username_from_conf_file("/conf/username.txt");

    // 3) Verify that both usernames are equal using TEST_ASSERT_EQUAL_STRING_MESSAGE
    TEST_ASSERT_EQUAL_STRING_MESSAGE(username_from_code, username_from_file, "Usernames do not match!");
}
