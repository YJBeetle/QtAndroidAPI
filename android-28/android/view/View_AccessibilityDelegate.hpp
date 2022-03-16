#pragma once

#include "../os/Bundle.def.hpp"
#include "./View.def.hpp"
#include "./ViewGroup.def.hpp"
#include "./accessibility/AccessibilityEvent.def.hpp"
#include "./accessibility/AccessibilityNodeInfo.def.hpp"
#include "./accessibility/AccessibilityNodeProvider.def.hpp"
#include "../../JString.hpp"
#include "./View_AccessibilityDelegate.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline View_AccessibilityDelegate::View_AccessibilityDelegate()
		: JObject(
			"android.view.View$AccessibilityDelegate",
			"()V"
		) {}
	
	// Methods
	inline void View_AccessibilityDelegate::addExtraDataToAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1, JString arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline jboolean View_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeProvider View_AccessibilityDelegate::getAccessibilityNodeProvider(android::view::View arg0) const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeProvider;",
			arg0.object()
		);
	}
	inline void View_AccessibilityDelegate::onInitializeAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void View_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void View_AccessibilityDelegate::onPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean View_AccessibilityDelegate::onRequestSendAccessibilityEvent(android::view::ViewGroup arg0, android::view::View arg1, android::view::accessibility::AccessibilityEvent arg2) const
	{
		return callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean View_AccessibilityDelegate::performAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"performAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void View_AccessibilityDelegate::sendAccessibilityEvent(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View_AccessibilityDelegate::sendAccessibilityEventUnchecked(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

// Base class headers

