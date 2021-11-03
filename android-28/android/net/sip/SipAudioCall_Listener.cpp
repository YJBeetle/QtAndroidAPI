#include "./SipAudioCall.hpp"
#include "./SipProfile.hpp"
#include "../../../JString.hpp"
#include "./SipAudioCall_Listener.hpp"

namespace android::net::sip
{
	// Fields
	
	// QJniObject forward
	SipAudioCall_Listener::SipAudioCall_Listener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SipAudioCall_Listener::SipAudioCall_Listener()
		: JObject(
			"android.net.sip.SipAudioCall$Listener",
			"()V"
		) {}
	
	// Methods
	void SipAudioCall_Listener::onCallBusy(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onCallBusy",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onCallEnded(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onCallEnded",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onCallEstablished(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onCallHeld(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onCallHeld",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onCalling(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onCalling",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onChanged(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onChanged",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onError(android::net::sip::SipAudioCall arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipAudioCall;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void SipAudioCall_Listener::onReadyToCall(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onReadyToCall",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
	void SipAudioCall_Listener::onRinging(android::net::sip::SipAudioCall arg0, android::net::sip::SipProfile arg1) const
	{
		callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipAudioCall;Landroid/net/sip/SipProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SipAudioCall_Listener::onRingingBack(android::net::sip::SipAudioCall arg0) const
	{
		callMethod<void>(
			"onRingingBack",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.object()
		);
	}
} // namespace android::net::sip

