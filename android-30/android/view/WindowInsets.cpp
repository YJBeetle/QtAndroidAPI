#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"
#include "./WindowInsets.hpp"

namespace android::view
{
	// Fields
	android::view::WindowInsets WindowInsets::CONSUMED()
	{
		return getStaticObjectField(
			"android.view.WindowInsets",
			"CONSUMED",
			"Landroid/view/WindowInsets;"
		);
	}
	
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
	jboolean WindowInsets::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::view::DisplayCutout WindowInsets::getDisplayCutout()
	{
		return callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	android::graphics::Insets WindowInsets::getInsets(jint arg0)
	{
		return callObjectMethod(
			"getInsets",
			"(I)Landroid/graphics/Insets;",
			arg0
		);
	}
	android::graphics::Insets WindowInsets::getInsetsIgnoringVisibility(jint arg0)
	{
		return callObjectMethod(
			"getInsetsIgnoringVisibility",
			"(I)Landroid/graphics/Insets;",
			arg0
		);
	}
	android::graphics::Insets WindowInsets::getMandatorySystemGestureInsets()
	{
		return callObjectMethod(
			"getMandatorySystemGestureInsets",
			"()Landroid/graphics/Insets;"
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
	android::graphics::Insets WindowInsets::getStableInsets()
	{
		return callObjectMethod(
			"getStableInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Insets WindowInsets::getSystemGestureInsets()
	{
		return callObjectMethod(
			"getSystemGestureInsets",
			"()Landroid/graphics/Insets;"
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
	android::graphics::Insets WindowInsets::getSystemWindowInsets()
	{
		return callObjectMethod(
			"getSystemWindowInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Insets WindowInsets::getTappableElementInsets()
	{
		return callObjectMethod(
			"getTappableElementInsets",
			"()Landroid/graphics/Insets;"
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
	android::view::WindowInsets WindowInsets::inset(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"inset",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	android::view::WindowInsets WindowInsets::inset(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"inset",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
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
	jboolean WindowInsets::isVisible(jint arg0)
	{
		return callMethod<jboolean>(
			"isVisible",
			"(I)Z",
			arg0
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
	jstring WindowInsets::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view

