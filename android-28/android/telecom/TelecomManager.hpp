#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class PhoneAccount;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}

namespace android::telecom
{
	class TelecomManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_DEFAULT_DIALER();
		static jstring ACTION_CHANGE_PHONE_ACCOUNTS();
		static jstring ACTION_CONFIGURE_PHONE_ACCOUNT();
		static jstring ACTION_DEFAULT_DIALER_CHANGED();
		static jstring ACTION_INCOMING_CALL();
		static jstring ACTION_PHONE_ACCOUNT_REGISTERED();
		static jstring ACTION_PHONE_ACCOUNT_UNREGISTERED();
		static jstring ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS();
		static jstring ACTION_SHOW_CALL_SETTINGS();
		static jstring ACTION_SHOW_MISSED_CALLS_NOTIFICATION();
		static jstring ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS();
		static jchar DTMF_CHARACTER_PAUSE();
		static jchar DTMF_CHARACTER_WAIT();
		static jstring EXTRA_CALL_BACK_NUMBER();
		static jstring EXTRA_CALL_DISCONNECT_CAUSE();
		static jstring EXTRA_CALL_DISCONNECT_MESSAGE();
		static jstring EXTRA_CALL_SUBJECT();
		static jstring EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME();
		static jstring EXTRA_INCOMING_CALL_ADDRESS();
		static jstring EXTRA_INCOMING_CALL_EXTRAS();
		static jstring EXTRA_INCOMING_VIDEO_STATE();
		static jstring EXTRA_NOTIFICATION_COUNT();
		static jstring EXTRA_NOTIFICATION_PHONE_NUMBER();
		static jstring EXTRA_OUTGOING_CALL_EXTRAS();
		static jstring EXTRA_PHONE_ACCOUNT_HANDLE();
		static jstring EXTRA_START_CALL_WITH_RTT();
		static jstring EXTRA_START_CALL_WITH_SPEAKERPHONE();
		static jstring EXTRA_START_CALL_WITH_VIDEO_STATE();
		static jstring GATEWAY_ORIGINAL_ADDRESS();
		static jstring GATEWAY_PROVIDER_PACKAGE();
		static jstring METADATA_INCLUDE_EXTERNAL_CALLS();
		static jstring METADATA_INCLUDE_SELF_MANAGED_CALLS();
		static jstring METADATA_IN_CALL_SERVICE_RINGING();
		static jstring METADATA_IN_CALL_SERVICE_UI();
		static jint PRESENTATION_ALLOWED();
		static jint PRESENTATION_PAYPHONE();
		static jint PRESENTATION_RESTRICTED();
		static jint PRESENTATION_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelecomManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelecomManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void acceptHandover(android::net::Uri arg0, jint arg1, android::telecom::PhoneAccountHandle arg2);
		void acceptRingingCall();
		void acceptRingingCall(jint arg0);
		void addNewIncomingCall(android::telecom::PhoneAccountHandle arg0, android::os::Bundle arg1);
		void cancelMissedCallsNotification();
		android::content::Intent createManageBlockedNumbersIntent();
		jboolean endCall();
		android::net::Uri getAdnUriForPhoneAccount(android::telecom::PhoneAccountHandle arg0);
		__JniBaseClass getCallCapablePhoneAccounts();
		jstring getDefaultDialerPackage();
		android::telecom::PhoneAccountHandle getDefaultOutgoingPhoneAccount(jstring arg0);
		jstring getLine1Number(android::telecom::PhoneAccountHandle arg0);
		android::telecom::PhoneAccount getPhoneAccount(android::telecom::PhoneAccountHandle arg0);
		__JniBaseClass getSelfManagedPhoneAccounts();
		android::telecom::PhoneAccountHandle getSimCallManager();
		jstring getVoiceMailNumber(android::telecom::PhoneAccountHandle arg0);
		jboolean handleMmi(jstring arg0);
		jboolean handleMmi(jstring arg0, android::telecom::PhoneAccountHandle arg1);
		jboolean isInCall();
		jboolean isInManagedCall();
		jboolean isIncomingCallPermitted(android::telecom::PhoneAccountHandle arg0);
		jboolean isOutgoingCallPermitted(android::telecom::PhoneAccountHandle arg0);
		jboolean isTtySupported();
		jboolean isVoiceMailNumber(android::telecom::PhoneAccountHandle arg0, jstring arg1);
		void placeCall(android::net::Uri arg0, android::os::Bundle arg1);
		void registerPhoneAccount(android::telecom::PhoneAccount arg0);
		void showInCallScreen(jboolean arg0);
		void silenceRinger();
		void unregisterPhoneAccount(android::telecom::PhoneAccountHandle arg0);
	};
} // namespace android::telecom

