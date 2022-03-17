#pragma once

#include "./Toast_Callback.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Toast_Callback::Toast_Callback()
		: JObject(
			"android.widget.Toast$Callback",
			"()V"
		) {}
	
	// Methods
	inline void Toast_Callback::onToastHidden() const
	{
		callMethod<void>(
			"onToastHidden",
			"()V"
		);
	}
	inline void Toast_Callback::onToastShown() const
	{
		callMethod<void>(
			"onToastShown",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers

