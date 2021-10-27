#pragma once

#ifndef ANDROID_NET_MAILTO
#define ANDROID_NET_MAILTO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class MailTo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring MAILTO_SCHEME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isMailTo(jstring arg0);
		static jboolean isMailTo(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		jstring getBody();
		jstring getCc();
		QAndroidJniObject getHeaders();
		jstring getSubject();
		jstring getTo();
		jstring toString();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	jstring MailTo::MAILTO_SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MailTo",
			"MAILTO_SCHEME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MailTo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.MailTo",
			"(V)V");
	}
	
	// Methods
	jboolean MailTo::isMailTo(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MailTo::isMailTo(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MailTo::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			arg0
		);
	}
	QAndroidJniObject MailTo::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MailTo::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getCc()
	{
		return __thiz.callObjectMethod(
			"getCc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MailTo::getHeaders()
	{
		return __thiz.callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
	jstring MailTo::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getTo()
	{
		return __thiz.callObjectMethod(
			"getTo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class MailTo : public __jni_impl::android::net::MailTo
	{
	public:
		MailTo(QAndroidJniObject obj) { __thiz = obj; }
		MailTo()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_MAILTO

