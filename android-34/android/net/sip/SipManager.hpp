#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./SipAudioCall.def.hpp"
#include "./SipAudioCall_Listener.def.hpp"
#include "./SipProfile.def.hpp"
#include "./SipSession.def.hpp"
#include "./SipSession_Listener.def.hpp"
#include "../../../JString.hpp"
#include "./SipManager.def.hpp"

namespace android::net::sip
{
	// Fields
	inline JString SipManager::EXTRA_CALL_ID()
	{
		return getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_CALL_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString SipManager::EXTRA_OFFER_SD()
	{
		return getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_OFFER_SD",
			"Ljava/lang/String;"
		);
	}
	inline jint SipManager::INCOMING_CALL_RESULT_CODE()
	{
		return getStaticField<jint>(
			"android.net.sip.SipManager",
			"INCOMING_CALL_RESULT_CODE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString SipManager::getCallId(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getCallId",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString SipManager::getOfferSessionDescription(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getOfferSessionDescription",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean SipManager::isApiSupported(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isApiSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline jboolean SipManager::isIncomingCallIntent(android::content::Intent arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isIncomingCallIntent",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline jboolean SipManager::isSipWifiOnly(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isSipWifiOnly",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline jboolean SipManager::isVoipSupported(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isVoipSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline android::net::sip::SipManager SipManager::newInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipManager",
			"newInstance",
			"(Landroid/content/Context;)Landroid/net/sip/SipManager;",
			arg0.object()
		);
	}
	inline void SipManager::close(JString arg0) const
	{
		callMethod<void>(
			"close",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipSession SipManager::createSipSession(android::net::sip::SipProfile arg0, android::net::sip::SipSession_Listener arg1) const
	{
		return callObjectMethod(
			"createSipSession",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession$Listener;)Landroid/net/sip/SipSession;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::sip::SipSession SipManager::getSessionFor(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"getSessionFor",
			"(Landroid/content/Intent;)Landroid/net/sip/SipSession;",
			arg0.object()
		);
	}
	inline jboolean SipManager::isOpened(JString arg0) const
	{
		return callMethod<jboolean>(
			"isOpened",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean SipManager::isRegistered(JString arg0) const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline android::net::sip::SipAudioCall SipManager::makeAudioCall(android::net::sip::SipProfile arg0, android::net::sip::SipProfile arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3) const
	{
		return callObjectMethod(
			"makeAudioCall",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipProfile;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline android::net::sip::SipAudioCall SipManager::makeAudioCall(JString arg0, JString arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3) const
	{
		return callObjectMethod(
			"makeAudioCall",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline void SipManager::open(android::net::sip::SipProfile arg0) const
	{
		callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.object()
		);
	}
	inline void SipManager::open(android::net::sip::SipProfile arg0, android::app::PendingIntent arg1, JObject arg2) const
	{
		callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;Landroid/app/PendingIntent;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SipManager::register_(android::net::sip::SipProfile arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"register",
			"(Landroid/net/sip/SipProfile;ILandroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void SipManager::setRegistrationListener(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setRegistrationListener",
			"(Ljava/lang/String;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::net::sip::SipAudioCall SipManager::takeAudioCall(android::content::Intent arg0, android::net::sip::SipAudioCall_Listener arg1) const
	{
		return callObjectMethod(
			"takeAudioCall",
			"(Landroid/content/Intent;Landroid/net/sip/SipAudioCall$Listener;)Landroid/net/sip/SipAudioCall;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SipManager::unregister(android::net::sip::SipProfile arg0, JObject arg1) const
	{
		callMethod<void>(
			"unregister",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::sip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::sip;
#endif
