#pragma once

#include "./MagnificationConfig.def.hpp"
#include "./MagnificationConfig_Builder.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline MagnificationConfig_Builder::MagnificationConfig_Builder()
		: JObject(
			"android.accessibilityservice.MagnificationConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::accessibilityservice::MagnificationConfig MagnificationConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/MagnificationConfig;"
		);
	}
	inline android::accessibilityservice::MagnificationConfig_Builder MagnificationConfig_Builder::setCenterX(jfloat arg0) const
	{
		return callObjectMethod(
			"setCenterX",
			"(F)Landroid/accessibilityservice/MagnificationConfig$Builder;",
			arg0
		);
	}
	inline android::accessibilityservice::MagnificationConfig_Builder MagnificationConfig_Builder::setCenterY(jfloat arg0) const
	{
		return callObjectMethod(
			"setCenterY",
			"(F)Landroid/accessibilityservice/MagnificationConfig$Builder;",
			arg0
		);
	}
	inline android::accessibilityservice::MagnificationConfig_Builder MagnificationConfig_Builder::setMode(jint arg0) const
	{
		return callObjectMethod(
			"setMode",
			"(I)Landroid/accessibilityservice/MagnificationConfig$Builder;",
			arg0
		);
	}
	inline android::accessibilityservice::MagnificationConfig_Builder MagnificationConfig_Builder::setScale(jfloat arg0) const
	{
		return callObjectMethod(
			"setScale",
			"(F)Landroid/accessibilityservice/MagnificationConfig$Builder;",
			arg0
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
