#include <algorithm>

template <typename U, typename... T>
U Min(U const t1, U const t2, T const... t)
{
	auto const tmp = std::min(t1, t2);
	int const constexpr n = sizeof...(T);
	if constexpr (n==0) return tmp;
	else if constexpr (n==1) return Min(tmp, t...);
	else return std::min(tmp, Min(t...));
}
