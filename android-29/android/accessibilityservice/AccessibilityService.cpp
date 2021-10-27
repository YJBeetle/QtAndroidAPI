#include "./AccessibilityButtonController.hpp"
#include "./AccessibilityService_GestureResultCallback.hpp"
#include "./AccessibilityService_MagnificationController.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"
#include "./AccessibilityServiceInfo.hpp"
#include "./FingerprintGestureController.hpp"
#include "./GestureDescription.hpp"
#include "../content/Intent.hpp"
#include "../os/Handler.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "./AccessibilityService.hpp"

namespace android::accessibilityservice
{
	// Fields
	jint AccessibilityService::GESTURE_SWIPE_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_DOWN_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_DOWN_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_LEFT_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_LEFT_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_RIGHT_AND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_RIGHT_AND_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_DOWN"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_LEFT"
		);
	}
	jint AccessibilityService::GESTURE_SWIPE_UP_AND_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GESTURE_SWIPE_UP_AND_RIGHT"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_BACK"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_HOME"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_LOCK_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_LOCK_SCREEN"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_NOTIFICATIONS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_POWER_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_POWER_DIALOG"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_QUICK_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_QUICK_SETTINGS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_RECENTS"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_TAKE_SCREENSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TAKE_SCREENSHOT"
		);
	}
	jint AccessibilityService::GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"GLOBAL_ACTION_TOGGLE_SPLIT_SCREEN"
		);
	}
	jstring AccessibilityService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accessibilityservice.AccessibilityService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityService::SHOW_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_AUTO"
		);
	}
	jint AccessibilityService::SHOW_MODE_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_HIDDEN"
		);
	}
	jint AccessibilityService::SHOW_MODE_IGNORE_HARD_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.AccessibilityService",
			"SHOW_MODE_IGNORE_HARD_KEYBOARD"
		);
	}
	
	AccessibilityService::AccessibilityService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessibilityService::AccessibilityService()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityService::disableSelf()
	{
		__thiz.callMethod<void>(
			"disableSelf",
			"()V"
		);
	}
	jboolean AccessibilityService::dispatchGesture(android::accessibilityservice::GestureDescription arg0, android::accessibilityservice::AccessibilityService_GestureResultCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGesture",
			"(Landroid/accessibilityservice/GestureDescription;Landroid/accessibilityservice/AccessibilityService$GestureResultCallback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityService::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityService::getAccessibilityButtonController()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityButtonController",
			"()Landroid/accessibilityservice/AccessibilityButtonController;"
		);
	}
	QAndroidJniObject AccessibilityService::getFingerprintGestureController()
	{
		return __thiz.callObjectMethod(
			"getFingerprintGestureController",
			"()Landroid/accessibilityservice/FingerprintGestureController;"
		);
	}
	QAndroidJniObject AccessibilityService::getMagnificationController()
	{
		return __thiz.callObjectMethod(
			"getMagnificationController",
			"()Landroid/accessibilityservice/AccessibilityService$MagnificationController;"
		);
	}
	QAndroidJniObject AccessibilityService::getRootInActiveWindow()
	{
		return __thiz.callObjectMethod(
			"getRootInActiveWindow",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityService::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/accessibilityservice/AccessibilityServiceInfo;"
		);
	}
	QAndroidJniObject AccessibilityService::getSoftKeyboardController()
	{
		return __thiz.callObjectMethod(
			"getSoftKeyboardController",
			"()Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController;"
		);
	}
	jobject AccessibilityService::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AccessibilityService::getSystemService(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject AccessibilityService::getWindows()
	{
		return __thiz.callObjectMethod(
			"getWindows",
			"()Ljava/util/List;"
		);
	}
	void AccessibilityService::onAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"onAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService::onInterrupt()
	{
		__thiz.callMethod<void>(
			"onInterrupt",
			"()V"
		);
	}
	jboolean AccessibilityService::performGlobalAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performGlobalAction",
			"(I)Z",
			arg0
		);
	}
	void AccessibilityService::setServiceInfo(android::accessibilityservice::AccessibilityServiceInfo arg0)
	{
		__thiz.callMethod<void>(
			"setServiceInfo",
			"(Landroid/accessibilityservice/AccessibilityServiceInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accessibilityservice

