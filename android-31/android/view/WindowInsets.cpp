#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"
#include "./RoundedCorner.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	WindowInsets::WindowInsets(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WindowInsets::WindowInsets(android::view::WindowInsets &arg0)
		: JObject(
			"android.view.WindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::WindowInsets WindowInsets::consumeDisplayCutout() const
	{
		return callObjectMethod(
			"consumeDisplayCutout",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets WindowInsets::consumeStableInsets() const
	{
		return callObjectMethod(
			"consumeStableInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets WindowInsets::consumeSystemWindowInsets() const
	{
		return callObjectMethod(
			"consumeSystemWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jboolean WindowInsets::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::view::DisplayCutout WindowInsets::getDisplayCutout() const
	{
		return callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	android::graphics::Insets WindowInsets::getInsets(jint arg0) const
	{
		return callObjectMethod(
			"getInsets",
			"(I)Landroid/graphics/Insets;",
			arg0
		);
	}
	android::graphics::Insets WindowInsets::getInsetsIgnoringVisibility(jint arg0) const
	{
		return callObjectMethod(
			"getInsetsIgnoringVisibility",
			"(I)Landroid/graphics/Insets;",
			arg0
		);
	}
	android::graphics::Insets WindowInsets::getMandatorySystemGestureInsets() const
	{
		return callObjectMethod(
			"getMandatorySystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Rect WindowInsets::getPrivacyIndicatorBounds() const
	{
		return callObjectMethod(
			"getPrivacyIndicatorBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	android::view::RoundedCorner WindowInsets::getRoundedCorner(jint arg0) const
	{
		return callObjectMethod(
			"getRoundedCorner",
			"(I)Landroid/view/RoundedCorner;",
			arg0
		);
	}
	jint WindowInsets::getStableInsetBottom() const
	{
		return callMethod<jint>(
			"getStableInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetLeft() const
	{
		return callMethod<jint>(
			"getStableInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetRight() const
	{
		return callMethod<jint>(
			"getStableInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getStableInsetTop() const
	{
		return callMethod<jint>(
			"getStableInsetTop",
			"()I"
		);
	}
	android::graphics::Insets WindowInsets::getStableInsets() const
	{
		return callObjectMethod(
			"getStableInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Insets WindowInsets::getSystemGestureInsets() const
	{
		return callObjectMethod(
			"getSystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jint WindowInsets::getSystemWindowInsetBottom() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetBottom",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetLeft() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetLeft",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetRight() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetRight",
			"()I"
		);
	}
	jint WindowInsets::getSystemWindowInsetTop() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetTop",
			"()I"
		);
	}
	android::graphics::Insets WindowInsets::getSystemWindowInsets() const
	{
		return callObjectMethod(
			"getSystemWindowInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Insets WindowInsets::getTappableElementInsets() const
	{
		return callObjectMethod(
			"getTappableElementInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	jboolean WindowInsets::hasInsets() const
	{
		return callMethod<jboolean>(
			"hasInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasStableInsets() const
	{
		return callMethod<jboolean>(
			"hasStableInsets",
			"()Z"
		);
	}
	jboolean WindowInsets::hasSystemWindowInsets() const
	{
		return callMethod<jboolean>(
			"hasSystemWindowInsets",
			"()Z"
		);
	}
	jint WindowInsets::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::view::WindowInsets WindowInsets::inset(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"inset",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	android::view::WindowInsets WindowInsets::inset(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jboolean WindowInsets::isConsumed() const
	{
		return callMethod<jboolean>(
			"isConsumed",
			"()Z"
		);
	}
	jboolean WindowInsets::isRound() const
	{
		return callMethod<jboolean>(
			"isRound",
			"()Z"
		);
	}
	jboolean WindowInsets::isVisible(jint arg0) const
	{
		return callMethod<jboolean>(
			"isVisible",
			"(I)Z",
			arg0
		);
	}
	android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	JString WindowInsets::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

