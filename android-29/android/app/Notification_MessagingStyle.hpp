#pragma once

#ifndef ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE
#define ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE

#include "../../__JniBaseClass.hpp"
#include "Notification_Style.hpp"

namespace __jni_impl::android::app
{
	class Person;
}
namespace __jni_impl::android::app
{
	class Notification_MessagingStyle_Message;
}

namespace __jni_impl::android::app
{
	class Notification_MessagingStyle : public __jni_impl::android::app::Notification_Style
	{
	public:
		// Fields
		static jint MAXIMUM_RETAINED_MESSAGES();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::android::app::Person arg0);
		
		// Methods
		QAndroidJniObject getUser();
		jstring getUserDisplayName();
		QAndroidJniObject setConversationTitle(jstring arg0);
		jstring getConversationTitle();
		QAndroidJniObject addHistoricMessage(__jni_impl::android::app::Notification_MessagingStyle_Message arg0);
		QAndroidJniObject getHistoricMessages();
		QAndroidJniObject setGroupConversation(jboolean arg0);
		jboolean isGroupConversation();
		QAndroidJniObject getMessages();
		QAndroidJniObject addMessage(jstring arg0, jlong arg1, jstring arg2);
		QAndroidJniObject addMessage(jstring arg0, jlong arg1, __jni_impl::android::app::Person arg2);
		QAndroidJniObject addMessage(__jni_impl::android::app::Notification_MessagingStyle_Message arg0);
	};
} // namespace __jni_impl::android::app

#include "Person.hpp"
#include "Notification_MessagingStyle_Message.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint Notification_MessagingStyle::MAXIMUM_RETAINED_MESSAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$MessagingStyle",
			"MAXIMUM_RETAINED_MESSAGES"
		);
	}
	
	// Constructors
	void Notification_MessagingStyle::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void Notification_MessagingStyle::__constructor(__jni_impl::android::app::Person arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle",
			"(Landroid/app/Person;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_MessagingStyle::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/app/Person;"
		);
	}
	jstring Notification_MessagingStyle::getUserDisplayName()
	{
		return __thiz.callObjectMethod(
			"getUserDisplayName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle::setConversationTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setConversationTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
	jstring Notification_MessagingStyle::getConversationTitle()
	{
		return __thiz.callObjectMethod(
			"getConversationTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle::addHistoricMessage(__jni_impl::android::app::Notification_MessagingStyle_Message arg0)
	{
		return __thiz.callObjectMethod(
			"addHistoricMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle::getHistoricMessages()
	{
		return __thiz.callObjectMethod(
			"getHistoricMessages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::setGroupConversation(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupConversation",
			"(Z)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
	jboolean Notification_MessagingStyle::isGroupConversation()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupConversation",
			"()Z"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::getMessages()
	{
		return __thiz.callObjectMethod(
			"getMessages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(jstring arg0, jlong arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(jstring arg0, jlong arg1, __jni_impl::android::app::Person arg2)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)Landroid/app/Notification$MessagingStyle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(__jni_impl::android::app::Notification_MessagingStyle_Message arg0)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_MessagingStyle : public __jni_impl::android::app::Notification_MessagingStyle
	{
	public:
		Notification_MessagingStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_MessagingStyle(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Notification_MessagingStyle(__jni_impl::android::app::Person arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE

