#pragma once

#ifndef ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER
#define ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification_CarExtender_UnreadConversation;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class RemoteInput;
}

namespace __jni_impl::android::app
{
	class Notification_CarExtender_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setReplyAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::RemoteInput arg1);
		QAndroidJniObject addMessage(jstring arg0);
		QAndroidJniObject addMessage(const QString &arg0);
		QAndroidJniObject setReadPendingIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setLatestTimestamp(jlong arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_CarExtender_UnreadConversation.hpp"
#include "PendingIntent.hpp"
#include "RemoteInput.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_CarExtender_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Notification_CarExtender_Builder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_CarExtender_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setReplyAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::RemoteInput arg1)
	{
		return __thiz.callObjectMethod(
			"setReplyAction",
			"(Landroid/app/PendingIntent;Landroid/app/RemoteInput;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::addMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::addMessage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setReadPendingIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setReadPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setLatestTimestamp(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setLatestTimestamp",
			"(J)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_CarExtender_Builder : public __jni_impl::android::app::Notification_CarExtender_Builder
	{
	public:
		Notification_CarExtender_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Notification_CarExtender_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER

