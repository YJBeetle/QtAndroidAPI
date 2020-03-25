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
		static QAndroidJniObject ACTION_CARRIER_MESSAGING_CLIENT_SERVICE();
		static QAndroidJniObject ACTION_CONFIGURE_VOICEMAIL();
		static QAndroidJniObject ACTION_NETWORK_COUNTRY_CHANGED();
		static QAndroidJniObject ACTION_PHONE_STATE_CHANGED();
		static QAndroidJniObject ACTION_RESPOND_VIA_MESSAGE();
		static QAndroidJniObject ACTION_SECRET_CODE();
		static QAndroidJniObject ACTION_SHOW_VOICEMAIL_NOTIFICATION();
		static QAndroidJniObject ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED();
		static QAndroidJniObject ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED();
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
		static QAndroidJniObject EXTRA_CALL_VOICEMAIL_INTENT();
		static QAndroidJniObject EXTRA_CARRIER_ID();
		static QAndroidJniObject EXTRA_CARRIER_NAME();
		static QAndroidJniObject EXTRA_HIDE_PUBLIC_SETTINGS();
		static QAndroidJniObject EXTRA_INCOMING_NUMBER();
		static QAndroidJniObject EXTRA_IS_REFRESH();
		static QAndroidJniObject EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT();
		static QAndroidJniObject EXTRA_NETWORK_COUNTRY();
		static QAndroidJniObject EXTRA_NOTIFICATION_COUNT();
		static QAndroidJniObject EXTRA_PHONE_ACCOUNT_HANDLE();
		static QAndroidJniObject EXTRA_SPECIFIC_CARRIER_ID();
		static QAndroidJniObject EXTRA_SPECIFIC_CARRIER_NAME();
		static QAndroidJniObject EXTRA_STATE();
		static QAndroidJniObject EXTRA_STATE_IDLE();
		static QAndroidJniObject EXTRA_STATE_OFFHOOK();
		static QAndroidJniObject EXTRA_STATE_RINGING();
		static QAndroidJniObject EXTRA_SUBSCRIPTION_ID();
		static QAndroidJniObject EXTRA_VOICEMAIL_NUMBER();
		static QAndroidJniObject METADATA_HIDE_VOICEMAIL_SETTINGS_MENU();
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
		static QAndroidJniObject VVM_TYPE_CVVM();
		static QAndroidJniObject VVM_TYPE_OMTP();
		
		// Constructors
		void __constructor();
		
		// Methods
		void listen(__jni_impl::android::telephony::PhoneStateListener arg0, jint arg1);
		QAndroidJniObject getDeviceId(jint arg0);
		QAndroidJniObject getDeviceId();
		QAndroidJniObject getSignalStrength();
		jint getNetworkType();
		jint getPhoneCount();
		QAndroidJniObject createForSubscriptionId(jint arg0);
		QAndroidJniObject createForPhoneAccountHandle(__jni_impl::android::telecom::PhoneAccountHandle arg0);
		QAndroidJniObject getDeviceSoftwareVersion();
		QAndroidJniObject getImei(jint arg0);
		QAndroidJniObject getImei();
		QAndroidJniObject getTypeAllocationCode();
		QAndroidJniObject getTypeAllocationCode(jint arg0);
		QAndroidJniObject getMeid();
		QAndroidJniObject getMeid(jint arg0);
		QAndroidJniObject getManufacturerCode();
		QAndroidJniObject getManufacturerCode(jint arg0);
		QAndroidJniObject getNai();
		QAndroidJniObject getCellLocation();
		jint getPhoneType();
		QAndroidJniObject getNetworkOperatorName();
		QAndroidJniObject getNetworkOperator();
		QAndroidJniObject getNetworkSpecifier();
		QAndroidJniObject getCarrierConfig();
		jboolean isNetworkRoaming();
		QAndroidJniObject getNetworkCountryIso();
		jint getDataNetworkType();
		jint getVoiceNetworkType();
		jboolean hasIccCard();
		jint getSimState(jint arg0);
		jint getSimState();
		QAndroidJniObject getSimOperator();
		QAndroidJniObject getSimOperatorName();
		QAndroidJniObject getSimCountryIso();
		QAndroidJniObject getSimSerialNumber();
		jint getCardIdForDefaultEuicc();
		QAndroidJniObject getUiccCardsInfo();
		QAndroidJniObject getSubscriberId();
		QAndroidJniObject getGroupIdLevel1();
		jboolean setLine1NumberForDisplay(jstring arg0, jstring arg1);
		jboolean setVoiceMailNumber(jstring arg0, jstring arg1);
		QAndroidJniObject getVisualVoicemailPackageName();
		void setVisualVoicemailSmsFilterSettings(__jni_impl::android::telephony::VisualVoicemailSmsFilterSettings arg0);
		void sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3);
		QAndroidJniObject getVoiceMailAlphaTag();
		void sendDialerSpecialCode(jstring arg0);
		jint getCallState();
		jint getDataActivity();
		jint getDataState();
		jboolean isVoiceCapable();
		jboolean isSmsCapable();
		QAndroidJniObject getAllCellInfo();
		void requestCellInfoUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::TelephonyManager_CellInfoCallback arg1);
		QAndroidJniObject getMmsUserAgent();
		QAndroidJniObject getMmsUAProfUrl();
		QAndroidJniObject iccOpenLogicalChannel(jstring arg0);
		QAndroidJniObject iccOpenLogicalChannel(jstring arg0, jint arg1);
		jboolean iccCloseLogicalChannel(jint arg0);
		QAndroidJniObject iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		QAndroidJniObject iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		QAndroidJniObject iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		QAndroidJniObject sendEnvelopeWithStatus(jstring arg0);
		QAndroidJniObject getIccAuthentication(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject getForbiddenPlmns();
		void setNetworkSelectionModeAutomatic();
		QAndroidJniObject requestNetworkScan(__jni_impl::android::telephony::NetworkScanRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::TelephonyScanManager_NetworkScanCallback arg2);
		jboolean setNetworkSelectionModeManual(jstring arg0, jboolean arg1);
		jboolean setPreferredNetworkTypeToGlobal();
		jboolean hasCarrierPrivileges();
		jboolean setOperatorBrandOverride(jstring arg0);
		void sendUssdRequest(jstring arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2);
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
		QAndroidJniObject getSimCarrierIdName();
		jint getSimSpecificCarrierId();
		QAndroidJniObject getSimSpecificCarrierIdName();
		jint getCarrierIdFromSimMccMnc();
		QAndroidJniObject getEmergencyNumberList(jint arg0);
		QAndroidJniObject getEmergencyNumberList();
		void setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		jint getPreferredOpportunisticDataSubscription();
		void updateAvailableNetworks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jint isMultiSimSupported();
		void switchMultiSimConfig(jint arg0);
		jboolean doesSwitchMultiSimConfigTriggerReboot();
		QAndroidJniObject getVoiceMailNumber();
		QAndroidJniObject getLine1Number();
		jboolean isEmergencyNumber(jstring arg0);
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
	QAndroidJniObject TelephonyManager::ACTION_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_NETWORK_COUNTRY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_NETWORK_COUNTRY_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_SECRET_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SECRET_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;");
	}
	jint TelephonyManager::APPTYPE_CSIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_CSIM");
	}
	jint TelephonyManager::APPTYPE_ISIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_ISIM");
	}
	jint TelephonyManager::APPTYPE_RUIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_RUIM");
	}
	jint TelephonyManager::APPTYPE_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_SIM");
	}
	jint TelephonyManager::APPTYPE_USIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_USIM");
	}
	jint TelephonyManager::AUTHTYPE_EAP_AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_AKA");
	}
	jint TelephonyManager::AUTHTYPE_EAP_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_SIM");
	}
	jint TelephonyManager::CALL_STATE_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_IDLE");
	}
	jint TelephonyManager::CALL_STATE_OFFHOOK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_OFFHOOK");
	}
	jint TelephonyManager::CALL_STATE_RINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_RINGING");
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_AFFILIATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_AFFILIATED");
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_ANY");
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_HOME");
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_RADIO_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_RADIO_DEFAULT");
	}
	jint TelephonyManager::DATA_ACTIVITY_DORMANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_DORMANT");
	}
	jint TelephonyManager::DATA_ACTIVITY_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_IN");
	}
	jint TelephonyManager::DATA_ACTIVITY_INOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_INOUT");
	}
	jint TelephonyManager::DATA_ACTIVITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_NONE");
	}
	jint TelephonyManager::DATA_ACTIVITY_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_OUT");
	}
	jint TelephonyManager::DATA_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTED");
	}
	jint TelephonyManager::DATA_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTING");
	}
	jint TelephonyManager::DATA_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTED");
	}
	jint TelephonyManager::DATA_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED");
	}
	jint TelephonyManager::DATA_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_UNKNOWN");
	}
	QAndroidJniObject TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_IS_REFRESH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_NETWORK_COUNTRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NETWORK_COUNTRY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_SPECIFIC_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_SPECIFIC_CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_STATE_IDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_STATE_RINGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;");
	}
	jint TelephonyManager::MULTISIM_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_ALLOWED");
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_CARRIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_CARRIER");
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_HARDWARE");
	}
	jint TelephonyManager::NETWORK_TYPE_1xRTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_1xRTT");
	}
	jint TelephonyManager::NETWORK_TYPE_CDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_CDMA");
	}
	jint TelephonyManager::NETWORK_TYPE_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EDGE");
	}
	jint TelephonyManager::NETWORK_TYPE_EHRPD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EHRPD");
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_0");
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_A");
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_B");
	}
	jint TelephonyManager::NETWORK_TYPE_GPRS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GPRS");
	}
	jint TelephonyManager::NETWORK_TYPE_GSM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GSM");
	}
	jint TelephonyManager::NETWORK_TYPE_HSDPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSDPA");
	}
	jint TelephonyManager::NETWORK_TYPE_HSPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPA");
	}
	jint TelephonyManager::NETWORK_TYPE_HSPAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPAP");
	}
	jint TelephonyManager::NETWORK_TYPE_HSUPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSUPA");
	}
	jint TelephonyManager::NETWORK_TYPE_IDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IDEN");
	}
	jint TelephonyManager::NETWORK_TYPE_IWLAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IWLAN");
	}
	jint TelephonyManager::NETWORK_TYPE_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_LTE");
	}
	jint TelephonyManager::NETWORK_TYPE_NR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_NR");
	}
	jint TelephonyManager::NETWORK_TYPE_TD_SCDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_TD_SCDMA");
	}
	jint TelephonyManager::NETWORK_TYPE_UMTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UMTS");
	}
	jint TelephonyManager::NETWORK_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UNKNOWN");
	}
	jint TelephonyManager::PHONE_TYPE_CDMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_CDMA");
	}
	jint TelephonyManager::PHONE_TYPE_GSM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_GSM");
	}
	jint TelephonyManager::PHONE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_NONE");
	}
	jint TelephonyManager::PHONE_TYPE_SIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_SIP");
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION");
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_SUCCESS");
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED");
	}
	jint TelephonyManager::SIM_STATE_ABSENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_ABSENT");
	}
	jint TelephonyManager::SIM_STATE_CARD_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_IO_ERROR");
	}
	jint TelephonyManager::SIM_STATE_CARD_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_RESTRICTED");
	}
	jint TelephonyManager::SIM_STATE_NETWORK_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NETWORK_LOCKED");
	}
	jint TelephonyManager::SIM_STATE_NOT_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NOT_READY");
	}
	jint TelephonyManager::SIM_STATE_PERM_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PERM_DISABLED");
	}
	jint TelephonyManager::SIM_STATE_PIN_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PIN_REQUIRED");
	}
	jint TelephonyManager::SIM_STATE_PUK_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PUK_REQUIRED");
	}
	jint TelephonyManager::SIM_STATE_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_READY");
	}
	jint TelephonyManager::SIM_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_UNKNOWN");
	}
	jint TelephonyManager::UNINITIALIZED_CARD_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNINITIALIZED_CARD_ID");
	}
	jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID");
	}
	jint TelephonyManager::UNSUPPORTED_CARD_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNSUPPORTED_CARD_ID");
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ABORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ABORTED");
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS");
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE");
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SUCCESS");
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE");
	}
	jint TelephonyManager::USSD_ERROR_SERVICE_UNAVAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_ERROR_SERVICE_UNAVAIL");
	}
	jint TelephonyManager::USSD_RETURN_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_RETURN_FAILURE");
	}
	QAndroidJniObject TelephonyManager::VVM_TYPE_CVVM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::VVM_TYPE_OMTP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;");
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
			arg1);
	}
	QAndroidJniObject TelephonyManager::getDeviceId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getDeviceId()
	{
		return __thiz.callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getSignalStrength",
			"()Landroid/telephony/SignalStrength;");
	}
	jint TelephonyManager::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I");
	}
	jint TelephonyManager::getPhoneCount()
	{
		return __thiz.callMethod<jint>(
			"getPhoneCount",
			"()I");
	}
	QAndroidJniObject TelephonyManager::createForSubscriptionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/TelephonyManager;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::createForPhoneAccountHandle(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"createForPhoneAccountHandle",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telephony/TelephonyManager;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TelephonyManager::getDeviceSoftwareVersion()
	{
		return __thiz.callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getImei(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getImei()
	{
		return __thiz.callObjectMethod(
			"getImei",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getTypeAllocationCode()
	{
		return __thiz.callObjectMethod(
			"getTypeAllocationCode",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getTypeAllocationCode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTypeAllocationCode",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getMeid()
	{
		return __thiz.callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getMeid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getManufacturerCode()
	{
		return __thiz.callObjectMethod(
			"getManufacturerCode",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getManufacturerCode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerCode",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getNai()
	{
		return __thiz.callObjectMethod(
			"getNai",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getCellLocation()
	{
		return __thiz.callObjectMethod(
			"getCellLocation",
			"()Landroid/telephony/CellLocation;");
	}
	jint TelephonyManager::getPhoneType()
	{
		return __thiz.callMethod<jint>(
			"getPhoneType",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getNetworkOperatorName()
	{
		return __thiz.callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getNetworkSpecifier()
	{
		return __thiz.callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getCarrierConfig()
	{
		return __thiz.callObjectMethod(
			"getCarrierConfig",
			"()Landroid/os/PersistableBundle;");
	}
	jboolean TelephonyManager::isNetworkRoaming()
	{
		return __thiz.callMethod<jboolean>(
			"isNetworkRoaming",
			"()Z");
	}
	QAndroidJniObject TelephonyManager::getNetworkCountryIso()
	{
		return __thiz.callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;");
	}
	jint TelephonyManager::getDataNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getDataNetworkType",
			"()I");
	}
	jint TelephonyManager::getVoiceNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getVoiceNetworkType",
			"()I");
	}
	jboolean TelephonyManager::hasIccCard()
	{
		return __thiz.callMethod<jboolean>(
			"hasIccCard",
			"()Z");
	}
	jint TelephonyManager::getSimState(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSimState",
			"(I)I",
			arg0);
	}
	jint TelephonyManager::getSimState()
	{
		return __thiz.callMethod<jint>(
			"getSimState",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getSimOperator()
	{
		return __thiz.callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getSimOperatorName()
	{
		return __thiz.callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getSimCountryIso()
	{
		return __thiz.callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getSimSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;");
	}
	jint TelephonyManager::getCardIdForDefaultEuicc()
	{
		return __thiz.callMethod<jint>(
			"getCardIdForDefaultEuicc",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getUiccCardsInfo()
	{
		return __thiz.callObjectMethod(
			"getUiccCardsInfo",
			"()Ljava/util/List;");
	}
	QAndroidJniObject TelephonyManager::getSubscriberId()
	{
		return __thiz.callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getGroupIdLevel1()
	{
		return __thiz.callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;");
	}
	jboolean TelephonyManager::setLine1NumberForDisplay(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1);
	}
	jboolean TelephonyManager::setVoiceMailNumber(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject TelephonyManager::getVisualVoicemailPackageName()
	{
		return __thiz.callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;");
	}
	void TelephonyManager::setVisualVoicemailSmsFilterSettings(__jni_impl::android::telephony::VisualVoicemailSmsFilterSettings arg0)
	{
		__thiz.callMethod<void>(
			"setVisualVoicemailSmsFilterSettings",
			"(Landroid/telephony/VisualVoicemailSmsFilterSettings;)V",
			arg0.__jniObject().object());
	}
	void TelephonyManager::sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject TelephonyManager::getVoiceMailAlphaTag()
	{
		return __thiz.callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;");
	}
	void TelephonyManager::sendDialerSpecialCode(jstring arg0)
	{
		__thiz.callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint TelephonyManager::getCallState()
	{
		return __thiz.callMethod<jint>(
			"getCallState",
			"()I");
	}
	jint TelephonyManager::getDataActivity()
	{
		return __thiz.callMethod<jint>(
			"getDataActivity",
			"()I");
	}
	jint TelephonyManager::getDataState()
	{
		return __thiz.callMethod<jint>(
			"getDataState",
			"()I");
	}
	jboolean TelephonyManager::isVoiceCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isVoiceCapable",
			"()Z");
	}
	jboolean TelephonyManager::isSmsCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isSmsCapable",
			"()Z");
	}
	QAndroidJniObject TelephonyManager::getAllCellInfo()
	{
		return __thiz.callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;");
	}
	void TelephonyManager::requestCellInfoUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::TelephonyManager_CellInfoCallback arg1)
	{
		__thiz.callMethod<void>(
			"requestCellInfoUpdate",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyManager$CellInfoCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject TelephonyManager::getMmsUserAgent()
	{
		return __thiz.callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getMmsUAProfUrl()
	{
		return __thiz.callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::iccOpenLogicalChannel(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0,
			arg1);
	}
	jboolean TelephonyManager::iccCloseLogicalChannel(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"iccCloseLogicalChannel",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
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
			arg6);
	}
	QAndroidJniObject TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return __thiz.callObjectMethod(
			"iccTransmitApduBasicChannel",
			"(IIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	QAndroidJniObject TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return __thiz.callObjectMethod(
			"iccExchangeSimIO",
			"(IIIIILjava/lang/String;)[B",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	QAndroidJniObject TelephonyManager::sendEnvelopeWithStatus(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getIccAuthentication(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject TelephonyManager::getForbiddenPlmns()
	{
		return __thiz.callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;");
	}
	void TelephonyManager::setNetworkSelectionModeAutomatic()
	{
		__thiz.callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V");
	}
	QAndroidJniObject TelephonyManager::requestNetworkScan(__jni_impl::android::telephony::NetworkScanRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::TelephonyScanManager_NetworkScanCallback arg2)
	{
		return __thiz.callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1);
	}
	jboolean TelephonyManager::setPreferredNetworkTypeToGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z");
	}
	jboolean TelephonyManager::hasCarrierPrivileges()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierPrivileges",
			"()Z");
	}
	jboolean TelephonyManager::setOperatorBrandOverride(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	void TelephonyManager::sendUssdRequest(jstring arg0, __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean TelephonyManager::isConcurrentVoiceAndDataSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
			"()Z");
	}
	void TelephonyManager::setDataEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDataEnabled",
			"(Z)V",
			arg0);
	}
	jboolean TelephonyManager::isDataEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDataEnabled",
			"()Z");
	}
	jboolean TelephonyManager::isDataRoamingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDataRoamingEnabled",
			"()Z");
	}
	jboolean TelephonyManager::canChangeDtmfToneLength()
	{
		return __thiz.callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z");
	}
	jboolean TelephonyManager::isWorldPhone()
	{
		return __thiz.callMethod<jboolean>(
			"isWorldPhone",
			"()Z");
	}
	jboolean TelephonyManager::isTtyModeSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isTtyModeSupported",
			"()Z");
	}
	jboolean TelephonyManager::isRttSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRttSupported",
			"()Z");
	}
	jboolean TelephonyManager::isHearingAidCompatibilitySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z");
	}
	QAndroidJniObject TelephonyManager::getServiceState()
	{
		return __thiz.callObjectMethod(
			"getServiceState",
			"()Landroid/telephony/ServiceState;");
	}
	QAndroidJniObject TelephonyManager::getVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	void TelephonyManager::setVoicemailRingtoneUri(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean TelephonyManager::isVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.__jniObject().object());
	}
	void TelephonyManager::setVoicemailVibrationEnabled(__jni_impl::android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint TelephonyManager::getSimCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSimCarrierId",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getSimCarrierIdName()
	{
		return __thiz.callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;");
	}
	jint TelephonyManager::getSimSpecificCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getSimSpecificCarrierId",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getSimSpecificCarrierIdName()
	{
		return __thiz.callObjectMethod(
			"getSimSpecificCarrierIdName",
			"()Ljava/lang/CharSequence;");
	}
	jint TelephonyManager::getCarrierIdFromSimMccMnc()
	{
		return __thiz.callMethod<jint>(
			"getCarrierIdFromSimMccMnc",
			"()I");
	}
	QAndroidJniObject TelephonyManager::getEmergencyNumberList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEmergencyNumberList",
			"(I)Ljava/util/Map;",
			arg0);
	}
	QAndroidJniObject TelephonyManager::getEmergencyNumberList()
	{
		return __thiz.callObjectMethod(
			"getEmergencyNumberList",
			"()Ljava/util/Map;");
	}
	void TelephonyManager::setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setPreferredOpportunisticDataSubscription",
			"(IZLjava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	jint TelephonyManager::getPreferredOpportunisticDataSubscription()
	{
		return __thiz.callMethod<jint>(
			"getPreferredOpportunisticDataSubscription",
			"()I");
	}
	void TelephonyManager::updateAvailableNetworks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"updateAvailableNetworks",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint TelephonyManager::isMultiSimSupported()
	{
		return __thiz.callMethod<jint>(
			"isMultiSimSupported",
			"()I");
	}
	void TelephonyManager::switchMultiSimConfig(jint arg0)
	{
		__thiz.callMethod<void>(
			"switchMultiSimConfig",
			"(I)V",
			arg0);
	}
	jboolean TelephonyManager::doesSwitchMultiSimConfigTriggerReboot()
	{
		return __thiz.callMethod<jboolean>(
			"doesSwitchMultiSimConfigTriggerReboot",
			"()Z");
	}
	QAndroidJniObject TelephonyManager::getVoiceMailNumber()
	{
		return __thiz.callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TelephonyManager::getLine1Number()
	{
		return __thiz.callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;");
	}
	jboolean TelephonyManager::isEmergencyNumber(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0);
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

