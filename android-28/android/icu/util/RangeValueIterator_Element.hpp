#pragma once

#include "./RangeValueIterator_Element.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint RangeValueIterator_Element::limit()
	{
		return getField<jint>(
			"limit"
		);
	}
	inline jint RangeValueIterator_Element::start()
	{
		return getField<jint>(
			"start"
		);
	}
	inline jint RangeValueIterator_Element::value()
	{
		return getField<jint>(
			"value"
		);
	}
	
	// Constructors
	inline RangeValueIterator_Element::RangeValueIterator_Element()
		: JObject(
			"android.icu.util.RangeValueIterator$Element",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::util

// Base class headers

