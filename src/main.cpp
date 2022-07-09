#include <stdio.h>

using namespace std;

int main() {
	auto ct = int{ 0 };
	auto c = char{};

	while (EOF != scanf("%c", &c)) {
		if ('\n' == c) {
			++ct;
		}
	}

	printf("%d", ct);

	return 0;
}