#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../app/PendingIntent.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "./CellLocation.hpp"
#include "./IccOpenLogicalChannelResponse.hpp"
#include "./NetworkScan.hpp"
#include "./NetworkScanRequest.hpp"
#include "./PhoneStateListener.hpp"
#include "./ServiceState.hpp"
#include "./SignalStrength.hpp"
#include "./SignalStrengthUpdateRequest.hpp"
#include "./TelephonyCallback.hpp"
#include "./TelephonyManager_CellInfoCallback.hpp"
#include "./TelephonyManager_UssdResponseCallback.hpp"
#include "./TelephonyScanManager_NetworkScanCallback.hpp"
#include "./VisualVoicemailSmsFilterSettings.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TelephonyManager.hpp"

namespace android::telephony
{
	// Fields
	JString TelephonyManager::ACTION_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CARRIER_SIGNAL_DEFAULT_NETWORK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_DEFAULT_NETWORK_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CARRIER_SIGNAL_PCO_VALUE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_PCO_VALUE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CARRIER_SIGNAL_REDIRECTED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_REDIRECTED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CARRIER_SIGNAL_REQUEST_NETWORK_FAILED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_REQUEST_NETWORK_FAILED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CARRIER_SIGNAL_RESET()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_RESET",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_MULTI_SIM_CONFIG_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_MULTI_SIM_CONFIG_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_NETWORK_COUNTRY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_NETWORK_COUNTRY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_SECRET_CODE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SECRET_CODE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint TelephonyManager::APPTYPE_CSIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_CSIM"
		);
	}
	jint TelephonyManager::APPTYPE_ISIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_ISIM"
		);
	}
	jint TelephonyManager::APPTYPE_RUIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_RUIM"
		);
	}
	jint TelephonyManager::APPTYPE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_SIM"
		);
	}
	jint TelephonyManager::APPTYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_UNKNOWN"
		);
	}
	jint TelephonyManager::APPTYPE_USIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_USIM"
		);
	}
	jint TelephonyManager::AUTHTYPE_EAP_AKA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_AKA"
		);
	}
	jint TelephonyManager::AUTHTYPE_EAP_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_SIM"
		);
	}
	jint TelephonyManager::CALL_COMPOSER_STATUS_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_COMPOSER_STATUS_OFF"
		);
	}
	jint TelephonyManager::CALL_COMPOSER_STATUS_ON()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_COMPOSER_STATUS_ON"
		);
	}
	jint TelephonyManager::CALL_STATE_IDLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_IDLE"
		);
	}
	jint TelephonyManager::CALL_STATE_OFFHOOK()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_OFFHOOK"
		);
	}
	jint TelephonyManager::CALL_STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_RINGING"
		);
	}
	JString TelephonyManager::CAPABILITY_SLICING_CONFIG_SUPPORTED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"CAPABILITY_SLICING_CONFIG_SUPPORTED",
			"Ljava/lang/String;"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_AFFILIATED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_AFFILIATED"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_ANY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_ANY"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_HOME()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_HOME"
		);
	}
	jint TelephonyManager::CDMA_ROAMING_MODE_RADIO_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_RADIO_DEFAULT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_DORMANT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_DORMANT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_IN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_IN"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_INOUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_INOUT"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_NONE"
		);
	}
	jint TelephonyManager::DATA_ACTIVITY_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_OUT"
		);
	}
	jint TelephonyManager::DATA_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTED"
		);
	}
	jint TelephonyManager::DATA_CONNECTING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTING"
		);
	}
	jint TelephonyManager::DATA_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTED"
		);
	}
	jint TelephonyManager::DATA_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTING"
		);
	}
	jint TelephonyManager::DATA_ENABLED_REASON_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_CARRIER"
		);
	}
	jint TelephonyManager::DATA_ENABLED_REASON_POLICY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_POLICY"
		);
	}
	jint TelephonyManager::DATA_ENABLED_REASON_THERMAL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_THERMAL"
		);
	}
	jint TelephonyManager::DATA_ENABLED_REASON_USER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_USER"
		);
	}
	jint TelephonyManager::DATA_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED"
		);
	}
	jint TelephonyManager::DATA_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_UNKNOWN"
		);
	}
	jint TelephonyManager::ERI_FLASH()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_FLASH"
		);
	}
	jint TelephonyManager::ERI_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_OFF"
		);
	}
	jint TelephonyManager::ERI_ON()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_ON"
		);
	}
	JString TelephonyManager::EXTRA_ACTIVE_SIM_SUPPORTED_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_ACTIVE_SIM_SUPPORTED_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_APN_PROTOCOL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_APN_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_APN_TYPE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_APN_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_DATA_FAIL_CAUSE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_DATA_FAIL_CAUSE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_DEFAULT_NETWORK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_DEFAULT_NETWORK_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_IS_REFRESH()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_NETWORK_COUNTRY()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NETWORK_COUNTRY",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_PCO_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PCO_ID",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_PCO_VALUE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PCO_VALUE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_REDIRECTION_URL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_REDIRECTION_URL",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_SPECIFIC_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_SPECIFIC_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_STATE_IDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_STATE_RINGING()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;"
		);
	}
	jint TelephonyManager::MULTISIM_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_ALLOWED"
		);
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_CARRIER"
		);
	}
	jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_HARDWARE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_HARDWARE"
		);
	}
	jint TelephonyManager::NETWORK_SELECTION_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_AUTO"
		);
	}
	jint TelephonyManager::NETWORK_SELECTION_MODE_MANUAL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_MANUAL"
		);
	}
	jint TelephonyManager::NETWORK_SELECTION_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_UNKNOWN"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_1xRTT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_1xRTT"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_CDMA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EDGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EDGE"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EHRPD()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EHRPD"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_0()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_0"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_A()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_A"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_EVDO_B()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_B"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_GPRS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GPRS"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GSM"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSDPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSDPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSPAP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPAP"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_HSUPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSUPA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_IDEN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IDEN"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IWLAN"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_LTE"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_NR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_NR"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_TD_SCDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_TD_SCDMA"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_UMTS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UMTS"
		);
	}
	jint TelephonyManager::NETWORK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	jint TelephonyManager::PHONE_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_CDMA"
		);
	}
	jint TelephonyManager::PHONE_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_GSM"
		);
	}
	jint TelephonyManager::PHONE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_NONE"
		);
	}
	jint TelephonyManager::PHONE_TYPE_SIP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_SIP"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_NO_OPPORTUNISTIC_SUB_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_NO_OPPORTUNISTIC_SUB_AVAILABLE"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_REMOTE_SERVICE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_REMOTE_SERVICE_EXCEPTION"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_SUCCESS"
		);
	}
	jint TelephonyManager::SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED"
		);
	}
	jint TelephonyManager::SIM_STATE_ABSENT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_ABSENT"
		);
	}
	jint TelephonyManager::SIM_STATE_CARD_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_IO_ERROR"
		);
	}
	jint TelephonyManager::SIM_STATE_CARD_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_RESTRICTED"
		);
	}
	jint TelephonyManager::SIM_STATE_NETWORK_LOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NETWORK_LOCKED"
		);
	}
	jint TelephonyManager::SIM_STATE_NOT_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NOT_READY"
		);
	}
	jint TelephonyManager::SIM_STATE_PERM_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PERM_DISABLED"
		);
	}
	jint TelephonyManager::SIM_STATE_PIN_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PIN_REQUIRED"
		);
	}
	jint TelephonyManager::SIM_STATE_PUK_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PUK_REQUIRED"
		);
	}
	jint TelephonyManager::SIM_STATE_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_READY"
		);
	}
	jint TelephonyManager::SIM_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_UNKNOWN"
		);
	}
	jint TelephonyManager::UNINITIALIZED_CARD_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNINITIALIZED_CARD_ID"
		);
	}
	jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID"
		);
	}
	jint TelephonyManager::UNSUPPORTED_CARD_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNSUPPORTED_CARD_ID"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ABORTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ABORTED"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_DISABLE_MODEM_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_DISABLE_MODEM_FAIL"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ENABLE_MODEM_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ENABLE_MODEM_FAIL"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_MULTIPLE_NETWORKS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_MULTIPLE_NETWORKS_NOT_SUPPORTED"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_OPPORTUNISTIC_SUB_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_OPPORTUNISTIC_SUB_AVAILABLE"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_REMOTE_SERVICE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_REMOTE_SERVICE_EXCEPTION"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SERVICE_IS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SERVICE_IS_DISABLED"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SUCCESS"
		);
	}
	jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE"
		);
	}
	jint TelephonyManager::USSD_ERROR_SERVICE_UNAVAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_ERROR_SERVICE_UNAVAIL"
		);
	}
	jint TelephonyManager::USSD_RETURN_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_RETURN_FAILURE"
		);
	}
	JString TelephonyManager::VVM_TYPE_CVVM()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;"
		);
	}
	JString TelephonyManager::VVM_TYPE_OMTP()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	TelephonyManager::TelephonyManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong TelephonyManager::getMaximumCallComposerPictureSize()
	{
		return callStaticMethod<jlong>(
			"android.telephony.TelephonyManager",
			"getMaximumCallComposerPictureSize",
			"()J"
		);
	}
	jboolean TelephonyManager::canChangeDtmfToneLength()
	{
		return callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z"
		);
	}
	void TelephonyManager::clearSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0)
	{
		callMethod<void>(
			"clearSignalStrengthUpdateRequest",
			"(Landroid/telephony/SignalStrengthUpdateRequest;)V",
			arg0.object()
		);
	}
	android::telephony::TelephonyManager TelephonyManager::createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"createForPhoneAccountHandle",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telephony/TelephonyManager;",
			arg0.object()
		);
	}
	android::telephony::TelephonyManager TelephonyManager::createForSubscriptionId(jint arg0)
	{
		return callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/TelephonyManager;",
			arg0
		);
	}
	jboolean TelephonyManager::doesSwitchMultiSimConfigTriggerReboot()
	{
		return callMethod<jboolean>(
			"doesSwitchMultiSimConfigTriggerReboot",
			"()Z"
		);
	}
	jint TelephonyManager::getActiveModemCount()
	{
		return callMethod<jint>(
			"getActiveModemCount",
			"()I"
		);
	}
	JObject TelephonyManager::getAllCellInfo()
	{
		return callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;"
		);
	}
	jint TelephonyManager::getCallComposerStatus()
	{
		return callMethod<jint>(
			"getCallComposerStatus",
			"()I"
		);
	}
	jint TelephonyManager::getCallState()
	{
		return callMethod<jint>(
			"getCallState",
			"()I"
		);
	}
	jint TelephonyManager::getCallStateForSubscription()
	{
		return callMethod<jint>(
			"getCallStateForSubscription",
			"()I"
		);
	}
	jint TelephonyManager::getCardIdForDefaultEuicc()
	{
		return callMethod<jint>(
			"getCardIdForDefaultEuicc",
			"()I"
		);
	}
	android::os::PersistableBundle TelephonyManager::getCarrierConfig()
	{
		return callObjectMethod(
			"getCarrierConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint TelephonyManager::getCarrierIdFromSimMccMnc()
	{
		return callMethod<jint>(
			"getCarrierIdFromSimMccMnc",
			"()I"
		);
	}
	android::telephony::CellLocation TelephonyManager::getCellLocation()
	{
		return callObjectMethod(
			"getCellLocation",
			"()Landroid/telephony/CellLocation;"
		);
	}
	jint TelephonyManager::getDataActivity()
	{
		return callMethod<jint>(
			"getDataActivity",
			"()I"
		);
	}
	jint TelephonyManager::getDataNetworkType()
	{
		return callMethod<jint>(
			"getDataNetworkType",
			"()I"
		);
	}
	jint TelephonyManager::getDataState()
	{
		return callMethod<jint>(
			"getDataState",
			"()I"
		);
	}
	JString TelephonyManager::getDeviceId()
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getDeviceId(jint arg0)
	{
		return callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TelephonyManager::getDeviceSoftwareVersion()
	{
		return callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;"
		);
	}
	JObject TelephonyManager::getEmergencyNumberList()
	{
		return callObjectMethod(
			"getEmergencyNumberList",
			"()Ljava/util/Map;"
		);
	}
	JObject TelephonyManager::getEmergencyNumberList(jint arg0)
	{
		return callObjectMethod(
			"getEmergencyNumberList",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	JObject TelephonyManager::getEquivalentHomePlmns()
	{
		return callObjectMethod(
			"getEquivalentHomePlmns",
			"()Ljava/util/List;"
		);
	}
	JArray TelephonyManager::getForbiddenPlmns()
	{
		return callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getGroupIdLevel1()
	{
		return callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getIccAuthentication(jint arg0, jint arg1, JString arg2)
	{
		return callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	JString TelephonyManager::getImei()
	{
		return callObjectMethod(
			"getImei",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getImei(jint arg0)
	{
		return callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TelephonyManager::getLine1Number()
	{
		return callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getManualNetworkSelectionPlmn()
	{
		return callObjectMethod(
			"getManualNetworkSelectionPlmn",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getManufacturerCode()
	{
		return callObjectMethod(
			"getManufacturerCode",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getManufacturerCode(jint arg0)
	{
		return callObjectMethod(
			"getManufacturerCode",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TelephonyManager::getMeid()
	{
		return callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getMeid(jint arg0)
	{
		return callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TelephonyManager::getMmsUAProfUrl()
	{
		return callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getMmsUserAgent()
	{
		return callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getNai()
	{
		return callObjectMethod(
			"getNai",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getNetworkCountryIso()
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getNetworkCountryIso(jint arg0)
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TelephonyManager::getNetworkOperator()
	{
		return callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getNetworkOperatorName()
	{
		return callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;"
		);
	}
	jint TelephonyManager::getNetworkSelectionMode()
	{
		return callMethod<jint>(
			"getNetworkSelectionMode",
			"()I"
		);
	}
	void TelephonyManager::getNetworkSlicingConfiguration(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"getNetworkSlicingConfiguration",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JString TelephonyManager::getNetworkSpecifier()
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;"
		);
	}
	jint TelephonyManager::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	android::telecom::PhoneAccountHandle TelephonyManager::getPhoneAccountHandle()
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint TelephonyManager::getPhoneCount()
	{
		return callMethod<jint>(
			"getPhoneCount",
			"()I"
		);
	}
	jint TelephonyManager::getPhoneType()
	{
		return callMethod<jint>(
			"getPhoneType",
			"()I"
		);
	}
	jint TelephonyManager::getPreferredOpportunisticDataSubscription()
	{
		return callMethod<jint>(
			"getPreferredOpportunisticDataSubscription",
			"()I"
		);
	}
	android::telephony::ServiceState TelephonyManager::getServiceState()
	{
		return callObjectMethod(
			"getServiceState",
			"()Landroid/telephony/ServiceState;"
		);
	}
	android::telephony::SignalStrength TelephonyManager::getSignalStrength()
	{
		return callObjectMethod(
			"getSignalStrength",
			"()Landroid/telephony/SignalStrength;"
		);
	}
	jint TelephonyManager::getSimCarrierId()
	{
		return callMethod<jint>(
			"getSimCarrierId",
			"()I"
		);
	}
	JString TelephonyManager::getSimCarrierIdName()
	{
		return callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString TelephonyManager::getSimCountryIso()
	{
		return callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getSimOperator()
	{
		return callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getSimOperatorName()
	{
		return callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getSimSerialNumber()
	{
		return callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	jint TelephonyManager::getSimSpecificCarrierId()
	{
		return callMethod<jint>(
			"getSimSpecificCarrierId",
			"()I"
		);
	}
	JString TelephonyManager::getSimSpecificCarrierIdName()
	{
		return callObjectMethod(
			"getSimSpecificCarrierIdName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TelephonyManager::getSimState()
	{
		return callMethod<jint>(
			"getSimState",
			"()I"
		);
	}
	jint TelephonyManager::getSimState(jint arg0)
	{
		return callMethod<jint>(
			"getSimState",
			"(I)I",
			arg0
		);
	}
	JString TelephonyManager::getSubscriberId()
	{
		return callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;"
		);
	}
	jint TelephonyManager::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint TelephonyManager::getSubscriptionId(android::telecom::PhoneAccountHandle arg0)
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"(Landroid/telecom/PhoneAccountHandle;)I",
			arg0.object()
		);
	}
	jint TelephonyManager::getSupportedModemCount()
	{
		return callMethod<jint>(
			"getSupportedModemCount",
			"()I"
		);
	}
	JString TelephonyManager::getTypeAllocationCode()
	{
		return callObjectMethod(
			"getTypeAllocationCode",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getTypeAllocationCode(jint arg0)
	{
		return callObjectMethod(
			"getTypeAllocationCode",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JObject TelephonyManager::getUiccCardsInfo()
	{
		return callObjectMethod(
			"getUiccCardsInfo",
			"()Ljava/util/List;"
		);
	}
	JString TelephonyManager::getVisualVoicemailPackageName()
	{
		return callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getVoiceMailAlphaTag()
	{
		return callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;"
		);
	}
	JString TelephonyManager::getVoiceMailNumber()
	{
		return callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;"
		);
	}
	jint TelephonyManager::getVoiceNetworkType()
	{
		return callMethod<jint>(
			"getVoiceNetworkType",
			"()I"
		);
	}
	android::net::Uri TelephonyManager::getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0)
	{
		return callObjectMethod(
			"getVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jboolean TelephonyManager::hasCarrierPrivileges()
	{
		return callMethod<jboolean>(
			"hasCarrierPrivileges",
			"()Z"
		);
	}
	jboolean TelephonyManager::hasIccCard()
	{
		return callMethod<jboolean>(
			"hasIccCard",
			"()Z"
		);
	}
	jboolean TelephonyManager::iccCloseLogicalChannel(jint arg0)
	{
		return callMethod<jboolean>(
			"iccCloseLogicalChannel",
			"(I)Z",
			arg0
		);
	}
	JByteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5)
	{
		return callObjectMethod(
			"iccExchangeSimIO",
			"(IIIIILjava/lang/String;)[B",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		);
	}
	android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0)
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>()
		);
	}
	android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5)
	{
		return callObjectMethod(
			"iccTransmitApduBasicChannel",
			"(IIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		);
	}
	JString TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JString arg6)
	{
		return callObjectMethod(
			"iccTransmitApduLogicalChannel",
			"(IIIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jstring>()
		);
	}
	jboolean TelephonyManager::isConcurrentVoiceAndDataSupported()
	{
		return callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isDataCapable()
	{
		return callMethod<jboolean>(
			"isDataCapable",
			"()Z"
		);
	}
	jboolean TelephonyManager::isDataConnectionAllowed()
	{
		return callMethod<jboolean>(
			"isDataConnectionAllowed",
			"()Z"
		);
	}
	jboolean TelephonyManager::isDataEnabled()
	{
		return callMethod<jboolean>(
			"isDataEnabled",
			"()Z"
		);
	}
	jboolean TelephonyManager::isDataEnabledForReason(jint arg0)
	{
		return callMethod<jboolean>(
			"isDataEnabledForReason",
			"(I)Z",
			arg0
		);
	}
	jboolean TelephonyManager::isDataRoamingEnabled()
	{
		return callMethod<jboolean>(
			"isDataRoamingEnabled",
			"()Z"
		);
	}
	jboolean TelephonyManager::isEmergencyNumber(JString arg0)
	{
		return callMethod<jboolean>(
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean TelephonyManager::isHearingAidCompatibilitySupported()
	{
		return callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isManualNetworkSelectionAllowed()
	{
		return callMethod<jboolean>(
			"isManualNetworkSelectionAllowed",
			"()Z"
		);
	}
	jboolean TelephonyManager::isModemEnabledForSlot(jint arg0)
	{
		return callMethod<jboolean>(
			"isModemEnabledForSlot",
			"(I)Z",
			arg0
		);
	}
	jint TelephonyManager::isMultiSimSupported()
	{
		return callMethod<jint>(
			"isMultiSimSupported",
			"()I"
		);
	}
	jboolean TelephonyManager::isNetworkRoaming()
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"()Z"
		);
	}
	jboolean TelephonyManager::isRadioInterfaceCapabilitySupported(JString arg0)
	{
		return callMethod<jboolean>(
			"isRadioInterfaceCapabilitySupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean TelephonyManager::isRttSupported()
	{
		return callMethod<jboolean>(
			"isRttSupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isSmsCapable()
	{
		return callMethod<jboolean>(
			"isSmsCapable",
			"()Z"
		);
	}
	jboolean TelephonyManager::isTtyModeSupported()
	{
		return callMethod<jboolean>(
			"isTtyModeSupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isVoiceCapable()
	{
		return callMethod<jboolean>(
			"isVoiceCapable",
			"()Z"
		);
	}
	jboolean TelephonyManager::isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0)
	{
		return callMethod<jboolean>(
			"isVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.object()
		);
	}
	jboolean TelephonyManager::isWorldPhone()
	{
		return callMethod<jboolean>(
			"isWorldPhone",
			"()Z"
		);
	}
	void TelephonyManager::listen(android::telephony::PhoneStateListener arg0, jint arg1)
	{
		callMethod<void>(
			"listen",
			"(Landroid/telephony/PhoneStateListener;I)V",
			arg0.object(),
			arg1
		);
	}
	void TelephonyManager::registerTelephonyCallback(JObject arg0, android::telephony::TelephonyCallback arg1)
	{
		callMethod<void>(
			"registerTelephonyCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelephonyManager::requestCellInfoUpdate(JObject arg0, android::telephony::TelephonyManager_CellInfoCallback arg1)
	{
		callMethod<void>(
			"requestCellInfoUpdate",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyManager$CellInfoCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telephony::NetworkScan TelephonyManager::requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2)
	{
		return callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void TelephonyManager::sendDialerSpecialCode(JString arg0)
	{
		callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString TelephonyManager::sendEnvelopeWithStatus(JString arg0)
	{
		return callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	void TelephonyManager::sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void TelephonyManager::sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void TelephonyManager::setCallComposerStatus(jint arg0)
	{
		callMethod<void>(
			"setCallComposerStatus",
			"(I)V",
			arg0
		);
	}
	void TelephonyManager::setDataEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDataEnabled",
			"(Z)V",
			arg0
		);
	}
	void TelephonyManager::setDataEnabledForReason(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setDataEnabledForReason",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	jint TelephonyManager::setForbiddenPlmns(JObject arg0)
	{
		return callMethod<jint>(
			"setForbiddenPlmns",
			"(Ljava/util/List;)I",
			arg0.object()
		);
	}
	jboolean TelephonyManager::setLine1NumberForDisplay(JString arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void TelephonyManager::setNetworkSelectionModeAutomatic()
	{
		callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V"
		);
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(JString arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(JString arg0, jboolean arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;ZI)Z",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	jboolean TelephonyManager::setOperatorBrandOverride(JString arg0)
	{
		return callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean TelephonyManager::setPreferredNetworkTypeToGlobal()
	{
		return callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z"
		);
	}
	void TelephonyManager::setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, JObject arg2, JObject arg3)
	{
		callMethod<void>(
			"setPreferredOpportunisticDataSubscription",
			"(IZLjava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void TelephonyManager::setSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0)
	{
		callMethod<void>(
			"setSignalStrengthUpdateRequest",
			"(Landroid/telephony/SignalStrengthUpdateRequest;)V",
			arg0.object()
		);
	}
	void TelephonyManager::setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0)
	{
		callMethod<void>(
			"setVisualVoicemailSmsFilterSettings",
			"(Landroid/telephony/VisualVoicemailSmsFilterSettings;)V",
			arg0.object()
		);
	}
	jboolean TelephonyManager::setVoiceMailNumber(JString arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void TelephonyManager::setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TelephonyManager::setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		callMethod<void>(
			"setVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
	void TelephonyManager::switchMultiSimConfig(jint arg0)
	{
		callMethod<void>(
			"switchMultiSimConfig",
			"(I)V",
			arg0
		);
	}
	void TelephonyManager::unregisterTelephonyCallback(android::telephony::TelephonyCallback arg0)
	{
		callMethod<void>(
			"unregisterTelephonyCallback",
			"(Landroid/telephony/TelephonyCallback;)V",
			arg0.object()
		);
	}
	void TelephonyManager::updateAvailableNetworks(JObject arg0, JObject arg1, JObject arg2)
	{
		callMethod<void>(
			"updateAvailableNetworks",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void TelephonyManager::uploadCallComposerPicture(java::io::InputStream arg0, JString arg1, JObject arg2, JObject arg3)
	{
		callMethod<void>(
			"uploadCallComposerPicture",
			"(Ljava/io/InputStream;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	void TelephonyManager::uploadCallComposerPicture(JObject arg0, JString arg1, JObject arg2, JObject arg3)
	{
		callMethod<void>(
			"uploadCallComposerPicture",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::telephony

