#pragma once

#include "../../../JCharArray.hpp"
#include "./SingleLineTransformationMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline SingleLineTransformationMethod::SingleLineTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.SingleLineTransformationMethod",
			"()V"
		) {}
	
	// Methods
	inline android::text::method::SingleLineTransformationMethod SingleLineTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.SingleLineTransformationMethod",
			"getInstance",
			"()Landroid/text/method/SingleLineTransformationMethod;"
		);
	}
} // namespace android::text::method

// Base class headers
#include "./ReplacementTransformationMethod.hpp"

