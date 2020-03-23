#pragma once

#ifndef ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER
#define ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification_Action;
}
namespace __jni_impl::android::app
{
	class Notification_Action_Builder;
}

namespace __jni_impl::android::app
{
	class Notification_Action_WearableExtender : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification_Action arg0);
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject extend(__jni_impl::android::app::Notification_Action_Builder arg0);
		QAndroidJniObject setAvailableOffline(jboolean arg0);
		jboolean isAvailableOffline();
		QAndroidJniObject setInProgressLabel(jstring arg0);
		QAndroidJniObject getInProgressLabel();
		QAndroidJniObject setConfirmLabel(jstring arg0);
		QAndroidJniObject getConfirmLabel();
		QAndroidJniObject setCancelLabel(jstring arg0);
		QAndroidJniObject getCancelLabel();
		QAndroidJniObject setHintLaunchesActivity(jboolean arg0);
		jboolean getHintLaunchesActivity();
		QAndroidJniObject setHintDisplayActionInline(jboolean arg0);
		jboolean getHintDisplayActionInline();
	};
} // namespace __jni_impl::android::app

#include "Notification_Action.hpp"
#include "Notification_Action_Builder.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_Action_WearableExtender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$WearableExtender",
			"()V");
	}
	void Notification_Action_WearableExtender::__constructor(__jni_impl::android::app::Notification_Action arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$WearableExtender",
			"(Landroid/app/Notification$Action;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_Action_WearableExtender::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action$WearableExtender;");
	}
	QAndroidJniObject Notification_Action_WearableExtender::extend(__jni_impl::android::app::Notification_Action_Builder arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Builder;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_Action_WearableExtender::setAvailableOffline(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAvailableOffline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	jboolean Notification_Action_WearableExtender::isAvailableOffline()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailableOffline",
			"()Z");
	}
	QAndroidJniObject Notification_Action_WearableExtender::setInProgressLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	QAndroidJniObject Notification_Action_WearableExtender::getInProgressLabel()
	{
		return __thiz.callObjectMethod(
			"getInProgressLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject Notification_Action_WearableExtender::setConfirmLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	QAndroidJniObject Notification_Action_WearableExtender::getConfirmLabel()
	{
		return __thiz.callObjectMethod(
			"getConfirmLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject Notification_Action_WearableExtender::setCancelLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	QAndroidJniObject Notification_Action_WearableExtender::getCancelLabel()
	{
		return __thiz.callObjectMethod(
			"getCancelLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintLaunchesActivity",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	jboolean Notification_Action_WearableExtender::getHintLaunchesActivity()
	{
		return __thiz.callMethod<jboolean>(
			"getHintLaunchesActivity",
			"()Z");
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintDisplayActionInline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0);
	}
	jboolean Notification_Action_WearableExtender::getHintDisplayActionInline()
	{
		return __thiz.callMethod<jboolean>(
			"getHintDisplayActionInline",
			"()Z");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_Action_WearableExtender : public __jni_impl::android::app::Notification_Action_WearableExtender
	{
	public:
		Notification_Action_WearableExtender(QAndroidJniObject obj) { __thiz = obj; }
		Notification_Action_WearableExtender()
		{
			__constructor();
		}
		Notification_Action_WearableExtender(__jni_impl::android::app::Notification_Action arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER

