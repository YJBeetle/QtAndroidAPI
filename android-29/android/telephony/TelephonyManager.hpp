#pragma once

#ifndef ANDROID_TELEPHONY_TELEPHONYMANAGER
#define ANDROID_TELEPHONY_TELEPHONYMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class PhoneStateListener;
}
namespace __jni_impl::android::telephony
{
	class SignalStrength;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::telephony
{
	class CellLocation;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::telephony
{
	class TelephonyManager_CellInfoCallback;
}
namespace __jni_impl::android::telephony
{
	class IccOpenLogicalChannelResponse;
}
namespace __jni_impl::android::telephony
{
	class NetworkScan;
}
namespace __jni_impl::android::telephony
{
	class NetworkScanRequest;
}
namespace __jni_impl::android::telephony
{
	class TelephonyScanManager_NetworkScanCallback;
}
namespace __jni_impl::android::telephony
{
	class TelephonyManager_UssdResponseCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::telephony
{
	class ServiceState;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::telephony
{
	class TelephonyManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CARRIER_MESSAGING_CLIENT_SERVICE();
		static jstring ACTION_CONFIGURE_VOICEMAIL();
		static jstring ACTION_NETWORK_COUNTRY_CHANGED();
		static jstring ACTION_PHONE_STATE_CHANGED();
		static jstring ACTION_RESPOND_VIA_MESSAGE();
		static jstring ACTION_SECRET_CODE();
		static jstring ACTION_SHOW_VOICEMAIL_NOTIFICATION();
		static jstring ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED();
		static jstring ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED();
		static jint APPTYPE_CSIM();
		static jint APPTYPE_ISIM();
		static jint APPTYPE_RUIM();
		static jint APPTYPE_SIM();
		static jint APPTYPE_USIM();
		static jint AUTHTYPE_EAP_AKA();
		static jint AUTHTYPE_EAP_SIM();
		static jint CALL_STATE_IDLE();
		static jint CALL_STATE_OFFHOOK();
		static jint CALL_STATE_RINGING();
		static jint CDMA_ROAMING_MODE_AFFILIATED();
		static jint CDMA_ROAMING_MODE_ANY();
		static jint CDMA_ROAMING_MODE_HOME();
		static jint CDMA_ROAMING_MODE_RADIO_DEFAULT();
		static jint DATA_ACTIVITY_DORMANT();
		static jint DATA_ACTIVITY_IN();
		static jint DATA_ACTIVITY_INOUT();
		static jint DATA_ACTIVITY_NONE();
		static jint DATA_ACTIVITY_OUT();
		static jint DATA_CONNECTED();
		static jint DATA_CONNECTING();
		static jint DATA_DISCONNECTED();
		static jint DATA_SUSPENDED();
		static jint DATA_UNKNOWN();
		static jstring EXTRA_CALL_VOICEMAIL_INTENT();
		static jstring EXTRA_CARRIER_ID();
		static jstring EXTRA_CARRIER_NAME();
		static jstring EXTRA_HIDE_PUBLIC_SETTINGS();
		static jstring EXTRA_INCOMING_NUMBER();
		static jstring EXTRA_IS_REFRESH();
		static jstring EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT();
		static jstring EXTRA_NETWORK_COUNTRY();
		static jstring EXTRA_NOTIFICATION_COUNT();
		static jstring EXTRA_PHONE_ACCOUNT_HANDLE();
		static jstring EXTRA_SPECIFIC_CARRIER_ID();
		static jstring EXTRA_SPECIFIC_CARRIER_NAME();
		static jstring EXTRA_STATE();
		static jstring EXTRA_STATE_IDLE();
		static jstring EXTRA_STATE_OFFHOOK();
		static jstring EXTRA_STATE_RINGING();
		static jstring EXTRA_SUBSCRIPTION_ID();
		static jstring EXTRA_VOICEMAIL_NUMBER();
		static jstring METADATA_HIDE_VOICEMAIL_SETTINGS_MENU();
		static jint MULTISIM_ALLOWED();
		static jint MULTISIM_NOT_SUPPORTED_BY_CARRIER();
		static jint MULTISIM_NOT_SUPPORTED_BY_HARDWARE();
		static jint NETWORK_TYPE_1xRTT();
		static jint NETWORK_TYPE_CDMA();
		static jint NETWORK_TYPE_EDGE();
		static jint NETWORK_TYPE_EHRPD();
		static jint NETWORK_TYPE_EVDO_0();
		static jint NETWORK_TYPE_EVDO_A();
		static jint NETWORK_TYPE_EVDO_B();
		static jint NETWORK_TYPE_GPRS();
		static jint NETWORK_TYPE_GSM();
		static jint NETWORK_TYPE_HSDPA();
		static jint NETWORK_TYPE_HSPA();
		static jint NETWORK_TYPE_HSPAP();
		static jint NETWORK_TYPE_HSUPA();
		static jint NETWORK_TYPE_IDEN();
		static jint NETWORK_TYPE_IWLAN();
		static jint NETWORK_TYPE_LTE();
		static jint NETWORK_TYPE_NR();
		static jint NETWORK_TYPE_TD_SCDMA();
		static jint NETWORK_TYPE_UMTS();
		static jint NETWORK_TYPE_UNKNOWN();
		static jint PHONE_TYPE_CDMA();
		static jint PHONE_TYPE_GSM();
		static jint PHONE_TYPE_NONE();
		static jint PHONE_TYPE_SIP();
		static jint SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION();
		static jint SET_OPPORTUNISTIC_SUB_SUCCESS();
		static jint SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED();
		static jint SIM_STATE_ABSENT();
		static jint SIM_STATE_CARD_IO_ERROR();
		static jint SIM_STATE_CARD_RESTRICTED();
		static jint SIM_STATE_NETWORK_LOCKED();
		static jint SIM_STATE_NOT_READY();
		static jint SIM_STATE_PERM_DISABLED();
		static jint SIM_STATE_PIN_REQUIRED();
		static jint SIM_STATE_PUK_REQUIRED();
		static jint SIM_STATE_READY();
		static jint SIM_STATE_UNKNOWN();
		static jint UNINITIALIZED_CARD_ID();
		static jint UNKNOWN_CARRIER_ID();
		static jint UNSUPPORTED_CARD_ID();
		static jint UPDATE_AVAILABLE_NETWORKS_ABORTED();
		static jint UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS();
		static jint UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE();
		static jint UPDATE_AVAILABLE_NETWORKS_SUCCESS();
		static jint UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE();
		static jint USSD_ERROR_SERVICE_UNAVAIL();
		static jint USSD_RETURN_FAILURE();
		static jstring VVM_TYPE_CVVM();
		static jstring VVM_TYPE_OMTP();
		
		// Constructors
		void __constructor();
		
		// Methods
		void listen(__jni_impl::android::telephony::PhoneStateListener arg0, jint arg1);
		jstring getDeviceId();
		jstring getDeviceId(jint arg0);
		jstring getVoiceMailNumber();
		jstring getLine1Number();
		QAndroidJniObject getSignalStrength();
		jint getPhoneCount();
		QAndroidJniObject createForSubscriptionId(jint arg0);
		QAndroidJniObject createForPhoneAccountHandle(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		jstring getDeviceSoftwareVersion();
		jstring getImei(jint arg0);
		jstring getImei();
		jstring getTypeAllocationCode();
		jstring getTypeAllocationCode(jint arg0);
		jstring getMeid(jint arg0);
		jstring getMeid();
		jstring getManufacturerCode(jint arg0);
		jstring getManufacturerCode();
		jstring getNai();
		QAndroidJniObject getCellLocation();
		jint getPhoneType();
		jstring getNetworkOperatorName();
		jstring getNetworkOperator();
		jstring getNetworkSpecifier();
		QAndroidJniObject getCarrierConfig();
		jboolean isNetworkRoaming();
		jstring getNetworkCountryIso();
		jint getDataNetworkType();
		jint getVoiceNetworkType();
		jboolean hasIccCard();
		jint getSimState(jint arg0);
		jint getSimState();
		jstring getSimOperator();
		jstring getSimOperatorName();
		jstring getSimCountryIso();
		jstring getSimSerialNumber();
		jint getCardIdForDefaultEuicc();
		QAndroidJniObject getUiccCardsInfo();
		jstring getSubscriberId();
		jstring getGroupIdLevel1();
		jboolean setLine1NumberForDisplay(jstring arg0, jstring arg1);
		jboolean setLine1NumberForDisplay(const QString &arg0, const QString &arg1);
		jboolean setVoiceMailNumber(jstring arg0, jstring arg1);
		jboolean setVoiceMailNumber(const QString &arg0, const QString &arg1);
		jstring getVisualVoicemailPackageName();
		void setVisualVoicemailSmsFilterSettings(__jni_impl::android::telephony::VisualVoicemailSmsFilterSettings arg0);
		void sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3);
		void sendVisualVoicemailSms(const QString &arg0, jint arg1, const QString &arg2, __jni_impl::android::app::PendingIntent arg3);
		jstring getVoiceMailAlphaTag();
		void sendDialerSpecialCode(jstring arg0);
		void sendDialerSpecialCode(const QString &arg0);
		jint getCallState();
		jint getDataActivity();
		jint getDataState();
		jboolean isVoiceCapable();
		jboolean isSmsCapable();
		QAndroidJniObject getAllCellInfo();
		void requestCellInfoUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::TelephonyManager_CellInfoCallback arg1);
		jstring getMmsUserAgent();
		jstring getMmsUAProfUrl();
		QAndroidJniObject iccOpenLogicalChannel(jstring arg0);
		QAndroidJniObject iccOpenLogicalChannel(const QString &arg0);
		QAndroidJniObject iccOpenLogicalChannel(jstring arg0, jint arg1);
		QAndroidJniObject iccOpenLogicalChannel(const QString &arg0, jint arg1);
		jboolean iccCloseLogicalChannel(jint arg0);
		jstring iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		jstring iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, const QString &arg6);
		jstring iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		jstring iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, const QString &arg5);
		jbyteArray iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		jbyteArray iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, const QString &arg5);
		jstring sendEnvelopeWithStatus(jstring arg0);
		jstring sendEnvelopeWithStatus(const QString &arg0);
		jstring getIccAuthentication(jint arg0, jint arg1, jstring arg2);
		jstring getIccAuthentication(jint arg0, jint arg1, const QString &arg2);
		jarray getForbiddenPlmns();
		void setNetworkSelectionModeAutomatic();
		QAndroidJniObject requestNetworkScan(__jni_impl::android::telephony::NetworkScanRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::TelephonyScanManager_NetworkScanCallback arg2);
		jboolean setNetworkSelectionModeManual(jstring arg0, jboolean arg1);
		jboolean setNetworkSelectionModeManual(const QString &arg0, jboolean arg1);
		jboolean setPreferredNetworkTypeToGlobal();
		jboolean hasCarrierPrivileges();
		jboolean setOperatorBrandOverride(jstring arg0);
		jboolean setOperatorBrandOverride(const QString &arg0);
		void sendUssdRequest(jstring arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2);
		void sendUssdRequest(const QString &arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2);
		jboolean isConcurrentVoiceAndDataSupported();
		void setDataEnabled(jboolean arg0);
		jboolean isDataEnabled();
		jboolean isDataRoamingEnabled();
		jboolean canChangeDtmfToneLength();
		jboolean isWorldPhone();
		jboolean isTtyModeSupported();
		jboolean isRttSupported();
		jboolean isHearingAidCompatibilitySupported();
		QAndroidJniObject getServiceState();
		QAndroidJniObject getVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		void setVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1);
		jboolean isVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		void setVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0, jboolean arg1);
		jint getSimCarrierId();
		jstring getSimCarrierIdName();
		jint getSimSpecificCarrierId();
		jstring getSimSpecificCarrierIdName();
		jint getCarrierIdFromSimMccMnc();
		QAndroidJniObject getEmergencyNumberList();
		QAndroidJniObject getEmergencyNumberList(jint arg0);
		void setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		jint getPreferredOpportunisticDataSubscription();
		void updateAvailableNetworks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jint isMultiSimSupported();
		void switchMultiSimConfig(jint arg0);
		jboolean doesSwitchMultiSimConfigTriggerReboot();
		jint getNetworkType();
		jboolean isEmergencyNumber(jstring arg0);
		jboolean isEmergencyNumber(const QString &arg0);
	};
} // namespace __jni_impl::android::telephony

