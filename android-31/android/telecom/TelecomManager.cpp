#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./PhoneAccount.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./TelecomManager.hpp"

namespace android::telecom
{
	// Fields
	jstring TelecomManager::ACTION_CHANGE_DEFAULT_DIALER()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CHANGE_DEFAULT_DIALER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_CHANGE_PHONE_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CHANGE_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_CONFIGURE_PHONE_ACCOUNT()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CONFIGURE_PHONE_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_DEFAULT_DIALER_CHANGED()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_DEFAULT_DIALER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_INCOMING_CALL()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_INCOMING_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_PHONE_ACCOUNT_REGISTERED()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_PHONE_ACCOUNT_REGISTERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_PHONE_ACCOUNT_UNREGISTERED()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_PHONE_ACCOUNT_UNREGISTERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_POST_CALL()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_POST_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_CALL_SETTINGS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_CALL_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_MISSED_CALLS_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_MISSED_CALLS_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar TelecomManager::DTMF_CHARACTER_PAUSE()
	{
		return getStaticField<jchar>(
			"android.telecom.TelecomManager",
			"DTMF_CHARACTER_PAUSE"
		);
	}
	jchar TelecomManager::DTMF_CHARACTER_WAIT()
	{
		return getStaticField<jchar>(
			"android.telecom.TelecomManager",
			"DTMF_CHARACTER_WAIT"
		);
	}
	jint TelecomManager::DURATION_LONG()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"DURATION_LONG"
		);
	}
	jint TelecomManager::DURATION_MEDIUM()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"DURATION_MEDIUM"
		);
	}
	jint TelecomManager::DURATION_SHORT()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"DURATION_SHORT"
		);
	}
	jint TelecomManager::DURATION_VERY_SHORT()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"DURATION_VERY_SHORT"
		);
	}
	jstring TelecomManager::EXTRA_CALL_BACK_NUMBER()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_BACK_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_DISCONNECT_CAUSE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_DISCONNECT_CAUSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_DISCONNECT_MESSAGE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_DISCONNECT_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_DURATION()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_NETWORK_TYPE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_NETWORK_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_SUBJECT()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_DISCONNECT_CAUSE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_DISCONNECT_CAUSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_HANDLE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_HAS_PICTURE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_HAS_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_CALL_ADDRESS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_CALL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_CALL_EXTRAS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_CALL_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_VIDEO_STATE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_VIDEO_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_IS_DEFAULT_CALL_SCREENING_APP()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_IS_DEFAULT_CALL_SCREENING_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_LOCATION()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_NOTIFICATION_COUNT()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_NOTIFICATION_PHONE_NUMBER()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_NOTIFICATION_PHONE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_OUTGOING_CALL_EXTRAS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_OUTGOING_CALL_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_OUTGOING_PICTURE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_OUTGOING_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_PICTURE_URI()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_PICTURE_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_PRIORITY()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_RTT()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_RTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_SPEAKERPHONE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_SPEAKERPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_VIDEO_STATE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_VIDEO_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_USE_ASSISTED_DIALING()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_USE_ASSISTED_DIALING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::GATEWAY_ORIGINAL_ADDRESS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"GATEWAY_ORIGINAL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::GATEWAY_PROVIDER_PACKAGE()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"GATEWAY_PROVIDER_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_INCLUDE_EXTERNAL_CALLS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_INCLUDE_EXTERNAL_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_INCLUDE_SELF_MANAGED_CALLS()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_INCLUDE_SELF_MANAGED_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_CAR_MODE_UI()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_CAR_MODE_UI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_RINGING()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_RINGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_UI()
	{
		return getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_UI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelecomManager::PRESENTATION_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_ALLOWED"
		);
	}
	jint TelecomManager::PRESENTATION_PAYPHONE()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_PAYPHONE"
		);
	}
	jint TelecomManager::PRESENTATION_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_RESTRICTED"
		);
	}
	jint TelecomManager::PRESENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_UNKNOWN"
		);
	}
	jint TelecomManager::PRIORITY_NORMAL()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRIORITY_NORMAL"
		);
	}
	jint TelecomManager::PRIORITY_URGENT()
	{
		return getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRIORITY_URGENT"
		);
	}
	
	// QJniObject forward
	TelecomManager::TelecomManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void TelecomManager::acceptHandover(android::net::Uri arg0, jint arg1, android::telecom::PhoneAccountHandle arg2)
	{
		callMethod<void>(
			"acceptHandover",
			"(Landroid/net/Uri;ILandroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void TelecomManager::acceptRingingCall()
	{
		callMethod<void>(
			"acceptRingingCall",
			"()V"
		);
	}
	void TelecomManager::acceptRingingCall(jint arg0)
	{
		callMethod<void>(
			"acceptRingingCall",
			"(I)V",
			arg0
		);
	}
	void TelecomManager::addNewIncomingCall(android::telecom::PhoneAccountHandle arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"addNewIncomingCall",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelecomManager::addNewIncomingConference(android::telecom::PhoneAccountHandle arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"addNewIncomingConference",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelecomManager::cancelMissedCallsNotification()
	{
		callMethod<void>(
			"cancelMissedCallsNotification",
			"()V"
		);
	}
	android::content::Intent TelecomManager::createManageBlockedNumbersIntent()
	{
		return callObjectMethod(
			"createManageBlockedNumbersIntent",
			"()Landroid/content/Intent;"
		);
	}
	jboolean TelecomManager::endCall()
	{
		return callMethod<jboolean>(
			"endCall",
			"()Z"
		);
	}
	android::net::Uri TelecomManager::getAdnUriForPhoneAccount(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"getAdnUriForPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	__JniBaseClass TelecomManager::getCallCapablePhoneAccounts()
	{
		return callObjectMethod(
			"getCallCapablePhoneAccounts",
			"()Ljava/util/List;"
		);
	}
	jstring TelecomManager::getDefaultDialerPackage()
	{
		return callObjectMethod(
			"getDefaultDialerPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::telecom::PhoneAccountHandle TelecomManager::getDefaultOutgoingPhoneAccount(jstring arg0)
	{
		return callObjectMethod(
			"getDefaultOutgoingPhoneAccount",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccountHandle;",
			arg0
		);
	}
	jstring TelecomManager::getLine1Number(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"getLine1Number",
			"(Landroid/telecom/PhoneAccountHandle;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::telecom::PhoneAccount TelecomManager::getPhoneAccount(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"getPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telecom/PhoneAccount;",
			arg0.object()
		);
	}
	__JniBaseClass TelecomManager::getSelfManagedPhoneAccounts()
	{
		return callObjectMethod(
			"getSelfManagedPhoneAccounts",
			"()Ljava/util/List;"
		);
	}
	android::telecom::PhoneAccountHandle TelecomManager::getSimCallManager()
	{
		return callObjectMethod(
			"getSimCallManager",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	android::telecom::PhoneAccountHandle TelecomManager::getSimCallManagerForSubscription(jint arg0)
	{
		return callObjectMethod(
			"getSimCallManagerForSubscription",
			"(I)Landroid/telecom/PhoneAccountHandle;",
			arg0
		);
	}
	jstring TelecomManager::getSystemDialerPackage()
	{
		return callObjectMethod(
			"getSystemDialerPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::telecom::PhoneAccountHandle TelecomManager::getUserSelectedOutgoingPhoneAccount()
	{
		return callObjectMethod(
			"getUserSelectedOutgoingPhoneAccount",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jstring TelecomManager::getVoiceMailNumber(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"getVoiceMailNumber",
			"(Landroid/telecom/PhoneAccountHandle;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean TelecomManager::handleMmi(jstring arg0)
	{
		return callMethod<jboolean>(
			"handleMmi",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TelecomManager::handleMmi(jstring arg0, android::telecom::PhoneAccountHandle arg1)
	{
		return callMethod<jboolean>(
			"handleMmi",
			"(Ljava/lang/String;Landroid/telecom/PhoneAccountHandle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TelecomManager::hasManageOngoingCallsPermission()
	{
		return callMethod<jboolean>(
			"hasManageOngoingCallsPermission",
			"()Z"
		);
	}
	jboolean TelecomManager::isInCall()
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	jboolean TelecomManager::isInManagedCall()
	{
		return callMethod<jboolean>(
			"isInManagedCall",
			"()Z"
		);
	}
	jboolean TelecomManager::isIncomingCallPermitted(android::telecom::PhoneAccountHandle arg0)
	{
		return callMethod<jboolean>(
			"isIncomingCallPermitted",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.object()
		);
	}
	jboolean TelecomManager::isOutgoingCallPermitted(android::telecom::PhoneAccountHandle arg0)
	{
		return callMethod<jboolean>(
			"isOutgoingCallPermitted",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.object()
		);
	}
	jboolean TelecomManager::isTtySupported()
	{
		return callMethod<jboolean>(
			"isTtySupported",
			"()Z"
		);
	}
	jboolean TelecomManager::isVoiceMailNumber(android::telecom::PhoneAccountHandle arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isVoiceMailNumber",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	void TelecomManager::placeCall(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"placeCall",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelecomManager::registerPhoneAccount(android::telecom::PhoneAccount arg0)
	{
		callMethod<void>(
			"registerPhoneAccount",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.object()
		);
	}
	void TelecomManager::showInCallScreen(jboolean arg0)
	{
		callMethod<void>(
			"showInCallScreen",
			"(Z)V",
			arg0
		);
	}
	void TelecomManager::silenceRinger()
	{
		callMethod<void>(
			"silenceRinger",
			"()V"
		);
	}
	void TelecomManager::startConference(__JniBaseClass arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startConference",
			"(Ljava/util/List;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelecomManager::unregisterPhoneAccount(android::telecom::PhoneAccountHandle arg0)
	{
		callMethod<void>(
			"unregisterPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

