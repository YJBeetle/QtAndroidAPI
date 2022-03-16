#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisplayCutout.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	DisplayCutout::DisplayCutout(android::graphics::Rect arg0, JObject arg1)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Rect;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	DisplayCutout::DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Insets;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		) {}
	DisplayCutout::DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, android::graphics::Insets arg5)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Insets;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Insets;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	jboolean DisplayCutout::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::Rect DisplayCutout::getBoundingRectBottom() const
	{
		return callObjectMethod(
			"getBoundingRectBottom",
			"()Landroid/graphics/Rect;"
		);
	}
	android::graphics::Rect DisplayCutout::getBoundingRectLeft() const
	{
		return callObjectMethod(
			"getBoundingRectLeft",
			"()Landroid/graphics/Rect;"
		);
	}
	android::graphics::Rect DisplayCutout::getBoundingRectRight() const
	{
		return callObjectMethod(
			"getBoundingRectRight",
			"()Landroid/graphics/Rect;"
		);
	}
	android::graphics::Rect DisplayCutout::getBoundingRectTop() const
	{
		return callObjectMethod(
			"getBoundingRectTop",
			"()Landroid/graphics/Rect;"
		);
	}
	JObject DisplayCutout::getBoundingRects() const
	{
		return callObjectMethod(
			"getBoundingRects",
			"()Ljava/util/List;"
		);
	}
	jint DisplayCutout::getSafeInsetBottom() const
	{
		return callMethod<jint>(
			"getSafeInsetBottom",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetLeft() const
	{
		return callMethod<jint>(
			"getSafeInsetLeft",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetRight() const
	{
		return callMethod<jint>(
			"getSafeInsetRight",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetTop() const
	{
		return callMethod<jint>(
			"getSafeInsetTop",
			"()I"
		);
	}
	android::graphics::Insets DisplayCutout::getWaterfallInsets() const
	{
		return callObjectMethod(
			"getWaterfallInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jint DisplayCutout::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DisplayCutout::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

