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
		static QAndroidJniObject MAILTO_SCHEME();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject getHeaders();
		static jboolean isMailTo(jstring arg0);
		QAndroidJniObject getTo();
		QAndroidJniObject getCc();
		QAndroidJniObject getSubject();
		QAndroidJniObject getBody();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject MailTo::MAILTO_SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MailTo",
			"MAILTO_SCHEME",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MailTo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.MailTo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MailTo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MailTo::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			arg0);
	}
	QAndroidJniObject MailTo::getHeaders()
	{
		return __thiz.callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;");
	}
	jboolean MailTo::isMailTo(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject MailTo::getTo()
	{
		return __thiz.callObjectMethod(
			"getTo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MailTo::getCc()
	{
		return __thiz.callObjectMethod(
			"getCc",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MailTo::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MailTo::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/lang/String;");
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

