#pragma once

#include "../../JObject.hpp"
#include "./Filter_FilterResults.def.hpp"

namespace android::widget
{
	// Fields
	inline jint Filter_FilterResults::count()
	{
		return getField<jint>(
			"count"
		);
	}
	inline JObject Filter_FilterResults::values()
	{
		return getObjectField(
			"values",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline Filter_FilterResults::Filter_FilterResults()
		: JObject(
			"android.widget.Filter$FilterResults",
			"()V"
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers

