#pragma once

#ifndef ANDROID_NET_SIP_SIPPROFILE_BUILDER
#define ANDROID_NET_SIP_SIPPROFILE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::sip
{
	class SipProfile;
}

namespace __jni_impl::android::net::sip
{
	class SipProfile_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::android::net::sip::SipProfile arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAuthUserName(jstring arg0);
		QAndroidJniObject setOutboundProxy(jstring arg0);
		QAndroidJniObject setDisplayName(jstring arg0);
		QAndroidJniObject setSendKeepAlive(jboolean arg0);
		QAndroidJniObject setAutoRegistration(jboolean arg0);
		QAndroidJniObject setProtocol(jstring arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setProfileName(jstring arg0);
	};
} // namespace __jni_impl::android::net::sip

#include "SipProfile.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipProfile_Builder::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SipProfile_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SipProfile_Builder::__constructor(__jni_impl::android::net::sip::SipProfile arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject SipProfile_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/sip/SipProfile;");
	}
	QAndroidJniObject SipProfile_Builder::setAuthUserName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthUserName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setOutboundProxy(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOutboundProxy",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setSendKeepAlive(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSendKeepAlive",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setAutoRegistration(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAutoRegistration",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setProtocol(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPort",
			"(I)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
	QAndroidJniObject SipProfile_Builder::setProfileName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProfileName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipProfile_Builder : public __jni_impl::android::net::sip::SipProfile_Builder
	{
	public:
		SipProfile_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SipProfile_Builder(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SipProfile_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SipProfile_Builder(__jni_impl::android::net::sip::SipProfile arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::sip

#endif // ANDROID_NET_SIP_SIPPROFILE_BUILDER

