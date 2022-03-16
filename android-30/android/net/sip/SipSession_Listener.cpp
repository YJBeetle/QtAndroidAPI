#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "../../../JString.hpp"
#include "./SipSession_Listener.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	SipSession_Listener::SipSession_Listener()
		: JObject(
			"android.net.sip.SipSession$Listener",
			"()V"
		) {}
	
	// Methods
	void SipSession_Listener::onCallBusy(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onCallBusy",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
	void SipSession_Listener::onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onCallChangeFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void SipSession_Listener::onCallEnded(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onCallEnded",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
	void SipSession_Listener::onCallEstablished(android::net::sip::SipSession arg0, JString arg1) const
	{
		callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void SipSession_Listener::onCalling(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onCalling",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
	void SipSession_Listener::onError(android::net::sip::SipSession arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void SipSession_Listener::onRegistering(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onRegistering",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
	void SipSession_Listener::onRegistrationDone(android::net::sip::SipSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onRegistrationDone",
			"(Landroid/net/sip/SipSession;I)V",
			arg0.object(),
			arg1
		);
	}
	void SipSession_Listener::onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onRegistrationFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void SipSession_Listener::onRegistrationTimeout(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onRegistrationTimeout",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
	void SipSession_Listener::onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, JString arg2) const
	{
		callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipSession;Landroid/net/sip/SipProfile;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void SipSession_Listener::onRingingBack(android::net::sip::SipSession arg0) const
	{
		callMethod<void>(
			"onRingingBack",
			"(Landroid/net/sip/SipSession;)V",
			arg0.object()
		);
	}
} // namespace android::net::sip

