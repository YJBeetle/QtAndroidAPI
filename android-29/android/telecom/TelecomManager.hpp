#pragma once

#ifndef ANDROID_TELECOM_TELECOMMANAGER
#define ANDROID_TELECOM_TELECOMMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccount;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::telecom
{
	class TelecomManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_DEFAULT_DIALER();
		static jstring ACTION_CHANGE_PHONE_ACCOUNTS();
		static jstring ACTION_CONFIGURE_PHONE_ACCOUNT();
		static jstring ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED();
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
		static jstring EXTRA_CALL_NETWORK_TYPE();
		static jstring EXTRA_CALL_SUBJECT();
		static jstring EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME();
		static jstring EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME();
		static jstring EXTRA_INCOMING_CALL_ADDRESS();
		static jstring EXTRA_INCOMING_CALL_EXTRAS();
		static jstring EXTRA_INCOMING_VIDEO_STATE();
		static jstring EXTRA_IS_DEFAULT_CALL_SCREENING_APP();
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
		static jstring METADATA_IN_CALL_SERVICE_CAR_MODE_UI();
		static jstring METADATA_IN_CALL_SERVICE_RINGING();
		static jstring METADATA_IN_CALL_SERVICE_UI();
		static jint PRESENTATION_ALLOWED();
		static jint PRESENTATION_PAYPHONE();
		static jint PRESENTATION_RESTRICTED();
		static jint PRESENTATION_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDefaultOutgoingPhoneAccount(jstring arg0);
		QAndroidJniObject getUserSelectedOutgoingPhoneAccount();
		QAndroidJniObject getSimCallManager();
		QAndroidJniObject getCallCapablePhoneAccounts();
		QAndroidJniObject getSelfManagedPhoneAccounts();
		QAndroidJniObject getPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		void registerPhoneAccount(__jni_impl::android::telecom::PhoneAccount arg0);
		void unregisterPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		jstring getDefaultDialerPackage();
		jstring getSystemDialerPackage();
		jboolean isVoiceMailNumber(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1);
		jstring getVoiceMailNumber(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		jstring getLine1Number(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		jboolean isInCall();
		jboolean isInManagedCall();
		jboolean endCall();
		void acceptRingingCall();
		void acceptRingingCall(jint arg0);
		void silenceRinger();
		jboolean isTtySupported();
		void addNewIncomingCall(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::os::Bundle arg1);
		jboolean handleMmi(jstring arg0);
		jboolean handleMmi(jstring arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1);
		QAndroidJniObject getAdnUriForPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		void cancelMissedCallsNotification();
		void showInCallScreen(jboolean arg0);
		void placeCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject createManageBlockedNumbersIntent();
		jboolean isIncomingCallPermitted(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		jboolean isOutgoingCallPermitted(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		void acceptHandover(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::telecom::PhoneAccountHandle arg2);
	};
} // namespace __jni_impl::android::telecom

#include "../content/Context.hpp"
#include "PhoneAccountHandle.hpp"
#include "PhoneAccount.hpp"
#include "../os/Bundle.hpp"
#include "../net/Uri.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jstring TelecomManager::ACTION_CHANGE_DEFAULT_DIALER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CHANGE_DEFAULT_DIALER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_CHANGE_PHONE_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CHANGE_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_CONFIGURE_PHONE_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_CONFIGURE_PHONE_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_DEFAULT_DIALER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_DEFAULT_DIALER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_INCOMING_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_INCOMING_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_PHONE_ACCOUNT_REGISTERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_PHONE_ACCOUNT_REGISTERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_PHONE_ACCOUNT_UNREGISTERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_PHONE_ACCOUNT_UNREGISTERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_CALL_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_CALL_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_MISSED_CALLS_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_MISSED_CALLS_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar TelecomManager::DTMF_CHARACTER_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.telecom.TelecomManager",
			"DTMF_CHARACTER_PAUSE"
		);
	}
	jchar TelecomManager::DTMF_CHARACTER_WAIT()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.telecom.TelecomManager",
			"DTMF_CHARACTER_WAIT"
		);
	}
	jstring TelecomManager::EXTRA_CALL_BACK_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_BACK_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_DISCONNECT_CAUSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_DISCONNECT_CAUSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_DISCONNECT_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_DISCONNECT_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_NETWORK_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_NETWORK_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CALL_SUBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_CALL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_CALL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_CALL_EXTRAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_CALL_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_INCOMING_VIDEO_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_INCOMING_VIDEO_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_IS_DEFAULT_CALL_SCREENING_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_IS_DEFAULT_CALL_SCREENING_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_NOTIFICATION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_NOTIFICATION_PHONE_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_NOTIFICATION_PHONE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_OUTGOING_CALL_EXTRAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_OUTGOING_CALL_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_RTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_RTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_SPEAKERPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_SPEAKERPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::EXTRA_START_CALL_WITH_VIDEO_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"EXTRA_START_CALL_WITH_VIDEO_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::GATEWAY_ORIGINAL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"GATEWAY_ORIGINAL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::GATEWAY_PROVIDER_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"GATEWAY_PROVIDER_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_INCLUDE_EXTERNAL_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_INCLUDE_EXTERNAL_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_INCLUDE_SELF_MANAGED_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_INCLUDE_SELF_MANAGED_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_CAR_MODE_UI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_CAR_MODE_UI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_RINGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_RINGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::METADATA_IN_CALL_SERVICE_UI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.TelecomManager",
			"METADATA_IN_CALL_SERVICE_UI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelecomManager::PRESENTATION_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_ALLOWED"
		);
	}
	jint TelecomManager::PRESENTATION_PAYPHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_PAYPHONE"
		);
	}
	jint TelecomManager::PRESENTATION_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_RESTRICTED"
		);
	}
	jint TelecomManager::PRESENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.TelecomManager",
			"PRESENTATION_UNKNOWN"
		);
	}
	
	// Constructors
	void TelecomManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.TelecomManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TelecomManager::getDefaultOutgoingPhoneAccount(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDefaultOutgoingPhoneAccount",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccountHandle;",
			arg0
		);
	}
	QAndroidJniObject TelecomManager::getUserSelectedOutgoingPhoneAccount()
	{
		return __thiz.callObjectMethod(
			"getUserSelectedOutgoingPhoneAccount",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	QAndroidJniObject TelecomManager::getSimCallManager()
	{
		return __thiz.callObjectMethod(
			"getSimCallManager",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	QAndroidJniObject TelecomManager::getCallCapablePhoneAccounts()
	{
		return __thiz.callObjectMethod(
			"getCallCapablePhoneAccounts",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TelecomManager::getSelfManagedPhoneAccounts()
	{
		return __thiz.callObjectMethod(
			"getSelfManagedPhoneAccounts",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TelecomManager::getPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telecom/PhoneAccount;",
			arg0.__jniObject().object()
		);
	}
	void TelecomManager::registerPhoneAccount(__jni_impl::android::telecom::PhoneAccount arg0)
	{
		__thiz.callMethod<void>(
			"registerPhoneAccount",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.__jniObject().object()
		);
	}
	void TelecomManager::unregisterPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		__thiz.callMethod<void>(
			"unregisterPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object()
		);
	}
	jstring TelecomManager::getDefaultDialerPackage()
	{
		return __thiz.callObjectMethod(
			"getDefaultDialerPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelecomManager::getSystemDialerPackage()
	{
		return __thiz.callObjectMethod(
			"getSystemDialerPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TelecomManager::isVoiceMailNumber(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isVoiceMailNumber",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring TelecomManager::getVoiceMailNumber(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getVoiceMailNumber",
			"(Landroid/telecom/PhoneAccountHandle;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TelecomManager::getLine1Number(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getLine1Number",
			"(Landroid/telecom/PhoneAccountHandle;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean TelecomManager::isInCall()
	{
		return __thiz.callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	jboolean TelecomManager::isInManagedCall()
	{
		return __thiz.callMethod<jboolean>(
			"isInManagedCall",
			"()Z"
		);
	}
	jboolean TelecomManager::endCall()
	{
		return __thiz.callMethod<jboolean>(
			"endCall",
			"()Z"
		);
	}
	void TelecomManager::acceptRingingCall()
	{
		__thiz.callMethod<void>(
			"acceptRingingCall",
			"()V"
		);
	}
	void TelecomManager::acceptRingingCall(jint arg0)
	{
		__thiz.callMethod<void>(
			"acceptRingingCall",
			"(I)V",
			arg0
		);
	}
	void TelecomManager::silenceRinger()
	{
		__thiz.callMethod<void>(
			"silenceRinger",
			"()V"
		);
	}
	jboolean TelecomManager::isTtySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isTtySupported",
			"()Z"
		);
	}
	void TelecomManager::addNewIncomingCall(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"addNewIncomingCall",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean TelecomManager::handleMmi(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"handleMmi",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TelecomManager::handleMmi(jstring arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"handleMmi",
			"(Ljava/lang/String;Landroid/telecom/PhoneAccountHandle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TelecomManager::getAdnUriForPhoneAccount(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getAdnUriForPhoneAccount",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	void TelecomManager::cancelMissedCallsNotification()
	{
		__thiz.callMethod<void>(
			"cancelMissedCallsNotification",
			"()V"
		);
	}
	void TelecomManager::showInCallScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"showInCallScreen",
			"(Z)V",
			arg0
		);
	}
	void TelecomManager::placeCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"placeCall",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TelecomManager::createManageBlockedNumbersIntent()
	{
		return __thiz.callObjectMethod(
			"createManageBlockedNumbersIntent",
			"()Landroid/content/Intent;"
		);
	}
	jboolean TelecomManager::isIncomingCallPermitted(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIncomingCallPermitted",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TelecomManager::isOutgoingCallPermitted(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOutgoingCallPermitted",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	void TelecomManager::acceptHandover(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::telecom::PhoneAccountHandle arg2)
	{
		__thiz.callMethod<void>(
			"acceptHandover",
			"(Landroid/net/Uri;ILandroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class TelecomManager : public __jni_impl::android::telecom::TelecomManager
	{
	public:
		TelecomManager(QAndroidJniObject obj) { __thiz = obj; }
		TelecomManager()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_TELECOMMANAGER

