#pragma once

#include "../../os/Handler.def.hpp"
#include "./AccessibilityEvent.def.hpp"
#include "./AccessibilityRequestPreparer.def.hpp"
#include "./AccessibilityManager.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityManager::FLAG_CONTENT_CONTROLS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_CONTROLS"
		);
	}
	inline jint AccessibilityManager::FLAG_CONTENT_ICONS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_ICONS"
		);
	}
	inline jint AccessibilityManager::FLAG_CONTENT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_TEXT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AccessibilityManager::isAccessibilityButtonSupported()
	{
		return callStaticMethod<jboolean>(
			"android.view.accessibility.AccessibilityManager",
			"isAccessibilityButtonSupported",
			"()Z"
		);
	}
	inline void AccessibilityManager::addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0) const
	{
		callMethod<void>(
			"addAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.object()
		);
	}
	inline jboolean AccessibilityManager::addAccessibilityStateChangeListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityManager::addAccessibilityStateChangeListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean AccessibilityManager::addTouchExplorationStateChangeListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityManager::addTouchExplorationStateChangeListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject AccessibilityManager::getAccessibilityServiceList() const
	{
		return callObjectMethod(
			"getAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	inline JObject AccessibilityManager::getEnabledAccessibilityServiceList(jint arg0) const
	{
		return callObjectMethod(
			"getEnabledAccessibilityServiceList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JObject AccessibilityManager::getInstalledAccessibilityServiceList() const
	{
		return callObjectMethod(
			"getInstalledAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	inline jint AccessibilityManager::getRecommendedTimeoutMillis(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getRecommendedTimeoutMillis",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline void AccessibilityManager::interrupt() const
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	inline jboolean AccessibilityManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AccessibilityManager::isTouchExplorationEnabled() const
	{
		return callMethod<jboolean>(
			"isTouchExplorationEnabled",
			"()Z"
		);
	}
	inline void AccessibilityManager::removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0) const
	{
		callMethod<void>(
			"removeAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.object()
		);
	}
	inline jboolean AccessibilityManager::removeAccessibilityStateChangeListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	inline jboolean AccessibilityManager::removeTouchExplorationStateChangeListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityManager::sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

// Base class headers

