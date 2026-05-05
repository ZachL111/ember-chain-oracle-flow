#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {59, 94, 25, 6, 11};
    assert(score_signal(signal_case_1) == 123);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {77, 76, 20, 11, 11};
    assert(score_signal(signal_case_2) == 126);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {98, 77, 14, 6, 7};
    assert(score_signal(signal_case_3) == 209);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
