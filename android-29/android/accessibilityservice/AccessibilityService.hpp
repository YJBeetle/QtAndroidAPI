#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE
#define ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityServiceInfo;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_MagnificationController;
}
namespace __jni_impl::android::accessibilityservice
{
	class FingerprintGestureController;
}
namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController;
}
namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityButtonController;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jint GESTURE_SWIPE_DOWN();
		static jint GESTURE_SWIPE_DOWN_AND_LEFT();
		static jint GESTURE_SWIPE_DOWN_AND_RIGHT();
		static jint GESTURE_SWIPE_DOWN_AND_UP();
		static jint GESTURE_SWIPE_LEFT();
		static jint GESTURE_SWIPE_LEFT_AND_DOWN();
		static jint GESTURE_SWIPE_LEFT_AND_RIGHT();
		static jint GESTURE_SWIPE_LEFT_AND_UP();
		static jint GESTURE_SWIPE_RIGHT();
		static jint GESTURE_SWIPE_RIGHT_AND_DOWN();
		static jint GESTURE_SWIPE_RIGHT_AND_LEFT();
		static jint GESTURE_SWIPE_RIGHT_AND_UP();
		static jint GESTURE_SWIPE_UP();
		static jint GESTURE_SWIPE_UP_AND_DOWN();
		static jint GESTURE_SWIPE_UP_AND_LEFT();
		static jint GESTURE_SWIPE_UP_AND_RIGHT();
		static jint GLOBAL_ACTION_BACK();
		static jint GLOBAL_ACTION_HOME();
		static jint GLOBAL_ACTION_LOCK_SCREEN();
		static jint GLOBAL_ACTION_NOTIFICATIONS();
		static jint GLOBAL_ACTION_POWER_DIALOG();
		static jint GLOBAL_ACTION_QUICK_SETTINGS();
		static jint GLOBAL_ACTION_RECENTS();
		static jint GLOBAL_ACTION_TAKE_SCREENSHOT();
		static jint GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN();
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		static jint SHOW_MODE_AUTO();
		static jint SHOW_MODE_HIDDEN();
		static jint SHOW_MODE_IGNORE_HARD_KEYBOARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject findFocus(jint arg0);
		jboolean performGlobalAction(jint arg0);
		void setServiceInfo(__jni_impl::android::accessibilityservice::AccessibilityServiceInfo arg0);
		QAndroidJniObject getWindows();
		QAndroidJniObject getRootInActiveWindow();
		void onInterrupt();
		void disableSelf();
		QAndroidJniObject getMagnificationController();
		QAndroidJniObject getFingerprintGestureController();
		jboolean dispatchGesture(__jni_impl::android::accessibilityservice::GestureDescription arg0, __jni_impl::android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject getSoftKeyboardController();
		QAndroidJniObject getAccessibilityButtonController();
		QAndroidJniObject getSystemService(jstring arg0);
		QAndroidJniObject getServiceInfo();
	};
} // namespace __jni_impl::android::accessibilityservice

#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../content/Intent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "AccessibilityServiceInfo.hpp"
#include "../view/KeyEvent.hpp"
#include "AccessibilityService_MagnificationController.hpp"
#include "FingerprintGestureController.hpp"
#include "GestureDescription.hpp"
#include "AccessibilityService_GestureResultCallback.hpp"
#include "../os/Handler.hpp"
#include "AccessibilityService_SoftKeyboardController.hpp"
#include "AccessibilityButtonController.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	jint AccessibilityService::GESTURE_SWIPE_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN");
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_LEFT");
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_RIGHT");
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_UP");
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT");
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_DOWN");
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_RIGHT");
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_UP");
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT");
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_DOWN");
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_LEFT");
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_UP");
	}
	jint AccessibilityService::GESTURE_SWIPE_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP");
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_DOWN");
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_LEFT");
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_RIGHT");
	}
	jint AccessibilityService::GLOBAL_ACTION_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_BACK");
	}
	jint AccessibilityService::GLOBAL_ACTION_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_HOME");
	}
	jint AccessibilityService::GLOBAL_ACTION_LOCK_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_LOCK_SCREEN");
	}
	jint AccessibilityService::GLOBAL_ACTION_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_NOTIFICATIONS");
	}
	jint AccessibilityService::GLOBAL_ACTION_POWER_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_POWER_DIALOG");
	}
	jint AccessibilityService::GLOBAL_ACTION_QUICK_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_QUICK_SETTINGS");
	}
	jint AccessibilityService::GLOBAL_ACTION_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_RECENTS");
	}
	jint AccessibilityService::GLOBAL_ACTION_TAKE_SCREENSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TAKE_SCREENSHOT");
	}
	jint AccessibilityService::GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN");
	}
	QAndroidJniObject AccessibilityService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccessibilityService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	jint AccessibilityService::SHOW_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_AUTO");
	}
	jint AccessibilityService::SHOW_MODE_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_HIDDEN");
	}
	jint AccessibilityService::SHOW_MODE_IGNORE_HARD_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_IGNORE_HARD_KEYBOARD");
	}
	
	// Constructors
	void AccessibilityService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService",
			"()V");
	}
	
	// Methods
	void AccessibilityService::onAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"onAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityService::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0);
	}
	jboolean AccessibilityService::performGlobalAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0);
	}
	void AccessibilityService::setServiceInfo(__jni_impl::android::accessibilityservice::AccessibilityServiceInfo arg0)
	{
		__thiz.callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityService::getWindows()
	{
		return __thiz.callObjectMethod(
			"getWindows",
			"()Ljava/util/List;");
	}
	QAndroidJniObject AccessibilityService::getRootInActiveWindow()
	{
		return __thiz.callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;");
	}
	void AccessibilityService::onInterrupt()
	{
		__thiz.callMethod<void>(
			"onInterrupt",
			"()V");
	}
	void AccessibilityService::disableSelf()
	{
		__thiz.callMethod<void>(
			"disableSelf",
			"()V");
	}
	QAndroidJniObject AccessibilityService::getMagnificationController()
	{
		return __thiz.callObjectMethod(
			"getMagnificationController",
			"()Landroid/accessibilityservice/AccessibilityService$MagnificationController;");
	}
	QAndroidJniObject AccessibilityService::getFingerprintGestureController()
	{
		return __thiz.callObjectMethod(
			"getFingerprintGestureController",
			"()Landroid/accessibilityservice/FingerprintGestureController;");
	}
	jboolean AccessibilityService::dispatchGesture(__jni_impl::android::accessibilityservice::GestureDescription arg0, __jni_impl::android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGesture",
			"(Landroid/accessibilityservice/GestureDescription;Landroid/accessibilityservice/AccessibilityService$GestureResultCallback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject AccessibilityService::getSoftKeyboardController()
	{
		return __thiz.callObjectMethod(
			"getSoftKeyboardController",
			"()Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController;");
	}
	QAndroidJniObject AccessibilityService::getAccessibilityButtonController()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityButtonController",
			"()Landroid/accessibilityservice/AccessibilityButtonController;");
	}
	QAndroidJniObject AccessibilityService::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject AccessibilityService::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;");
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityService : public __jni_impl::android::accessibilityservice::AccessibilityService
	{
	public:
		AccessibilityService(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityService()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE

