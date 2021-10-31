#include "../../os/Handler.hpp"
#include "./AccessibilityEvent.hpp"
#include "./AccessibilityRequestPreparer.hpp"
#include "./AccessibilityManager.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityManager::AccessibilityManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean AccessibilityManager::addAccessibilityStateChangeListener(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	void AccessibilityManager::addAccessibilityStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean AccessibilityManager::addTouchExplorationStateChangeListener(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.object()
		);
	}
	void AccessibilityManager::addTouchExplorationStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass AccessibilityManager::getAccessibilityServiceList()
	{
		return callObjectMethod(
			"getAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass AccessibilityManager::getEnabledAccessibilityServiceList(jint arg0)
	{
		return callObjectMethod(
			"getEnabledAccessibilityServiceList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass AccessibilityManager::getInstalledAccessibilityServiceList()
	{
		return callObjectMethod(
			"getInstalledAccessibilityServiceList",
			"()Ljava/util/List;"
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
	jboolean AccessibilityManager::removeAccessibilityStateChangeListener(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityManager::removeTouchExplorationStateChangeListener(__JniBaseClass arg0)
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

