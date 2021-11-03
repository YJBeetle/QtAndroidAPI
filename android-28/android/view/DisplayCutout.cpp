#include "../graphics/Rect.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisplayCutout.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	DisplayCutout::DisplayCutout(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DisplayCutout::DisplayCutout(android::graphics::Rect arg0, JObject arg1)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Rect;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean DisplayCutout::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject DisplayCutout::getBoundingRects()
	{
		return callObjectMethod(
			"getBoundingRects",
			"()Ljava/util/List;"
		);
	}
	jint DisplayCutout::getSafeInsetBottom()
	{
		return callMethod<jint>(
			"getSafeInsetBottom",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetLeft()
	{
		return callMethod<jint>(
			"getSafeInsetLeft",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetRight()
	{
		return callMethod<jint>(
			"getSafeInsetRight",
			"()I"
		);
	}
	jint DisplayCutout::getSafeInsetTop()
	{
		return callMethod<jint>(
			"getSafeInsetTop",
			"()I"
		);
	}
	jint DisplayCutout::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DisplayCutout::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

