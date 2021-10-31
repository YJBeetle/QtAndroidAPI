#include "./SipProfile.hpp"
#include "./SipProfile_Builder.hpp"

namespace android::net::sip
{
	// Fields
	
	SipProfile_Builder::SipProfile_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SipProfile_Builder::SipProfile_Builder(android::net::sip::SipProfile arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.__jniObject().object()
		);
	}
	SipProfile_Builder::SipProfile_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SipProfile_Builder::SipProfile_Builder(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SipProfile_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	QAndroidJniObject SipProfile_Builder::setAuthUserName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthUserName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setAutoRegistration(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAutoRegistration",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setOutboundProxy(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOutboundProxy",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPort",
			"(I)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setProfileName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProfileName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setProtocol(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	QAndroidJniObject SipProfile_Builder::setSendKeepAlive(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSendKeepAlive",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
} // namespace android::net::sip

