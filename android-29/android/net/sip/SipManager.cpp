#include "../../app/PendingIntent.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./SipAudioCall.hpp"
#include "./SipAudioCall_Listener.hpp"
#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "./SipSession_Listener.hpp"
#include "./SipManager.hpp"

namespace android::net::sip
{
	// Fields
	jstring SipManager::EXTRA_CALL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_CALL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipManager::EXTRA_OFFER_SD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_OFFER_SD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SipManager::INCOMING_CALL_RESULT_CODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipManager",
			"INCOMING_CALL_RESULT_CODE"
		);
	}
	
	// QAndroidJniObject forward
	SipManager::SipManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring SipManager::getCallId(android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getCallId",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring SipManager::getOfferSessionDescription(android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getOfferSessionDescription",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean SipManager::isApiSupported(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isApiSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean SipManager::isIncomingCallIntent(android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isIncomingCallIntent",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jboolean SipManager::isSipWifiOnly(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isSipWifiOnly",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean SipManager::isVoipSupported(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isVoipSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject SipManager::newInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"newInstance",
			"(Landroid/content/Context;)Landroid/net/sip/SipManager;",
			arg0.object()
		);
	}
	void SipManager::close(jstring arg0)
	{
		callMethod<void>(
			"close",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject SipManager::createSipSession(android::net::sip::SipProfile arg0, android::net::sip::SipSession_Listener arg1)
	{
		return callObjectMethod(
			"createSipSession",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession$Listener;)Landroid/net/sip/SipSession;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject SipManager::getSessionFor(android::content::Intent arg0)
	{
		return callObjectMethod(
			"getSessionFor",
			"(Landroid/content/Intent;)Landroid/net/sip/SipSession;",
			arg0.object()
		);
	}
	jboolean SipManager::isOpened(jstring arg0)
	{
		return callMethod<jboolean>(
			"isOpened",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SipManager::isRegistered(jstring arg0)
	{
		return callMethod<jboolean>(
			"isRegistered",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject SipManager::makeAudioCall(android::net::sip::SipProfile arg0, android::net::sip::SipProfile arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3)
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
	QAndroidJniObject SipManager::makeAudioCall(jstring arg0, jstring arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3)
	{
		return callObjectMethod(
			"makeAudioCall",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void SipManager::open(android::net::sip::SipProfile arg0)
	{
		callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.object()
		);
	}
	void SipManager::open(android::net::sip::SipProfile arg0, android::app::PendingIntent arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;Landroid/app/PendingIntent;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SipManager::_register(android::net::sip::SipProfile arg0, jint arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"register",
			"(Landroid/net/sip/SipProfile;ILandroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void SipManager::setRegistrationListener(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setRegistrationListener",
			"(Ljava/lang/String;Landroid/net/sip/SipRegistrationListener;)V",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject SipManager::takeAudioCall(android::content::Intent arg0, android::net::sip::SipAudioCall_Listener arg1)
	{
		return callObjectMethod(
			"takeAudioCall",
			"(Landroid/content/Intent;Landroid/net/sip/SipAudioCall$Listener;)Landroid/net/sip/SipAudioCall;",
			arg0.object(),
			arg1.object()
		);
	}
	void SipManager::unregister(android::net::sip::SipProfile arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"unregister",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::sip
