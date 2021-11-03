#include "./SipProfile.hpp"
#include "../../../JString.hpp"
#include "./SipProfile_Builder.hpp"

namespace android::net::sip
{
	// Fields
	
	// QJniObject forward
	SipProfile_Builder::SipProfile_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SipProfile_Builder::SipProfile_Builder(android::net::sip::SipProfile arg0)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.object()
		) {}
	SipProfile_Builder::SipProfile_Builder(JString arg0)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SipProfile_Builder::SipProfile_Builder(JString arg0, JString arg1)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::net::sip::SipProfile SipProfile_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setAuthUserName(JString arg0)
	{
		return callObjectMethod(
			"setAuthUserName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
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
	android::net::sip::SipProfile_Builder SipProfile_Builder::setDisplayName(JString arg0)
	{
		return callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setOutboundProxy(JString arg0)
	{
		return callObjectMethod(
			"setOutboundProxy",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setPassword(JString arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
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
	android::net::sip::SipProfile_Builder SipProfile_Builder::setProfileName(JString arg0)
	{
		return callObjectMethod(
			"setProfileName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::sip::SipProfile_Builder SipProfile_Builder::setProtocol(JString arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
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