#include "PhoneStateListener.hpp"
#include "SignalStrength.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "CellLocation.hpp"
#include "../os/PersistableBundle.hpp"
#include "VisualVoicemailSmsFilterSettings.hpp"
#include "../app/PendingIntent.hpp"
#include "TelephonyManager_CellInfoCallback.hpp"
#include "IccOpenLogicalChannelResponse.hpp"
#include "NetworkScan.hpp"
#include "NetworkScanRequest.hpp"
#include "TelephonyScanManager_NetworkScanCallback.hpp"
#include "TelephonyManager_UssdResponseCallback.hpp"
#include "../os/Handler.hpp"
#include "ServiceState.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jstring TelephonyManager::ACTION_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_NETWORK_COUNTRY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_NETWORK_COUNTRY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SECRET_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SECRET_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelephonyManager::APPTYPE_CSIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_CSIM"
		);
	}
	jint TelephonyManager::APPTYPE_ISIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_ISIM"
		);
	}
	jint TelephonyManager::APPTYPE_RUIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_RUIM"
		);
	}
	jint TelephonyManager::APPTYPE_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_SIM"
		);
	}
	jint TelephonyManager::APPTYPE_USIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_USIM"
		);
	}
	jint TelephonyManager::AUTHTYPE_EAP_AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_AKA"
		);
	}
	jint TelephonyManager::AUTHTYPE_EAP_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_SIM"
		);
	}
	jint TelephonyManager::CALL_STATE_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_IDLE"
		);
	}
	jint TelephonyManager::CALL_STATE_OFFHOOK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_OFFHOOK"
		);
	}
	jint TelephonyManager::CALL_STATE_RINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_RINGING"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_AFFILIATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_AFFILIATED"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_ANY"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_HOME"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_RADIO_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_RADIO_DEFAULT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_DORMANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_DORMANT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_IN"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_INOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_INOUT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_NONE"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_OUT"
		);
	}
	jint TelephonyManager::DATA_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTED"
		);
	}
	jint TelephonyManager::DATA_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTING"
		);
	}
	jint TelephonyManager::DATA_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTED"
		);
	}
	jint TelephonyManager::DATA_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED"
		);
	}
	jint TelephonyManager::DATA_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_UNKNOWN"
		);
	}
	jstring TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_IS_REFRESH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_NETWORK_COUNTRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NETWORK_COUNTRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_SPECIFIC_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_SPECIFIC_CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_IDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_RINGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelephonyManager::MULTISIM_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_ALLOWED"
		);
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_CARRIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_CARRIER"
		);
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_HARDWARE"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_1xRTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_1xRTT"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_CDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_CDMA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EDGE"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EHRPD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EHRPD"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_0"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_A"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_B"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_GPRS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GPRS"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_GSM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GSM"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSDPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSDPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSPAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPAP"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSUPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSUPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_IDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IDEN"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_IWLAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IWLAN"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_LTE"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_NR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_NR"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_TD_SCDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_TD_SCDMA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_UMTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UMTS"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	jint TelephonyManager::PHONE_TYPE_CDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_CDMA"
		);
	}
	jint TelephonyManager::PHONE_TYPE_GSM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_GSM"
		);
	}
	jint TelephonyManager::PHONE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_NONE"
		);
	}
	jint TelephonyManager::PHONE_TYPE_SIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_SIP"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_SUCCESS"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED"
		);
	}
	jint TelephonyManager::SIM_STATE_ABSENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_ABSENT"
		);
	}
	jint TelephonyManager::SIM_STATE_CARD_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_IO_ERROR"
		);
	}
	jint TelephonyManager::SIM_STATE_CARD_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_RESTRICTED"
		);
	}
	jint TelephonyManager::SIM_STATE_NETWORK_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NETWORK_LOCKED"
		);
	}
	jint TelephonyManager::SIM_STATE_NOT_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NOT_READY"
		);
	}
	jint TelephonyManager::SIM_STATE_PERM_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PERM_DISABLED"
		);
	}
	jint TelephonyManager::SIM_STATE_PIN_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PIN_REQUIRED"
		);
	}
	jint TelephonyManager::SIM_STATE_PUK_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PUK_REQUIRED"
		);
	}
	jint TelephonyManager::SIM_STATE_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_READY"
		);
	}
	jint TelephonyManager::SIM_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_UNKNOWN"
		);
	}
	jint TelephonyManager::UNINITIALIZED_CARD_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNINITIALIZED_CARD_ID"
		);
	}
	jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID"
		);
	}
	jint TelephonyManager::UNSUPPORTED_CARD_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNSUPPORTED_CARD_ID"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ABORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ABORTED"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SUCCESS"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE"
		);
	}
	jint TelephonyManager::USSD_ERROR_SERVICE_UNAVAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_ERROR_SERVICE_UNAVAIL"
		);
	}
	jint TelephonyManager::USSD_RETURN_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_RETURN_FAILURE"
		);
	}
	jstring TelephonyManager::VVM_TYPE_CVVM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::VVM_TYPE_OMTP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void TelephonyManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyManager",
			"(V)V");
	}
	
	// Methods
	void TelephonyManager::listen(__jni_impl::android::telephony::PhoneStateListener arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"listen",
			"(Landroid/telephony/PhoneStateListener;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring TelephonyManager::getDeviceId()
	{
		return __thiz.callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getDeviceId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getVoiceMailNumber()
	{
		return __thiz.callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getLine1Number()
	{
		return __thiz.callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TelephonyManager::getSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getSignalStrength",
			"()Landroid/telephony/SignalStrength;"
		);
	}
	jint TelephonyManager::getPhoneCount()
	{
		return __thiz.callMethod<jint>(
			"getPhoneCount",
			"()I"
		);
	}
	QAndroidJniObject TelephonyManager::createForSubscriptionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/TelephonyManager;",
			arg0
		);
	}
	QAndroidJniObject TelephonyManager::createForPhoneAccountHandle(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"createForPhoneAccountHandle",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telephony/TelephonyManager;",
			arg0.__jniObject().object()
		);
	}
	jstring TelephonyManager::getDeviceSoftwareVersion()
	{
		return __thiz.callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getImei(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getImei()
	{
		return __thiz.callObjectMethod(
			"getImei",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getTypeAllocationCode()
	{
		return __thiz.callObjectMethod(
			"getTypeAllocationCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getTypeAllocationCode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTypeAllocationCode",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getMeid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getMeid()
	{
		return __thiz.callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getManufacturerCode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerCode",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getManufacturerCode()
	{
		return __thiz.callObjectMethod(
			"getManufacturerCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNai()
	{
		return __thiz.callObjectMethod(
			"getNai",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TelephonyManager::getCellLocation()
	{
		return __thiz.callObjectMethod(
			"getCellLocation",
			"()Landroid/telephony/CellLocation;"
		);
	}
	jint TelephonyManager::getPhoneType()
	{
		return __thiz.callMethod<jint>(
			"getPhoneType",
			"()I"
		);
	}
	jstring TelephonyManager::getNetworkOperatorName()
	{
		return __thiz.callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNetworkSpecifier()
	{
		return __thiz.callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TelephonyManager::getCarrierConfig()
	{
		return __thiz.callObjectMethod(
			"getCarrierConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jboolean TelephonyManager::isNetworkRoaming()
	{
		return __thiz.callMethod<jboolean>(
			"isNetworkRoaming",
			"()Z"
		);
	}
	jstring TelephonyManager::getNetworkCountryIso()
	{
		return __thiz.callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelephonyManager::getDataNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getDataNetworkType",
			"()I"
		);
	}
	jint TelephonyManager::getVoiceNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getVoiceNetworkType",
			"()I"
		);
	}
	jboolean TelephonyManager::hasIccCard()
	{
		return __thiz.callMethod<jboolean>(
			"hasIccCard",
			"()Z"
		);
	}
	jint TelephonyManager::getSimState(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSimState",
			"(I)I",
			arg0
		);
	}
	jint TelephonyManager::getSimState()
	{
		return __thiz.callMethod<jint>(
			"getSimState",
			"()I"
		);
	}
	jstring TelephonyManager::getSimOperator()
	{
		return __thiz.callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimOperatorName()
	{
		return __thiz.callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimCountryIso()
	{
		return __thiz.callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelephonyManager::getCardIdForDefaultEuicc()
	{
		return __thiz.callMethod<jint>(
			"getCardIdForDefaultEuicc",
			"()I"
		);
	}
	QAndroidJniObject TelephonyManager::getUiccCardsInfo()
	{
		return __thiz.callObjectMethod(
			"getUiccCardsInfo",
			"()Ljava/util/List;"
		);
	}
	jstring TelephonyManager::getSubscriberId()
	{
		return __thiz.callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getGroupIdLevel1()
	{
		return __thiz.callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TelephonyManager::setLine1NumberForDisplay(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean TelephonyManager::setLine1NumberForDisplay(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean TelephonyManager::setVoiceMailNumber(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean TelephonyManager::setVoiceMailNumber(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring TelephonyManager::getVisualVoicemailPackageName()
	{
		return __thiz.callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TelephonyManager::setVisualVoicemailSmsFilterSettings(__jni_impl::android::telephony::VisualVoicemailSmsFilterSettings arg0)
	{
		__thiz.callMethod<void>(
			"setVisualVoicemailSmsFilterSettings",
			"(Landroid/telephony/VisualVoicemailSmsFilterSettings;)V",
			arg0.__jniObject().object()
		);
	}
	void TelephonyManager::sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void TelephonyManager::sendVisualVoicemailSms(const QString &arg0, jint arg1, const QString &arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jstring TelephonyManager::getVoiceMailAlphaTag()
	{
		return __thiz.callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TelephonyManager::sendDialerSpecialCode(jstring arg0)
	{
		__thiz.callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TelephonyManager::sendDialerSpecialCode(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint TelephonyManager::getCallState()
	{
		return __thiz.callMethod<jint>(
			"getCallState",
			"()I"
		);
	}
	jint TelephonyManager::getDataActivity()
	{
		return __thiz.callMethod<jint>(
			"getDataActivity",
			"()I"
		);
	}
	jint TelephonyManager::getDataState()
	{
		return __thiz.callMethod<jint>(
			"getDataState",
			"()I"
		);
	}
	jboolean TelephonyManager::isVoiceCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isVoiceCapable",
			"()Z"
		);
	}
	jboolean TelephonyManager::isSmsCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isSmsCapable",
			"()Z"
		);
	}
	QAndroidJniObject TelephonyManager::getAllCellInfo()
	{
		return __thiz.callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;"
		);
	}
	void TelephonyManager::requestCellInfoUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::TelephonyManager_CellInfoCallback arg1)
	{
		__thiz.callMethod<void>(
			"requestCellInfoUpdate",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyManager$CellInfoCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring TelephonyManager::getMmsUserAgent()
	{
		return __thiz.callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getMmsUAProfUrl()
	{
		return __thiz.callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0
		);
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean TelephonyManager::iccCloseLogicalChannel(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"iccCloseLogicalChannel",
			"(I)Z",
			arg0
		);
	}
	jstring TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
	{
		return __thiz.callObjectMethod(
			"iccTransmitApduLogicalChannel",
			"(IIIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		).object<jstring>();
	}
	jstring TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, const QString &arg6)
	{
		return __thiz.callObjectMethod(
			"iccTransmitApduLogicalChannel",
			"(IIIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>()
		).object<jstring>();
	}
	jstring TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return __thiz.callObjectMethod(
			"iccTransmitApduBasicChannel",
			"(IIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		).object<jstring>();
	}
	jstring TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, const QString &arg5)
	{
		return __thiz.callObjectMethod(
			"iccTransmitApduBasicChannel",
			"(IIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>()
		).object<jstring>();
	}
	jbyteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return __thiz.callObjectMethod(
			"iccExchangeSimIO",
			"(IIIIILjava/lang/String;)[B",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		).object<jbyteArray>();
	}
	jbyteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, const QString &arg5)
	{
		return __thiz.callObjectMethod(
			"iccExchangeSimIO",
			"(IIIIILjava/lang/String;)[B",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>()
		).object<jbyteArray>();
	}
	jstring TelephonyManager::sendEnvelopeWithStatus(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::sendEnvelopeWithStatus(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring TelephonyManager::getIccAuthentication(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TelephonyManager::getIccAuthentication(jint arg0, jint arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jarray TelephonyManager::getForbiddenPlmns()
	{
		return __thiz.callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void TelephonyManager::setNetworkSelectionModeAutomatic()
	{
		__thiz.callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V"
		);
	}
	QAndroidJniObject TelephonyManager::requestNetworkScan(__jni_impl::android::telephony::NetworkScanRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::TelephonyScanManager_NetworkScanCallback arg2)
	{
		return __thiz.callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean TelephonyManager::setPreferredNetworkTypeToGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z"
		);
	}
	jboolean TelephonyManager::hasCarrierPrivileges()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierPrivileges",
			"()Z"
		);
	}
	jboolean TelephonyManager::setOperatorBrandOverride(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TelephonyManager::setOperatorBrandOverride(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TelephonyManager::sendUssdRequest(jstring arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TelephonyManager::sendUssdRequest(const QString &arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean TelephonyManager::isConcurrentVoiceAndDataSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
			"()Z"
		);
	}
	void TelephonyManager::setDataEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDataEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean TelephonyManager::isDataEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDataEnabled",
			"()Z"
		);
	}
	jboolean TelephonyManager::isDataRoamingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDataRoamingEnabled",
			"()Z"
		);
	}
	jboolean TelephonyManager::canChangeDtmfToneLength()
	{
		return __thiz.callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z"
		);
	}
	jboolean TelephonyManager::isWorldPhone()
	{
		return __thiz.callMethod<jboolean>(
			"isWorldPhone",
			"()Z"
		);
	}
	jboolean TelephonyManager::isTtyModeSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isTtyModeSupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isRttSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRttSupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isHearingAidCompatibilitySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z"
		);
	}
	QAndroidJniObject TelephonyManager::getServiceState()
	{
		return __thiz.callObjectMethod(
			"getServiceState",
			"()Landroid/telephony/ServiceState;"
		);
	}
	QAndroidJniObject TelephonyManager::getVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	void TelephonyManager::setVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean TelephonyManager::isVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.__jniObject().object()
		);
	}
	void TelephonyManager::setVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint TelephonyManager::getSimCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSimCarrierId",
			"()I"
		);
	}
	jstring TelephonyManager::getSimCarrierIdName()
	{
		return __thiz.callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TelephonyManager::getSimSpecificCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSimSpecificCarrierId",
			"()I"
		);
	}
	jstring TelephonyManager::getSimSpecificCarrierIdName()
	{
		return __thiz.callObjectMethod(
			"getSimSpecificCarrierIdName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TelephonyManager::getCarrierIdFromSimMccMnc()
	{
		return __thiz.callMethod<jint>(
			"getCarrierIdFromSimMccMnc",
			"()I"
		);
	}
	QAndroidJniObject TelephonyManager::getEmergencyNumberList()
	{
		return __thiz.callObjectMethod(
			"getEmergencyNumberList",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject TelephonyManager::getEmergencyNumberList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEmergencyNumberList",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	void TelephonyManager::setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setPreferredOpportunisticDataSubscription",
			"(IZLjava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jint TelephonyManager::getPreferredOpportunisticDataSubscription()
	{
		return __thiz.callMethod<jint>(
			"getPreferredOpportunisticDataSubscription",
			"()I"
		);
	}
	void TelephonyManager::updateAvailableNetworks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"updateAvailableNetworks",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint TelephonyManager::isMultiSimSupported()
	{
		return __thiz.callMethod<jint>(
			"isMultiSimSupported",
			"()I"
		);
	}
	void TelephonyManager::switchMultiSimConfig(jint arg0)
	{
		__thiz.callMethod<void>(
			"switchMultiSimConfig",
			"(I)V",
			arg0
		);
	}
	jboolean TelephonyManager::doesSwitchMultiSimConfigTriggerReboot()
	{
		return __thiz.callMethod<jboolean>(
			"doesSwitchMultiSimConfigTriggerReboot",
			"()Z"
		);
	}
	jint TelephonyManager::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jboolean TelephonyManager::isEmergencyNumber(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TelephonyManager::isEmergencyNumber(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class TelephonyManager : public __jni_impl::android::telephony::TelephonyManager
	{
	public:
		TelephonyManager(QAndroidJniObject obj) { __thiz = obj; }
		TelephonyManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_TELEPHONYMANAGER

