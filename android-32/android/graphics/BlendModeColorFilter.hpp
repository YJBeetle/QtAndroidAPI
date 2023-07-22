#pragma once

#include "./BlendMode.def.hpp"
#include "../../JObject.hpp"
#include "./BlendModeColorFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline BlendModeColorFilter::BlendModeColorFilter(jint arg0, android::graphics::BlendMode arg1)
		: android::graphics::ColorFilter(
			"android.graphics.BlendModeColorFilter",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean BlendModeColorFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BlendModeColorFilter::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline android::graphics::BlendMode BlendModeColorFilter::getMode() const
	{
		return callObjectMethod(
			"getMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline jint BlendModeColorFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers
#include "./ColorFilter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
