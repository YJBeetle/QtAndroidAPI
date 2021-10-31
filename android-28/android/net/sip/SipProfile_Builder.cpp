#include "./SipProfile.hpp"
#include "./SipProfile_Builder.hpp"

namespace android::net::sip
{
	// Fields
	
	// QJniObject forward
	SipProfile_Builder::SipProfile_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SipProfile_Builder::SipProfile_Builder(android::net::sip::SipProfile arg0)
		: __JniBaseClass(
			"android.net.sip.SipProfile$Builder",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.object()
		) {}
	SipProfile_Builder::SipProfile_Builder(jstring arg0)
		: __JniBaseClass(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SipProfile_Builder::SipProfile_Builder(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::net::sip::SipProfile SipProfile_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setAuthUserName(jstring arg0)
	{
		return callObjectMethod(
			"setAuthUserName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setAutoRegistration(jboolean arg0)
	{
		return callObjectMethod(
			"setAutoRegistration",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setOutboundProxy(jstring arg0)
	{
		return callObjectMethod(
			"setOutboundProxy",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setPassword(jstring arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setPort(jint arg0)
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setProfileName(jstring arg0)
	{
		return callObjectMethod(
			"setProfileName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setProtocol(jstring arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setSendKeepAlive(jboolean arg0)
	{
		return callObjectMethod(
			"setSendKeepAlive",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
} // namespace android::net::sip

