#pragma once

#ifndef ANDROID_NET_SIP_SIPEXCEPTION
#define ANDROID_NET_SIP_SIPEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::android::net::sip
{
	class SipException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::net::sip


namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"()V"
		);
	}
	void SipException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SipException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SipException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SipException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipException : public __jni_impl::android::net::sip::SipException
	{
	public:
		SipException(QAndroidJniObject obj) { __thiz = obj; }
		SipException()
		{
			__constructor();
		}
		SipException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SipException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net::sip

#endif // ANDROID_NET_SIP_SIPEXCEPTION

