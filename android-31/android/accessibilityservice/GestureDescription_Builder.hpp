#pragma once

#include "./GestureDescription.def.hpp"
#include "./GestureDescription_StrokeDescription.def.hpp"
#include "./GestureDescription_Builder.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline GestureDescription_Builder::GestureDescription_Builder()
		: JObject(
			"android.accessibilityservice.GestureDescription$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::accessibilityservice::GestureDescription_Builder GestureDescription_Builder::addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0) const
	{
		return callObjectMethod(
			"addStroke",
			"(Landroid/accessibilityservice/GestureDescription$StrokeDescription;)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0.object()
		);
	}
	inline android::accessibilityservice::GestureDescription GestureDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/GestureDescription;"
		);
	}
	inline android::accessibilityservice::GestureDescription_Builder GestureDescription_Builder::setDisplayId(jint arg0) const
	{
		return callObjectMethod(
			"setDisplayId",
			"(I)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0
		);
	}
} // namespace android::accessibilityservice

// Base class headers

