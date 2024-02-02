#pragma once

#include "../graphics/Rect.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./View.def.hpp"
#include "./accessibility/AccessibilityNodeInfo_TouchDelegateInfo.def.hpp"
#include "./TouchDelegate.def.hpp"

namespace android::view
{
	// Fields
	inline jint TouchDelegate::ABOVE()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"ABOVE"
		);
	}
	inline jint TouchDelegate::BELOW()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"BELOW"
		);
	}
	inline jint TouchDelegate::TO_LEFT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_LEFT"
		);
	}
	inline jint TouchDelegate::TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_RIGHT"
		);
	}
	
	// Constructors
	inline TouchDelegate::TouchDelegate(android::graphics::Rect arg0, android::view::View arg1)
		: JObject(
			"android.view.TouchDelegate",
			"(Landroid/graphics/Rect;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo TouchDelegate::getTouchDelegateInfo() const
	{
		return callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	inline jboolean TouchDelegate::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TouchDelegate::onTouchExplorationHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchExplorationHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
