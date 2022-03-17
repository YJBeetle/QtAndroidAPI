#pragma once

#include "../../../JCharArray.hpp"
#include "./HideReturnsTransformationMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline HideReturnsTransformationMethod::HideReturnsTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"()V"
		) {}
	
	// Methods
	inline android::text::method::HideReturnsTransformationMethod HideReturnsTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"getInstance",
			"()Landroid/text/method/HideReturnsTransformationMethod;"
		);
	}
} // namespace android::text::method

// Base class headers
#include "./ReplacementTransformationMethod.hpp"

