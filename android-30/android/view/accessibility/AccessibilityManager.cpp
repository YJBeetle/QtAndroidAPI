#include "../../os/Handler.hpp"
#include "./AccessibilityEvent.hpp"
#include "./AccessibilityRequestPreparer.hpp"
#include "./AccessibilityManager.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityManager::FLAG_CONTENT_CONTROLS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_CONTROLS"
		);
	}
	jint AccessibilityManager::FLAG_CONTENT_ICONS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_ICONS"
		);
	}
	jint AccessibilityManager::FLAG_CONTENT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_TEXT"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityManager::AccessibilityManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AccessibilityManager::isAccessibilityButtonSupported()
	{
		return callStaticMethod<jboolean>(
			"android.view.accessibility.AccessibilityManager",
			"isAccessibilityButtonSupported",
			"()Z"
		);
	}
	void AccessibilityManager::addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		callMethod<void>(
			"addAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.object()
		);
	}
	jboolean AccessibilityManager::addAccessibilityStateChangeListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	void AccessibilityManager::addAccessibilityStateChangeListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean AccessibilityManager::addTouchExplorationStateChangeListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.object()
		);
	}
	void AccessibilityManager::addTouchExplorationStateChangeListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject AccessibilityManager::getAccessibilityServiceList()
	{
		return callObjectMethod(
			"getAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	JObject AccessibilityManager::getEnabledAccessibilityServiceList(jint arg0)
	{
		return callObjectMethod(
			"getEnabledAccessibilityServiceList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	JObject AccessibilityManager::getInstalledAccessibilityServiceList()
	{
		return callObjectMethod(
			"getInstalledAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityManager::getRecommendedTimeoutMillis(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getRecommendedTimeoutMillis",
			"(II)I",
			arg0,
			arg1
		);
	}
	void AccessibilityManager::interrupt()
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean AccessibilityManager::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityManager::isTouchExplorationEnabled()
	{
		return callMethod<jboolean>(
			"isTouchExplorationEnabled",
			"()Z"
		);
	}
	void AccessibilityManager::removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		callMethod<void>(
			"removeAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.object()
		);
	}
	jboolean AccessibilityManager::removeAccessibilityStateChangeListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityManager::removeTouchExplorationStateChangeListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.object()
		);
	}
	void AccessibilityManager::sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

