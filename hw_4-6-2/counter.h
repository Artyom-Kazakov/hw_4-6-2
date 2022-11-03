#pragma once
class Counter {

private:
	int count = 0;

public:
	void count_increase();

	void count_decrease();

	int count_print();

	Counter();

	Counter(int count_input);

	int get_count();

	void set_count(int count_input);
};
