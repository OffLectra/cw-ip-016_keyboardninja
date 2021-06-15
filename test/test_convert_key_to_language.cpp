#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/convert_key_to_language.h>

CTEST(convert_key_to_language, EN)
{
    int key = 1;
    string exp_result = "EN";
    string result = convert_key_to_language(key);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}
