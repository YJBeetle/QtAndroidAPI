#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
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
	class SignalStrengthUpdateRequest;
}
namespace android::telephony
{
	class TelephonyCallback;
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
namespace java::io
{
	class InputStream;
}
class JString;
class JString;

namespace android::telephony
{
	class TelephonyManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_CARRIER_MESSAGING_CLIENT_SERVICE();
		static JString ACTION_CARRIER_SIGNAL_DEFAULT_NETWORK_AVAILABLE();
		static JString ACTION_CARRIER_SIGNAL_PCO_VALUE();
		static JString ACTION_CARRIER_SIGNAL_REDIRECTED();
		static JString ACTION_CARRIER_SIGNAL_REQUEST_NETWORK_FAILED();
		static JString ACTION_CARRIER_SIGNAL_RESET();
		static JString ACTION_CONFIGURE_VOICEMAIL();
		static JString ACTION_MULTI_SIM_CONFIG_CHANGED();
		static JString ACTION_NETWORK_COUNTRY_CHANGED();
		static JString ACTION_PHONE_STATE_CHANGED();
		static JString ACTION_RESPOND_VIA_MESSAGE();
		static JString ACTION_SECRET_CODE();
		static JString ACTION_SHOW_VOICEMAIL_NOTIFICATION();
		static JString ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED();
		static JString ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED();
		static jint APPTYPE_CSIM();
		static jint APPTYPE_ISIM();
		static jint APPTYPE_RUIM();
		static jint APPTYPE_SIM();
		static jint APPTYPE_UNKNOWN();
		static jint APPTYPE_USIM();
		static jint AUTHTYPE_EAP_AKA();
		static jint AUTHTYPE_EAP_SIM();
		static jint CALL_COMPOSER_STATUS_OFF();
		static jint CALL_COMPOSER_STATUS_ON();
		static jint CALL_STATE_IDLE();
		static jint CALL_STATE_OFFHOOK();
		static jint CALL_STATE_RINGING();
		static JString CAPABILITY_SLICING_CONFIG_SUPPORTED();
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
		static jint DATA_ENABLED_REASON_CARRIER();
		static jint DATA_ENABLED_REASON_POLICY();
		static jint DATA_ENABLED_REASON_THERMAL();
		static jint DATA_ENABLED_REASON_USER();
		static jint DATA_SUSPENDED();
		static jint DATA_UNKNOWN();
		static jint ERI_FLASH();
		static jint ERI_OFF();
		static jint ERI_ON();
		static JString EXTRA_ACTIVE_SIM_SUPPORTED_COUNT();
		static JString EXTRA_APN_PROTOCOL();
		static JString EXTRA_APN_TYPE();
		static JString EXTRA_CALL_VOICEMAIL_INTENT();
		static JString EXTRA_CARRIER_ID();
		static JString EXTRA_CARRIER_NAME();
		static JString EXTRA_DATA_FAIL_CAUSE();
		static JString EXTRA_DEFAULT_NETWORK_AVAILABLE();
		static JString EXTRA_HIDE_PUBLIC_SETTINGS();
		static JString EXTRA_INCOMING_NUMBER();
		static JString EXTRA_IS_REFRESH();
		static JString EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT();
		static JString EXTRA_NETWORK_COUNTRY();
		static JString EXTRA_NOTIFICATION_COUNT();
		static JString EXTRA_PCO_ID();
		static JString EXTRA_PCO_VALUE();
		static JString EXTRA_PHONE_ACCOUNT_HANDLE();
		static JString EXTRA_REDIRECTION_URL();
		static JString EXTRA_SPECIFIC_CARRIER_ID();
		static JString EXTRA_SPECIFIC_CARRIER_NAME();
		static JString EXTRA_STATE();
		static JString EXTRA_STATE_IDLE();
		static JString EXTRA_STATE_OFFHOOK();
		static JString EXTRA_STATE_RINGING();
		static JString EXTRA_SUBSCRIPTION_ID();
		static JString EXTRA_VOICEMAIL_NUMBER();
		static JString METADATA_HIDE_VOICEMAIL_SETTINGS_MENU();
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
		static JString VVM_TYPE_CVVM();
		static JString VVM_TYPE_OMTP();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jlong getMaximumCallComposerPictureSize();
		jboolean canChangeDtmfToneLength();
		void clearSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0);
		android::telephony::TelephonyManager createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0);
		android::telephony::TelephonyManager createForSubscriptionId(jint arg0);
		jboolean doesSwitchMultiSimConfigTriggerReboot();
		jint getActiveModemCount();
		JObject getAllCellInfo();
		jint getCallComposerStatus();
		jint getCallState();
		jint getCallStateForSubscription();
		jint getCardIdForDefaultEuicc();
		android::os::PersistableBundle getCarrierConfig();
		jint getCarrierIdFromSimMccMnc();
		android::telephony::CellLocation getCellLocation();
		jint getDataActivity();
		jint getDataNetworkType();
		jint getDataState();
		JString getDeviceId();
		JString getDeviceId(jint arg0);
		JString getDeviceSoftwareVersion();
		JObject getEmergencyNumberList();
		JObject getEmergencyNumberList(jint arg0);
		JObject getEquivalentHomePlmns();
		JArray getForbiddenPlmns();
		JString getGroupIdLevel1();
		JString getIccAuthentication(jint arg0, jint arg1, JString arg2);
		JString getImei();
		JString getImei(jint arg0);
		JString getLine1Number();
		JString getManualNetworkSelectionPlmn();
		JString getManufacturerCode();
		JString getManufacturerCode(jint arg0);
		JString getMeid();
		JString getMeid(jint arg0);
		JString getMmsUAProfUrl();
		JString getMmsUserAgent();
		JString getNai();
		JString getNetworkCountryIso();
		JString getNetworkCountryIso(jint arg0);
		JString getNetworkOperator();
		JString getNetworkOperatorName();
		jint getNetworkSelectionMode();
		void getNetworkSlicingConfiguration(JObject arg0, JObject arg1);
		JString getNetworkSpecifier();
		jint getNetworkType();
		android::telecom::PhoneAccountHandle getPhoneAccountHandle();
		jint getPhoneCount();
		jint getPhoneType();
		jint getPreferredOpportunisticDataSubscription();
		android::telephony::ServiceState getServiceState();
		android::telephony::SignalStrength getSignalStrength();
		jint getSimCarrierId();
		JString getSimCarrierIdName();
		JString getSimCountryIso();
		JString getSimOperator();
		JString getSimOperatorName();
		JString getSimSerialNumber();
		jint getSimSpecificCarrierId();
		JString getSimSpecificCarrierIdName();
		jint getSimState();
		jint getSimState(jint arg0);
		JString getSubscriberId();
		jint getSubscriptionId();
		jint getSubscriptionId(android::telecom::PhoneAccountHandle arg0);
		jint getSupportedModemCount();
		JString getTypeAllocationCode();
		JString getTypeAllocationCode(jint arg0);
		JObject getUiccCardsInfo();
		JString getVisualVoicemailPackageName();
		JString getVoiceMailAlphaTag();
		JString getVoiceMailNumber();
		jint getVoiceNetworkType();
		android::net::Uri getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0);
		jboolean hasCarrierPrivileges();
		jboolean hasIccCard();
		jboolean iccCloseLogicalChannel(jint arg0);
		JByteArray iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5);
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(JString arg0);
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(JString arg0, jint arg1);
		JString iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5);
		JString iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JString arg6);
		jboolean isConcurrentVoiceAndDataSupported();
		jboolean isDataCapable();
		jboolean isDataConnectionAllowed();
		jboolean isDataEnabled();
		jboolean isDataEnabledForReason(jint arg0);
		jboolean isDataRoamingEnabled();
		jboolean isEmergencyNumber(JString arg0);
		jboolean isHearingAidCompatibilitySupported();
		jboolean isManualNetworkSelectionAllowed();
		jboolean isModemEnabledForSlot(jint arg0);
		jint isMultiSimSupported();
		jboolean isNetworkRoaming();
		jboolean isRadioInterfaceCapabilitySupported(JString arg0);
		jboolean isRttSupported();
		jboolean isSmsCapable();
		jboolean isTtyModeSupported();
		jboolean isVoiceCapable();
		jboolean isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0);
		jboolean isWorldPhone();
		void listen(android::telephony::PhoneStateListener arg0, jint arg1);
		void registerTelephonyCallback(JObject arg0, android::telephony::TelephonyCallback arg1);
		void requestCellInfoUpdate(JObject arg0, android::telephony::TelephonyManager_CellInfoCallback arg1);
		android::telephony::NetworkScan requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2);
		void sendDialerSpecialCode(JString arg0);
		JString sendEnvelopeWithStatus(JString arg0);
		void sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2);
		void sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3);
		void setCallComposerStatus(jint arg0);
		void setDataEnabled(jboolean arg0);
		void setDataEnabledForReason(jint arg0, jboolean arg1);
		jint setForbiddenPlmns(JObject arg0);
		jboolean setLine1NumberForDisplay(JString arg0, JString arg1);
		void setNetworkSelectionModeAutomatic();
		jboolean setNetworkSelectionModeManual(JString arg0, jboolean arg1);
		jboolean setNetworkSelectionModeManual(JString arg0, jboolean arg1, jint arg2);
		jboolean setOperatorBrandOverride(JString arg0);
		jboolean setPreferredNetworkTypeToGlobal();
		void setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, JObject arg2, JObject arg3);
		void setSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0);
		void setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0);
		jboolean setVoiceMailNumber(JString arg0, JString arg1);
		void setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1);
		void setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1);
		void switchMultiSimConfig(jint arg0);
		void unregisterTelephonyCallback(android::telephony::TelephonyCallback arg0);
		void updateAvailableNetworks(JObject arg0, JObject arg1, JObject arg2);
		void uploadCallComposerPicture(java::io::InputStream arg0, JString arg1, JObject arg2, JObject arg3);
		void uploadCallComposerPicture(JObject arg0, JString arg1, JObject arg2, JObject arg3);
	};
} // namespace android::telephony

