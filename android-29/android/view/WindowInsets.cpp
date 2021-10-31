#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"
#include "./WindowInsets.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInsets::WindowInsets(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WindowInsets::WindowInsets(android::view::WindowInsets &arg0)
		: __JniBaseClass(
			"android.view.WindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject WindowInsets::consumeDisplayCutout()
	{
		return callObjectMethod(
			"consumeDisplayCutout",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets::consumeStableInsets()
	{
		return callObjectMethod(
			"consumeStableInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets::consumeSystemWindowInsets()
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
	QAndroidJniObject WindowInsets::getDisplayCutout()
	{
		return callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	QAndroidJniObject WindowInsets::getMandatorySystemGestureInsets()
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
	QAndroidJniObject WindowInsets::getStableInsets()
	{
		return callObjectMethod(
			"getStableInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	QAndroidJniObject WindowInsets::getSystemGestureInsets()
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
	QAndroidJniObject WindowInsets::getSystemWindowInsets()
	{
		return callObjectMethod(
			"getSystemWindowInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	QAndroidJniObject WindowInsets::getTappableElementInsets()
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
	QAndroidJniObject WindowInsets::inset(jint arg0, jint arg1, jint arg2, jint arg3)
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
	QAndroidJniObject WindowInsets::replaceSystemWindowInsets(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	QAndroidJniObject WindowInsets::replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3)
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
