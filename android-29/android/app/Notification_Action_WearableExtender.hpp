#pragma once

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
		jstring getCancelLabel();
		jstring getConfirmLabel();
		jboolean getHintDisplayActionInline();
		jboolean getHintLaunchesActivity();
		jstring getInProgressLabel();
		jboolean isAvailableOffline();
		QAndroidJniObject setAvailableOffline(jboolean arg0);
		QAndroidJniObject setCancelLabel(jstring arg0);
		QAndroidJniObject setCancelLabel(const QString &arg0);
		QAndroidJniObject setConfirmLabel(jstring arg0);
		QAndroidJniObject setConfirmLabel(const QString &arg0);
		QAndroidJniObject setHintDisplayActionInline(jboolean arg0);
		QAndroidJniObject setHintLaunchesActivity(jboolean arg0);
		QAndroidJniObject setInProgressLabel(jstring arg0);
		QAndroidJniObject setInProgressLabel(const QString &arg0);
	};
} // namespace __jni_impl::android::app

#include "./Notification_Action.hpp"
#include "./Notification_Action_Builder.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_Action_WearableExtender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$WearableExtender",
			"()V"
		);
	}
	void Notification_Action_WearableExtender::__constructor(__jni_impl::android::app::Notification_Action arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$WearableExtender",
			"(Landroid/app/Notification$Action;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_Action_WearableExtender::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action$WearableExtender;"
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::extend(__jni_impl::android::app::Notification_Action_Builder arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Builder;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object()
		);
	}
	jstring Notification_Action_WearableExtender::getCancelLabel()
	{
		return __thiz.callObjectMethod(
			"getCancelLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Notification_Action_WearableExtender::getConfirmLabel()
	{
		return __thiz.callObjectMethod(
			"getConfirmLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Notification_Action_WearableExtender::getHintDisplayActionInline()
	{
		return __thiz.callMethod<jboolean>(
			"getHintDisplayActionInline",
			"()Z"
		);
	}
	jboolean Notification_Action_WearableExtender::getHintLaunchesActivity()
	{
		return __thiz.callMethod<jboolean>(
			"getHintLaunchesActivity",
			"()Z"
		);
	}
	jstring Notification_Action_WearableExtender::getInProgressLabel()
	{
		return __thiz.callObjectMethod(
			"getInProgressLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Notification_Action_WearableExtender::isAvailableOffline()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailableOffline",
			"()Z"
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setAvailableOffline(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAvailableOffline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setCancelLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setCancelLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setConfirmLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setConfirmLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintDisplayActionInline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintLaunchesActivity",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setInProgressLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setInProgressLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

