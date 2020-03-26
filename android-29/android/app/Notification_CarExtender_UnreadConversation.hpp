#pragma once

#ifndef ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION
#define ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class RemoteInput;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::app
{
	class Notification_CarExtender_UnreadConversation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getMessages();
		QAndroidJniObject getRemoteInput();
		QAndroidJniObject getReplyPendingIntent();
		QAndroidJniObject getReadPendingIntent();
		jarray getParticipants();
		jstring getParticipant();
		jlong getLatestTimestamp();
	};
} // namespace __jni_impl::android::app

#include "RemoteInput.hpp"
#include "PendingIntent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_CarExtender_UnreadConversation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender$UnreadConversation",
			"(V)V");
	}
	
	// Methods
	jarray Notification_CarExtender_UnreadConversation::getMessages()
	{
		return __thiz.callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getRemoteInput()
	{
		return __thiz.callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReplyPendingIntent()
	{
		return __thiz.callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReadPendingIntent()
	{
		return __thiz.callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jarray Notification_CarExtender_UnreadConversation::getParticipants()
	{
		return __thiz.callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Notification_CarExtender_UnreadConversation::getParticipant()
	{
		return __thiz.callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_CarExtender_UnreadConversation : public __jni_impl::android::app::Notification_CarExtender_UnreadConversation
	{
	public:
		Notification_CarExtender_UnreadConversation(QAndroidJniObject obj) { __thiz = obj; }
		Notification_CarExtender_UnreadConversation()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION

