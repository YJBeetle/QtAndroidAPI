#pragma once

#include "../graphics/Rect.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisplayCutout.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline DisplayCutout::DisplayCutout(android::graphics::Rect arg0, JObject arg1)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Rect;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean DisplayCutout::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DisplayCutout::getBoundingRects() const
	{
		return callObjectMethod(
			"getBoundingRects",
			"()Ljava/util/List;"
		);
	}
	inline jint DisplayCutout::getSafeInsetBottom() const
	{
		return callMethod<jint>(
			"getSafeInsetBottom",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetLeft() const
	{
		return callMethod<jint>(
			"getSafeInsetLeft",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetRight() const
	{
		return callMethod<jint>(
			"getSafeInsetRight",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetTop() const
	{
		return callMethod<jint>(
			"getSafeInsetTop",
			"()I"
		);
	}
	inline jint DisplayCutout::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DisplayCutout::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
