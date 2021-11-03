#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telephony
{
	class CellLocation;
}
namespace android::telephony
{
	class IccOpenLogicalChannelResponse;
}
namespace android::telephony
{
	class NetworkScan;
}
namespace android::telephony
{
	class NetworkScanRequest;
}
namespace android::telephony
{
	class PhoneStateListener;
}
namespace android::telephony
{
	class ServiceState;
}
namespace android::telephony
{
	class SignalStrength;
}
namespace android::telephony
{
	class TelephonyManager_CellInfoCallback;
}
namespace android::telephony
{
	class TelephonyManager_UssdResponseCallback;
}
namespace android::telephony
{
	class TelephonyScanManager_NetworkScanCallback;
}
namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}

namespace android::telephony
{
	class TelephonyManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_CARRIER_MESSAGING_CLIENT_SERVICE();
		static jstring ACTION_CONFIGURE_VOICEMAIL();
		static jstring ACTION_MULTI_SIM_CONFIG_CHANGED();
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
		static jint DATA_DISCONNECTING();
		static jint DATA_SUSPENDED();
		static jint DATA_UNKNOWN();
		static jstring EXTRA_ACTIVE_SIM_SUPPORTED_COUNT();
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
		static jint NETWORK_SELECTION_MODE_AUTO();
		static jint NETWORK_SELECTION_MODE_MANUAL();
		static jint NETWORK_SELECTION_MODE_UNKNOWN();
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
		static jint SET_OPPORTUNISTIC_SUB_NO_OPPORTUNISTIC_SUB_AVAILABLE();
		static jint SET_OPPORTUNISTIC_SUB_REMOTE_SERVICE_EXCEPTION();
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
		static jint UPDATE_AVAILABLE_NETWORKS_DISABLE_MODEM_FAIL();
		static jint UPDATE_AVAILABLE_NETWORKS_ENABLE_MODEM_FAIL();
		static jint UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS();
		static jint UPDATE_AVAILABLE_NETWORKS_MULTIPLE_NETWORKS_NOT_SUPPORTED();
		static jint UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE();
		static jint UPDATE_AVAILABLE_NETWORKS_NO_OPPORTUNISTIC_SUB_AVAILABLE();
		static jint UPDATE_AVAILABLE_NETWORKS_REMOTE_SERVICE_EXCEPTION();
		static jint UPDATE_AVAILABLE_NETWORKS_SERVICE_IS_DISABLED();
		static jint UPDATE_AVAILABLE_NETWORKS_SUCCESS();
		static jint UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE();
		static jint USSD_ERROR_SERVICE_UNAVAIL();
		static jint USSD_RETURN_FAILURE();
		static jstring VVM_TYPE_CVVM();
		static jstring VVM_TYPE_OMTP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canChangeDtmfToneLength();
		android::telephony::TelephonyManager createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0);
		android::telephony::TelephonyManager createForSubscriptionId(jint arg0);
		jboolean doesSwitchMultiSimConfigTriggerReboot();
		jint getActiveModemCount();
		JObject getAllCellInfo();
		jint getCallState();
		jint getCardIdForDefaultEuicc();
		android::os::PersistableBundle getCarrierConfig();
		jint getCarrierIdFromSimMccMnc();
		android::telephony::CellLocation getCellLocation();
		jint getDataActivity();
		jint getDataNetworkType();
		jint getDataState();
		jstring getDeviceId();
		jstring getDeviceId(jint arg0);
		jstring getDeviceSoftwareVersion();
		JObject getEmergencyNumberList();
		JObject getEmergencyNumberList(jint arg0);
		jarray getForbiddenPlmns();
		jstring getGroupIdLevel1();
		jstring getIccAuthentication(jint arg0, jint arg1, jstring arg2);
		jstring getImei();
		jstring getImei(jint arg0);
		jstring getLine1Number();
		jstring getManualNetworkSelectionPlmn();
		jstring getManufacturerCode();
		jstring getManufacturerCode(jint arg0);
		jstring getMeid();
		jstring getMeid(jint arg0);
		jstring getMmsUAProfUrl();
		jstring getMmsUserAgent();
		jstring getNai();
		jstring getNetworkCountryIso();
		jstring getNetworkCountryIso(jint arg0);
		jstring getNetworkOperator();
		jstring getNetworkOperatorName();
		jint getNetworkSelectionMode();
		jstring getNetworkSpecifier();
		jint getNetworkType();
		jint getPhoneCount();
		jint getPhoneType();
		jint getPreferredOpportunisticDataSubscription();
		android::telephony::ServiceState getServiceState();
		android::telephony::SignalStrength getSignalStrength();
		jint getSimCarrierId();
		jstring getSimCarrierIdName();
		jstring getSimCountryIso();
		jstring getSimOperator();
		jstring getSimOperatorName();
		jstring getSimSerialNumber();
		jint getSimSpecificCarrierId();
		jstring getSimSpecificCarrierIdName();
		jint getSimState();
		jint getSimState(jint arg0);
		jstring getSubscriberId();
		jint getSubscriptionId();
		jint getSubscriptionId(android::telecom::PhoneAccountHandle arg0);
		jint getSupportedModemCount();
		jstring getTypeAllocationCode();
		jstring getTypeAllocationCode(jint arg0);
		JObject getUiccCardsInfo();
		jstring getVisualVoicemailPackageName();
		jstring getVoiceMailAlphaTag();
		jstring getVoiceMailNumber();
		jint getVoiceNetworkType();
		android::net::Uri getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0);
		jboolean hasCarrierPrivileges();
		jboolean hasIccCard();
		jboolean iccCloseLogicalChannel(jint arg0);
		jbyteArray iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(jstring arg0);
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(jstring arg0, jint arg1);
		jstring iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5);
		jstring iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		jboolean isConcurrentVoiceAndDataSupported();
		jboolean isDataEnabled();
		jboolean isDataRoamingEnabled();
		jboolean isEmergencyNumber(jstring arg0);
		jboolean isHearingAidCompatibilitySupported();
		jboolean isManualNetworkSelectionAllowed();
		jboolean isModemEnabledForSlot(jint arg0);
		jint isMultiSimSupported();
		jboolean isNetworkRoaming();
		jboolean isRttSupported();
		jboolean isSmsCapable();
		jboolean isTtyModeSupported();
		jboolean isVoiceCapable();
		jboolean isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0);
		jboolean isWorldPhone();
		void listen(android::telephony::PhoneStateListener arg0, jint arg1);
		void requestCellInfoUpdate(JObject arg0, android::telephony::TelephonyManager_CellInfoCallback arg1);
		android::telephony::NetworkScan requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2);
		void sendDialerSpecialCode(jstring arg0);
		jstring sendEnvelopeWithStatus(jstring arg0);
		void sendUssdRequest(jstring arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2);
		void sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, android::app::PendingIntent arg3);
		void setDataEnabled(jboolean arg0);
		jint setForbiddenPlmns(JObject arg0);
		jboolean setLine1NumberForDisplay(jstring arg0, jstring arg1);
		void setNetworkSelectionModeAutomatic();
		jboolean setNetworkSelectionModeManual(jstring arg0, jboolean arg1);
		jboolean setNetworkSelectionModeManual(jstring arg0, jboolean arg1, jint arg2);
		jboolean setOperatorBrandOverride(jstring arg0);
		jboolean setPreferredNetworkTypeToGlobal();
		void setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, JObject arg2, JObject arg3);
		void setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0);
		jboolean setVoiceMailNumber(jstring arg0, jstring arg1);
		void setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1);
		void setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1);
		void switchMultiSimConfig(jint arg0);
		void updateAvailableNetworks(JObject arg0, JObject arg1, JObject arg2);
	};
} // namespace android::telephony

