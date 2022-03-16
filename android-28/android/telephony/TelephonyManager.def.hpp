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
class JString;
class JString;

namespace android::telephony
{
	class TelephonyManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_CONFIGURE_VOICEMAIL();
		static JString ACTION_PHONE_STATE_CHANGED();
		static JString ACTION_RESPOND_VIA_MESSAGE();
		static JString ACTION_SHOW_VOICEMAIL_NOTIFICATION();
		static JString ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED();
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
		static JString EXTRA_CALL_VOICEMAIL_INTENT();
		static JString EXTRA_CARRIER_ID();
		static JString EXTRA_CARRIER_NAME();
		static JString EXTRA_HIDE_PUBLIC_SETTINGS();
		static JString EXTRA_INCOMING_NUMBER();
		static JString EXTRA_IS_REFRESH();
		static JString EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT();
		static JString EXTRA_NOTIFICATION_COUNT();
		static JString EXTRA_PHONE_ACCOUNT_HANDLE();
		static JString EXTRA_STATE();
		static JString EXTRA_STATE_IDLE();
		static JString EXTRA_STATE_OFFHOOK();
		static JString EXTRA_STATE_RINGING();
		static JString EXTRA_SUBSCRIPTION_ID();
		static JString EXTRA_VOICEMAIL_NUMBER();
		static JString METADATA_HIDE_VOICEMAIL_SETTINGS_MENU();
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
		static jint NETWORK_TYPE_TD_SCDMA();
		static jint NETWORK_TYPE_UMTS();
		static jint NETWORK_TYPE_UNKNOWN();
		static jint PHONE_TYPE_CDMA();
		static jint PHONE_TYPE_GSM();
		static jint PHONE_TYPE_NONE();
		static jint PHONE_TYPE_SIP();
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
		static jint UNKNOWN_CARRIER_ID();
		static jint USSD_ERROR_SERVICE_UNAVAIL();
		static jint USSD_RETURN_FAILURE();
		static JString VVM_TYPE_CVVM();
		static JString VVM_TYPE_OMTP();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean canChangeDtmfToneLength() const;
		android::telephony::TelephonyManager createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0) const;
		android::telephony::TelephonyManager createForSubscriptionId(jint arg0) const;
		JObject getAllCellInfo() const;
		jint getCallState() const;
		android::os::PersistableBundle getCarrierConfig() const;
		android::telephony::CellLocation getCellLocation() const;
		jint getDataActivity() const;
		jint getDataNetworkType() const;
		jint getDataState() const;
		JString getDeviceId() const;
		JString getDeviceId(jint arg0) const;
		JString getDeviceSoftwareVersion() const;
		JArray getForbiddenPlmns() const;
		JString getGroupIdLevel1() const;
		JString getIccAuthentication(jint arg0, jint arg1, JString arg2) const;
		JString getImei() const;
		JString getImei(jint arg0) const;
		JString getLine1Number() const;
		JString getMeid() const;
		JString getMeid(jint arg0) const;
		JString getMmsUAProfUrl() const;
		JString getMmsUserAgent() const;
		JString getNai() const;
		JObject getNeighboringCellInfo() const;
		JString getNetworkCountryIso() const;
		JString getNetworkOperator() const;
		JString getNetworkOperatorName() const;
		JString getNetworkSpecifier() const;
		jint getNetworkType() const;
		jint getPhoneCount() const;
		jint getPhoneType() const;
		android::telephony::ServiceState getServiceState() const;
		android::telephony::SignalStrength getSignalStrength() const;
		jint getSimCarrierId() const;
		JString getSimCarrierIdName() const;
		JString getSimCountryIso() const;
		JString getSimOperator() const;
		JString getSimOperatorName() const;
		JString getSimSerialNumber() const;
		jint getSimState() const;
		jint getSimState(jint arg0) const;
		JString getSubscriberId() const;
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
		jboolean isDataEnabled() const;
		jboolean isHearingAidCompatibilitySupported() const;
		jboolean isNetworkRoaming() const;
		jboolean isSmsCapable() const;
		jboolean isTtyModeSupported() const;
		jboolean isVoiceCapable() const;
		jboolean isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0) const;
		jboolean isWorldPhone() const;
		void listen(android::telephony::PhoneStateListener arg0, jint arg1) const;
		android::telephony::NetworkScan requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2) const;
		void sendDialerSpecialCode(JString arg0) const;
		JString sendEnvelopeWithStatus(JString arg0) const;
		void sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2) const;
		void sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3) const;
		void setDataEnabled(jboolean arg0) const;
		jboolean setLine1NumberForDisplay(JString arg0, JString arg1) const;
		void setNetworkSelectionModeAutomatic() const;
		jboolean setNetworkSelectionModeManual(JString arg0, jboolean arg1) const;
		jboolean setOperatorBrandOverride(JString arg0) const;
		jboolean setPreferredNetworkTypeToGlobal() const;
		void setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0) const;
		jboolean setVoiceMailNumber(JString arg0, JString arg1) const;
		void setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1) const;
		void setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const;
	};
} // namespace android::telephony

