#ifndef XMATH_SET
#define XMATH_SET

#include <list>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdarg>
#include <cmath>

namespace xmath
{
	//	Ordered Pair Set
	template <typename value_type>
	std::vector<std::vector<value_type>> get_ordered_pair_set(const std::pair<value_type, value_type>& coord)
	{
		return std::vector<std::vector<value_type>>({ std::vector<value_type>({coord.first}), std::vector<value_type>({coord.first, coord.second}) });
	}

	//	Calculation
	template <typename value_type>
	value_type compute_merge_set(const value_type& set_1, const value_type& set_2)
	{
		value_type newSet;
		std::merge(set_1.begin(), set_1.end(), set_2.begin(), set_2.end(), std::back_inserter(newSet));
		return newSet;
	}
	template <typename value_type>
	value_type compute_union_set(const value_type& set_1, const value_type& set_2)
	{
		value_type newSet;
		std::set_union(set_1.begin(), set_1.end(), set_2.begin(), set_2.end(), std::back_inserter(newSet));
		return newSet;
	}
	template <typename value_type>
	value_type compute_intersection_set(const value_type& set_1, const value_type& set_2)
	{
		value_type newSet;
		std::set_intersection(set_1.begin(), set_1.end(), set_2.begin(), set_2.end(), std::back_inserter(newSet));
		return newSet;
	}
	template <typename value_type>
	value_type compute_difference_set(const value_type& baseSet, const value_type& minusSet)
	{
		value_type newSet;
		std::set_difference(baseSet.begin(), baseSet.end(), minusSet.begin(), minusSet.end(), std::back_inserter(newSet));
		return newSet;
	}
	template <typename value_type>
	value_type compute_symmetric_difference_set(const value_type& baseSet, const value_type& minusSet)
	{
		value_type newSet;
		std::set_symmetric_difference(baseSet.begin(), baseSet.end(), minusSet.begin(), minusSet.end(), std::back_inserter(newSet));
		return newSet;
	}
	template <typename value_type>
	std::vector<std::pair<value_type, value_type>> compute_product_set(const std::vector<value_type>& set_1, const std::vector<value_type>& set_2)
	{
		if (set_1.size() == 0 || set_2.size() == 0)
		{
			return -1;
		}

		std::vector<std::pair<value_type, value_type>> newProductSet = std::vector<std::pair<value_type, value_type>>();
		for (auto i : set_1)
		{
			for (auto j : set_2)
			{
				newProductSet.push_back(std::make_pair(i, j));
			}
		}
		return newProductSet;
	}

	//	Inclusion Relationship Cheak
	template <typename value_type>
	bool is_subset(const value_type& mainSet, const value_type& subSet)
	{
		if (mainSet.size() < subSet.size())
		{
			return false;
		}

		bool flag = true;
		for (auto i : subSet)
		{
			for (auto j : mainSet)
			{
				if (i == j)
				{
					flag = false;
					break;
				}
			}

			if (flag == true)
			{
				return false;
			}
			else
			{
				flag = true;
			}
		}
		return true;
	}
	template <typename value_type>
	bool is_proper_subSet(const value_type& mainSet, const value_type& subSet)
	{
		if (mainSet.size() <= subSet.size())
		{
			return false;
		}
		return xmath::is_subset(mainSet, subSet);
	}
}

#endif