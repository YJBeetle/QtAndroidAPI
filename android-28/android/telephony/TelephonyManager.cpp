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
#include "./TelephonyManager_UssdResponseCallback.hpp"
#include "./TelephonyScanManager_NetworkScanCallback.hpp"
#include "./VisualVoicemailSmsFilterSettings.hpp"
#include "./TelephonyManager.hpp"

namespace android::telephony
{
	// Fields
	jstring TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
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
	jint TelephonyManager::DATA_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED"
		);
	}
	jstring TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_IS_REFRESH()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_IDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_STATE_RINGING()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;"
		).object<jstring>();
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
	jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID"
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
	jstring TelephonyManager::VVM_TYPE_CVVM()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::VVM_TYPE_OMTP()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	TelephonyManager::TelephonyManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TelephonyManager::canChangeDtmfToneLength()
	{
		return callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z"
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
	__JniBaseClass TelephonyManager::getAllCellInfo()
	{
		return callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;"
		);
	}
	jint TelephonyManager::getCallState()
	{
		return callMethod<jint>(
			"getCallState",
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
	jstring TelephonyManager::getDeviceId()
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getDeviceId(jint arg0)
	{
		return callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getDeviceSoftwareVersion()
	{
		return callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray TelephonyManager::getForbiddenPlmns()
	{
		return callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring TelephonyManager::getGroupIdLevel1()
	{
		return callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getIccAuthentication(jint arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TelephonyManager::getImei()
	{
		return callObjectMethod(
			"getImei",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getImei(jint arg0)
	{
		return callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getLine1Number()
	{
		return callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getMeid()
	{
		return callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getMeid(jint arg0)
	{
		return callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TelephonyManager::getMmsUAProfUrl()
	{
		return callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getMmsUserAgent()
	{
		return callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNai()
	{
		return callObjectMethod(
			"getNai",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass TelephonyManager::getNeighboringCellInfo()
	{
		return callObjectMethod(
			"getNeighboringCellInfo",
			"()Ljava/util/List;"
		);
	}
	jstring TelephonyManager::getNetworkCountryIso()
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNetworkOperator()
	{
		return callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNetworkOperatorName()
	{
		return callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getNetworkSpecifier()
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TelephonyManager::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
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
	jstring TelephonyManager::getSimCarrierIdName()
	{
		return callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimCountryIso()
	{
		return callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimOperator()
	{
		return callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimOperatorName()
	{
		return callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getSimSerialNumber()
	{
		return callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring TelephonyManager::getSubscriberId()
	{
		return callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getVisualVoicemailPackageName()
	{
		return callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getVoiceMailAlphaTag()
	{
		return callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TelephonyManager::getVoiceMailNumber()
	{
		return callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jbyteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return callObjectMethod(
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
	android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(jstring arg0)
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0
		);
	}
	android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0,
			arg1
		);
	}
	jstring TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		return callObjectMethod(
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
	jstring TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
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
			arg6
		).object<jstring>();
	}
	jboolean TelephonyManager::isConcurrentVoiceAndDataSupported()
	{
		return callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
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
	jboolean TelephonyManager::isHearingAidCompatibilitySupported()
	{
		return callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z"
		);
	}
	jboolean TelephonyManager::isNetworkRoaming()
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
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
	android::telephony::NetworkScan TelephonyManager::requestNetworkScan(android::telephony::NetworkScanRequest arg0, __JniBaseClass arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2)
	{
		return callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void TelephonyManager::sendDialerSpecialCode(jstring arg0)
	{
		callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring TelephonyManager::sendEnvelopeWithStatus(jstring arg0)
	{
		return callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void TelephonyManager::sendUssdRequest(jstring arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void TelephonyManager::sendVisualVoicemailSms(jstring arg0, jint arg1, jstring arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
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
	jboolean TelephonyManager::setLine1NumberForDisplay(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	void TelephonyManager::setNetworkSelectionModeAutomatic()
	{
		callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V"
		);
	}
	jboolean TelephonyManager::setNetworkSelectionModeManual(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean TelephonyManager::setOperatorBrandOverride(jstring arg0)
	{
		return callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TelephonyManager::setPreferredNetworkTypeToGlobal()
	{
		return callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z"
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
	jboolean TelephonyManager::setVoiceMailNumber(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
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
} // namespace android::telephony

