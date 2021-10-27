#include "../../os/Handler.hpp"
#include "./AccessibilityEvent.hpp"
#include "./AccessibilityRequestPreparer.hpp"
#include "./AccessibilityManager.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityManager::FLAG_CONTENT_CONTROLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_CONTROLS"
		);
	}
	jint AccessibilityManager::FLAG_CONTENT_ICONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_ICONS"
		);
	}
	jint AccessibilityManager::FLAG_CONTENT_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityManager",
			"FLAG_CONTENT_TEXT"
		);
	}
	
	AccessibilityManager::AccessibilityManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean AccessibilityManager::isAccessibilityButtonSupported()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.accessibility.AccessibilityManager",
			"isAccessibilityButtonSupported",
			"()Z"
		);
	}
	void AccessibilityManager::addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		__thiz.callMethod<void>(
			"addAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::addAccessibilityStateChangeListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::addAccessibilityStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::addTouchExplorationStateChangeListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::addTouchExplorationStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityManager::getAccessibilityServiceList()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AccessibilityManager::getEnabledAccessibilityServiceList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEnabledAccessibilityServiceList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityManager::getInstalledAccessibilityServiceList()
	{
		return __thiz.callObjectMethod(
			"getInstalledAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityManager::getRecommendedTimeoutMillis(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getRecommendedTimeoutMillis",
			"(II)I",
			arg0,
			arg1
		);
	}
	void AccessibilityManager::interrupt()
	{
		__thiz.callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean AccessibilityManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityManager::isTouchExplorationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isTouchExplorationEnabled",
			"()Z"
		);
	}
	void AccessibilityManager::removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		__thiz.callMethod<void>(
			"removeAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::removeAccessibilityStateChangeListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::removeTouchExplorationStateChangeListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::accessibility

