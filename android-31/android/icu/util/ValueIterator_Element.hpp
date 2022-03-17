#pragma once

#include "../../../JObject.hpp"
#include "./ValueIterator_Element.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint ValueIterator_Element::integer()
	{
		return getField<jint>(
			"integer"
		);
	}
	inline JObject ValueIterator_Element::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline ValueIterator_Element::ValueIterator_Element()
		: JObject(
			"android.icu.util.ValueIterator$Element",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::util

// Base class headers

