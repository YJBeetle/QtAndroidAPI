#pragma once

#include "./SipProfile.def.hpp"
#include "../../../JString.hpp"
#include "./SipProfile_Builder.def.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	inline SipProfile_Builder::SipProfile_Builder(android::net::sip::SipProfile arg0)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.object()
		) {}
	inline SipProfile_Builder::SipProfile_Builder(JString arg0)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SipProfile_Builder::SipProfile_Builder(JString arg0, JString arg1)
		: JObject(
			"android.net.sip.SipProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::net::sip::SipProfile SipProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setAuthUserName(JString arg0) const
	{
		return callObjectMethod(
			"setAuthUserName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setAutoRegistration(jboolean arg0) const
	{
		return callObjectMethod(
			"setAutoRegistration",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"setDisplayName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setOutboundProxy(JString arg0) const
	{
		return callObjectMethod(
			"setOutboundProxy",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setPassword(JString arg0) const
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setPort(jint arg0) const
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setProfileName(JString arg0) const
	{
		return callObjectMethod(
			"setProfileName",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setProtocol(JString arg0) const
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipProfile_Builder SipProfile_Builder::setSendKeepAlive(jboolean arg0) const
	{
		return callObjectMethod(
			"setSendKeepAlive",
			"(Z)Landroid/net/sip/SipProfile$Builder;",
			arg0
		);
	}
} // namespace android::net::sip

// Base class headers

