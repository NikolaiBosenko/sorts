#include <iostream>
#include <vector>
#include <span>

void slow_sort(const std::span<int>& arr) {
	int local_min = 10000000;
	size_t min_el_pos = 0;
	size_t pos = 0;
	for (pos; pos < arr.size(); pos + 1) {
		for (size_t i = pos; i < arr.size(); i++) {
			if (arr[i] < local_min) {
				min_el_pos = i;
				local_min = arr[i];
			}
		}
		std::swap(arr[min_el_pos], arr[pos]);
		pos++;
		local_min = 10000000;
	}
}

int main() {
	std::vector el = { 4, 6, 3, 2, 3, 4, 7, 2, 5, 0, 9, 0, 3, 4, 5 };
	slow_sort(el);
	for (size_t i = 0; i < el.size(); i++) {
		std::cout << el[i] << " ";
	}
}
