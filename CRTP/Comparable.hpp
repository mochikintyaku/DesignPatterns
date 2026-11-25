#pragma once

template <typename Derived>
class Comparable {
public:
	bool operator==(const Derived& other) const {
		return static_cast<const Derived*>(this)->equalsImpl(other);
	}
	bool operator!=(const Derived& other) const {
		return !(*this == other);
	}

	bool operator<(const Derived& other) const {
		return static_cast<const Derived*>(this)->lessThanImpl(other);
	}
	bool operator>(const Derived& other) const {
		return other < *this;
	}
	bool operator<=(const Derived& other) const {
		return !(*this > other);
	}
	bool operator>=(const Derived& other) const {
		return !(*this < other);
	}
};