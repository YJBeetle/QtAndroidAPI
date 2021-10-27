#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Person;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class Notification_MessagingStyle_Message : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jlong arg1, __jni_impl::android::app::Person arg2);
		void __constructor(const QString &arg0, jlong arg1, __jni_impl::android::app::Person arg2);
		void __constructor(jstring arg0, jlong arg1, jstring arg2);
		void __constructor(const QString &arg0, jlong arg1, const QString &arg2);
		
		// Methods
		jstring getDataMimeType();
		QAndroidJniObject getDataUri();
		QAndroidJniObject getExtras();
		jstring getSender();
		QAndroidJniObject getSenderPerson();
		jstring getText();
		jlong getTimestamp();
		QAndroidJniObject setData(jstring arg0, __jni_impl::android::net::Uri arg1);
		QAndroidJniObject setData(const QString &arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::app

#include "./Person.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_MessagingStyle_Message::__constructor(jstring arg0, jlong arg1, __jni_impl::android::app::Person arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Notification_MessagingStyle_Message::__constructor(const QString &arg0, jlong arg1, __jni_impl::android::app::Person arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Notification_MessagingStyle_Message::__constructor(jstring arg0, jlong arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Notification_MessagingStyle_Message::__constructor(const QString &arg0, jlong arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jstring Notification_MessagingStyle_Message::getDataMimeType()
	{
		return __thiz.callObjectMethod(
			"getDataMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getDataUri()
	{
		return __thiz.callObjectMethod(
			"getDataUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Notification_MessagingStyle_Message::getSender()
	{
		return __thiz.callObjectMethod(
			"getSender",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getSenderPerson()
	{
		return __thiz.callObjectMethod(
			"getSenderPerson",
			"()Landroid/app/Person;"
		);
	}
	jstring Notification_MessagingStyle_Message::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong Notification_MessagingStyle_Message::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::setData(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		return __thiz.callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::setData(const QString &arg0, __jni_impl::android::net::Uri arg1)
	{
		return __thiz.callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_MessagingStyle_Message : public __jni_impl::android::app::Notification_MessagingStyle_Message
	{
	public:
		Notification_MessagingStyle_Message(QAndroidJniObject obj) { __thiz = obj; }
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, __jni_impl::android::app::Person arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

