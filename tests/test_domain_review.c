#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {51, 53, 22, 58};
    assert(domain_review_score(item) == 147);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
