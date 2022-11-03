#include "counter.h"

	void Counter::count_increase() {
		count += 1;
	}

	void Counter::count_decrease() {
		count -= 1;
	}

	int Counter::count_print() {
		return count;
	}

	Counter::Counter() {}

	Counter::Counter(int count_input) {
		count = count_input;
	}

	int Counter::get_count() {
		return count;
	}

	void Counter::set_count(int count_input) {
		count = count_input;
	}
