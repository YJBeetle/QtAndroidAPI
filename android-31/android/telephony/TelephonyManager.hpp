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
		jboolean canChangeDtmfToneLength() const;
		void clearSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0) const;
		android::telephony::TelephonyManager createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0) const;
		android::telephony::TelephonyManager createForSubscriptionId(jint arg0) const;
		jboolean doesSwitchMultiSimConfigTriggerReboot() const;
		jint getActiveModemCount() const;
		JObject getAllCellInfo() const;
		jint getCallComposerStatus() const;
		jint getCallState() const;
		jint getCallStateForSubscription() const;
		jint getCardIdForDefaultEuicc() const;
		android::os::PersistableBundle getCarrierConfig() const;
		jint getCarrierIdFromSimMccMnc() const;
		android::telephony::CellLocation getCellLocation() const;
		jint getDataActivity() const;
		jint getDataNetworkType() const;
		jint getDataState() const;
		JString getDeviceId() const;
		JString getDeviceId(jint arg0) const;
		JString getDeviceSoftwareVersion() const;
		JObject getEmergencyNumberList() const;
		JObject getEmergencyNumberList(jint arg0) const;
		JObject getEquivalentHomePlmns() const;
		JArray getForbiddenPlmns() const;
		JString getGroupIdLevel1() const;
		JString getIccAuthentication(jint arg0, jint arg1, JString arg2) const;
		JString getImei() const;
		JString getImei(jint arg0) const;
		JString getLine1Number() const;
		JString getManualNetworkSelectionPlmn() const;
		JString getManufacturerCode() const;
		JString getManufacturerCode(jint arg0) const;
		JString getMeid() const;
		JString getMeid(jint arg0) const;
		JString getMmsUAProfUrl() const;
		JString getMmsUserAgent() const;
		JString getNai() const;
		JString getNetworkCountryIso() const;
		JString getNetworkCountryIso(jint arg0) const;
		JString getNetworkOperator() const;
		JString getNetworkOperatorName() const;
		jint getNetworkSelectionMode() const;
		void getNetworkSlicingConfiguration(JObject arg0, JObject arg1) const;
		JString getNetworkSpecifier() const;
		jint getNetworkType() const;
		android::telecom::PhoneAccountHandle getPhoneAccountHandle() const;
		jint getPhoneCount() const;
		jint getPhoneType() const;
		jint getPreferredOpportunisticDataSubscription() const;
		android::telephony::ServiceState getServiceState() const;
		android::telephony::SignalStrength getSignalStrength() const;
		jint getSimCarrierId() const;
		JString getSimCarrierIdName() const;
		JString getSimCountryIso() const;
		JString getSimOperator() const;
		JString getSimOperatorName() const;
		JString getSimSerialNumber() const;
		jint getSimSpecificCarrierId() const;
		JString getSimSpecificCarrierIdName() const;
		jint getSimState() const;
		jint getSimState(jint arg0) const;
		JString getSubscriberId() const;
		jint getSubscriptionId() const;
		jint getSubscriptionId(android::telecom::PhoneAccountHandle arg0) const;
		jint getSupportedModemCount() const;
		JString getTypeAllocationCode() const;
		JString getTypeAllocationCode(jint arg0) const;
		JObject getUiccCardsInfo() const;
		JString getVisualVoicemailPackageName() const;
		JString getVoiceMailAlphaTag() const;
		JString getVoiceMailNumber() const;
		jint getVoiceNetworkType() const;
		android::net::Uri getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0) const;
		jboolean hasCarrierPrivileges() const;
		jboolean hasIccCard() const;
		jboolean iccCloseLogicalChannel(jint arg0) const;
		JByteArray iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const;
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(JString arg0) const;
		android::telephony::IccOpenLogicalChannelResponse iccOpenLogicalChannel(JString arg0, jint arg1) const;
		JString iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const;
		JString iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JString arg6) const;
		jboolean isConcurrentVoiceAndDataSupported() const;
		jboolean isDataCapable() const;
		jboolean isDataConnectionAllowed() const;
		jboolean isDataEnabled() const;
		jboolean isDataEnabledForReason(jint arg0) const;
		jboolean isDataRoamingEnabled() const;
		jboolean isEmergencyNumber(JString arg0) const;
		jboolean isHearingAidCompatibilitySupported() const;
		jboolean isManualNetworkSelectionAllowed() const;
		jboolean isModemEnabledForSlot(jint arg0) const;
		jint isMultiSimSupported() const;
		jboolean isNetworkRoaming() const;
		jboolean isRadioInterfaceCapabilitySupported(JString arg0) const;
		jboolean isRttSupported() const;
		jboolean isSmsCapable() const;
		jboolean isTtyModeSupported() const;
		jboolean isVoiceCapable() const;
		jboolean isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0) const;
		jboolean isWorldPhone() const;
		void listen(android::telephony::PhoneStateListener arg0, jint arg1) const;
		void registerTelephonyCallback(JObject arg0, android::telephony::TelephonyCallback arg1) const;
		void requestCellInfoUpdate(JObject arg0, android::telephony::TelephonyManager_CellInfoCallback arg1) const;
		android::telephony::NetworkScan requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2) const;
		void sendDialerSpecialCode(JString arg0) const;
		JString sendEnvelopeWithStatus(JString arg0) const;
		void sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2) const;
		void sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3) const;
		void setCallComposerStatus(jint arg0) const;
		void setDataEnabled(jboolean arg0) const;
		void setDataEnabledForReason(jint arg0, jboolean arg1) const;
		jint setForbiddenPlmns(JObject arg0) const;
		jboolean setLine1NumberForDisplay(JString arg0, JString arg1) const;
		void setNetworkSelectionModeAutomatic() const;
		jboolean setNetworkSelectionModeManual(JString arg0, jboolean arg1) const;
		jboolean setNetworkSelectionModeManual(JString arg0, jboolean arg1, jint arg2) const;
		jboolean setOperatorBrandOverride(JString arg0) const;
		jboolean setPreferredNetworkTypeToGlobal() const;
		void setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, JObject arg2, JObject arg3) const;
		void setSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0) const;
		void setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0) const;
		jboolean setVoiceMailNumber(JString arg0, JString arg1) const;
		void setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1) const;
		void setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const;
		void switchMultiSimConfig(jint arg0) const;
		void unregisterTelephonyCallback(android::telephony::TelephonyCallback arg0) const;
		void updateAvailableNetworks(JObject arg0, JObject arg1, JObject arg2) const;
		void uploadCallComposerPicture(java::io::InputStream arg0, JString arg1, JObject arg2, JObject arg3) const;
		void uploadCallComposerPicture(JObject arg0, JString arg1, JObject arg2, JObject arg3) const;
	};
} // namespace android::telephony

