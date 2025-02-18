#pragma once

#include "./PorterDuff_Mode.def.hpp"
#include "../../JObject.hpp"
#include "./PorterDuffColorFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PorterDuffColorFilter::PorterDuffColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1)
		: android::graphics::ColorFilter(
			"android.graphics.PorterDuffColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean PorterDuffColorFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PorterDuffColorFilter::hashCode() const
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
