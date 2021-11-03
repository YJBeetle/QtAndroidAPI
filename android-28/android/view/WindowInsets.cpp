#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WindowInsets.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInsets::WindowInsets(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WindowInsets::WindowInsets(android::view::WindowInsets &arg0)
		: JObject(
			"android.view.WindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::WindowInsets WindowInsets::consumeDisplayCutout()
	{
		return callObjectMethod(
			"consumeDisplayCutout",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets WindowInsets::consumeStableInsets()
	{
		return callObjectMethod(
			"consumeStableInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets WindowInsets::consumeSystemWindowInsets()
	{
		return callObjectMethod(
			"consumeSystemWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jboolean WindowInsets::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::view::DisplayCutout WindowInsets::getDisplayCutout()
	{
		return callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	jint WindowInsets::getStableInsetBottom()
	{
		return callMethod<jint>(
			"getStableInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetLeft()
	{
		return callMethod<jint>(
			"getStableInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetRight()
	{
		return callMethod<jint>(
			"getStableInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetTop()
	{
		return callMethod<jint>(
			"getStableInsetTop",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetBottom()
	{
		return callMethod<jint>(
			"getSystemWindowInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetLeft()
	{
		return callMethod<jint>(
			"getSystemWindowInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetRight()
	{
		return callMethod<jint>(
			"getSystemWindowInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetTop()
	{
		return callMethod<jint>(
			"getSystemWindowInsetTop",
			"()I"
		);
	}
	jboolean WindowInsets::hasInsets()
	{
		return callMethod<jboolean>(
			"hasInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasStableInsets()
	{
		return callMethod<jboolean>(
			"hasStableInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasSystemWindowInsets()
	{
		return callMethod<jboolean>(
			"hasSystemWindowInsets",
			"()Z"
		);
	}
	jint WindowInsets::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WindowInsets::isConsumed()
	{
		return callMethod<jboolean>(
			"isConsumed",
			"()Z"
		);
	}
	jboolean WindowInsets::isRound()
	{
		return callMethod<jboolean>(
			"isRound",
			"()Z"
		);
	}
	android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	JString WindowInsets::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

