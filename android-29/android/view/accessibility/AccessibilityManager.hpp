#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityRequestPreparer;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_CONTENT_CONTROLS();
		static jint FLAG_CONTENT_ICONS();
		static jint FLAG_CONTENT_TEXT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void interrupt();
		jboolean isEnabled();
		void sendAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		jboolean isTouchExplorationEnabled();
		QAndroidJniObject getAccessibilityServiceList();
		QAndroidJniObject getInstalledAccessibilityServiceList();
		QAndroidJniObject getEnabledAccessibilityServiceList(jint arg0);
		void addAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		jboolean addAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0);
		jboolean removeAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0);
		void addTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		jboolean addTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0);
		jboolean removeTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0);
		void addAccessibilityRequestPreparer(__jni_impl::android::view::accessibility::AccessibilityRequestPreparer arg0);
		void removeAccessibilityRequestPreparer(__jni_impl::android::view::accessibility::AccessibilityRequestPreparer arg0);
		jint getRecommendedTimeoutMillis(jint arg0, jint arg1);
		static jboolean isAccessibilityButtonSupported();
	};
} // namespace __jni_impl::android::view::accessibility

#include "AccessibilityEvent.hpp"
#include "../../os/Handler.hpp"
#include "AccessibilityRequestPreparer.hpp"

namespace __jni_impl::android::view::accessibility
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
	
	// Constructors
	void AccessibilityManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityManager",
			"(V)V");
	}
	
	// Methods
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
	void AccessibilityManager::sendAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::isTouchExplorationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isTouchExplorationEnabled",
			"()Z"
		);
	}
	QAndroidJniObject AccessibilityManager::getAccessibilityServiceList()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityServiceList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AccessibilityManager::getInstalledAccessibilityServiceList()
	{
		return __thiz.callObjectMethod(
			"getInstalledAccessibilityServiceList",
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
	void AccessibilityManager::addAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::addAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::removeAccessibilityStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAccessibilityStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::addTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::addTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityManager::removeTouchExplorationStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeTouchExplorationStateChangeListener",
			"(Landroid/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::addAccessibilityRequestPreparer(__jni_impl::android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		__thiz.callMethod<void>(
			"addAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityManager::removeAccessibilityRequestPreparer(__jni_impl::android::view::accessibility::AccessibilityRequestPreparer arg0)
	{
		__thiz.callMethod<void>(
			"removeAccessibilityRequestPreparer",
			"(Landroid/view/accessibility/AccessibilityRequestPreparer;)V",
			arg0.__jniObject().object()
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
	jboolean AccessibilityManager::isAccessibilityButtonSupported()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.accessibility.AccessibilityManager",
			"isAccessibilityButtonSupported",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityManager : public __jni_impl::android::view::accessibility::AccessibilityManager
	{
	public:
		AccessibilityManager(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityManager()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER

