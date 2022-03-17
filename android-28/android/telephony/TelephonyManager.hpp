#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../telecom/PhoneAccountHandle.def.hpp"
#include "./CellLocation.def.hpp"
#include "./IccOpenLogicalChannelResponse.def.hpp"
#include "./NetworkScan.def.hpp"
#include "./NetworkScanRequest.def.hpp"
#include "./PhoneStateListener.def.hpp"
#include "./ServiceState.def.hpp"
#include "./SignalStrength.def.hpp"
#include "./TelephonyManager_UssdResponseCallback.def.hpp"
#include "./TelephonyScanManager_NetworkScanCallback.def.hpp"
#include "./VisualVoicemailSmsFilterSettings.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TelephonyManager.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::APPTYPE_CSIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_CSIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_ISIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_ISIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_RUIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_RUIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_SIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_USIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_USIM"
		);
	}
	inline jint TelephonyManager::AUTHTYPE_EAP_AKA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_AKA"
		);
	}
	inline jint TelephonyManager::AUTHTYPE_EAP_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_SIM"
		);
	}
	inline jint TelephonyManager::CALL_STATE_IDLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_IDLE"
		);
	}
	inline jint TelephonyManager::CALL_STATE_OFFHOOK()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_OFFHOOK"
		);
	}
	inline jint TelephonyManager::CALL_STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_RINGING"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_AFFILIATED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_AFFILIATED"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_ANY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_ANY"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_HOME()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_HOME"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_RADIO_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_RADIO_DEFAULT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_DORMANT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_DORMANT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_IN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_IN"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_INOUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_INOUT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_NONE"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_OUT"
		);
	}
	inline jint TelephonyManager::DATA_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTED"
		);
	}
	inline jint TelephonyManager::DATA_CONNECTING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTING"
		);
	}
	inline jint TelephonyManager::DATA_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTED"
		);
	}
	inline jint TelephonyManager::DATA_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED"
		);
	}
	inline JString TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_IS_REFRESH()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_IDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_RINGING()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_1xRTT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_1xRTT"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_CDMA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EDGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EDGE"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EHRPD()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EHRPD"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_0()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_0"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_A()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_A"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_B()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_B"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_GPRS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GPRS"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GSM"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSDPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSDPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSPAP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPAP"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSUPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSUPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_IDEN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IDEN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IWLAN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_LTE"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_TD_SCDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_TD_SCDMA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_UMTS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UMTS"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_CDMA"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_GSM"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_NONE"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_SIP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_SIP"
		);
	}
	inline jint TelephonyManager::SIM_STATE_ABSENT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_ABSENT"
		);
	}
	inline jint TelephonyManager::SIM_STATE_CARD_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_IO_ERROR"
		);
	}
	inline jint TelephonyManager::SIM_STATE_CARD_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_RESTRICTED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_NETWORK_LOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NETWORK_LOCKED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_NOT_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NOT_READY"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PERM_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PERM_DISABLED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PIN_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PIN_REQUIRED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PUK_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PUK_REQUIRED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_READY"
		);
	}
	inline jint TelephonyManager::SIM_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID"
		);
	}
	inline jint TelephonyManager::USSD_ERROR_SERVICE_UNAVAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_ERROR_SERVICE_UNAVAIL"
		);
	}
	inline jint TelephonyManager::USSD_RETURN_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_RETURN_FAILURE"
		);
	}
	inline JString TelephonyManager::VVM_TYPE_CVVM()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::VVM_TYPE_OMTP()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TelephonyManager::canChangeDtmfToneLength() const
	{
		return callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z"
		);
	}
	inline android::telephony::TelephonyManager TelephonyManager::createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0) const
	{
		return callObjectMethod(
			"createForPhoneAccountHandle",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telephony/TelephonyManager;",
			arg0.object()
		);
	}
	inline android::telephony::TelephonyManager TelephonyManager::createForSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/TelephonyManager;",
			arg0
		);
	}
	inline JObject TelephonyManager::getAllCellInfo() const
	{
		return callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;"
		);
	}
	inline jint TelephonyManager::getCallState() const
	{
		return callMethod<jint>(
			"getCallState",
			"()I"
		);
	}
	inline android::os::PersistableBundle TelephonyManager::getCarrierConfig() const
	{
		return callObjectMethod(
			"getCarrierConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::telephony::CellLocation TelephonyManager::getCellLocation() const
	{
		return callObjectMethod(
			"getCellLocation",
			"()Landroid/telephony/CellLocation;"
		);
	}
	inline jint TelephonyManager::getDataActivity() const
	{
		return callMethod<jint>(
			"getDataActivity",
			"()I"
		);
	}
	inline jint TelephonyManager::getDataNetworkType() const
	{
		return callMethod<jint>(
			"getDataNetworkType",
			"()I"
		);
	}
	inline jint TelephonyManager::getDataState() const
	{
		return callMethod<jint>(
			"getDataState",
			"()I"
		);
	}
	inline JString TelephonyManager::getDeviceId() const
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getDeviceId(jint arg0) const
	{
		return callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getDeviceSoftwareVersion() const
	{
		return callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JArray TelephonyManager::getForbiddenPlmns() const
	{
		return callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getGroupIdLevel1() const
	{
		return callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getIccAuthentication(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline JString TelephonyManager::getImei() const
	{
		return callObjectMethod(
			"getImei",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getImei(jint arg0) const
	{
		return callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getLine1Number() const
	{
		return callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getMeid() const
	{
		return callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getMeid(jint arg0) const
	{
		return callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getMmsUAProfUrl() const
	{
		return callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getMmsUserAgent() const
	{
		return callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNai() const
	{
		return callObjectMethod(
			"getNai",
			"()Ljava/lang/String;"
		);
	}
	inline JObject TelephonyManager::getNeighboringCellInfo() const
	{
		return callObjectMethod(
			"getNeighboringCellInfo",
			"()Ljava/util/List;"
		);
	}
	inline JString TelephonyManager::getNetworkCountryIso() const
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkOperator() const
	{
		return callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkOperatorName() const
	{
		return callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkSpecifier() const
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint TelephonyManager::getPhoneCount() const
	{
		return callMethod<jint>(
			"getPhoneCount",
			"()I"
		);
	}
	inline jint TelephonyManager::getPhoneType() const
	{
		return callMethod<jint>(
			"getPhoneType",
			"()I"
		);
	}
	inline android::telephony::ServiceState TelephonyManager::getServiceState() const
	{
		return callObjectMethod(
			"getServiceState",
			"()Landroid/telephony/ServiceState;"
		);
	}
	inline android::telephony::SignalStrength TelephonyManager::getSignalStrength() const
	{
		return callObjectMethod(
			"getSignalStrength",
			"()Landroid/telephony/SignalStrength;"
		);
	}
	inline jint TelephonyManager::getSimCarrierId() const
	{
		return callMethod<jint>(
			"getSimCarrierId",
			"()I"
		);
	}
	inline JString TelephonyManager::getSimCarrierIdName() const
	{
		return callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TelephonyManager::getSimCountryIso() const
	{
		return callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimOperator() const
	{
		return callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimOperatorName() const
	{
		return callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimSerialNumber() const
	{
		return callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getSimState() const
	{
		return callMethod<jint>(
			"getSimState",
			"()I"
		);
	}
	inline jint TelephonyManager::getSimState(jint arg0) const
	{
		return callMethod<jint>(
			"getSimState",
			"(I)I",
			arg0
		);
	}
	inline JString TelephonyManager::getSubscriberId() const
	{
		return callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getVisualVoicemailPackageName() const
	{
		return callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getVoiceMailAlphaTag() const
	{
		return callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getVoiceMailNumber() const
	{
		return callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getVoiceNetworkType() const
	{
		return callMethod<jint>(
			"getVoiceNetworkType",
			"()I"
		);
	}
	inline android::net::Uri TelephonyManager::getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0) const
	{
		return callObjectMethod(
			"getVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::hasCarrierPrivileges() const
	{
		return callMethod<jboolean>(
			"hasCarrierPrivileges",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::hasIccCard() const
	{
		return callMethod<jboolean>(
			"hasIccCard",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::iccCloseLogicalChannel(jint arg0) const
	{
		return callMethod<jboolean>(
			"iccCloseLogicalChannel",
			"(I)Z",
			arg0
		);
	}
	inline JByteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const
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
	inline android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0) const
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const
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
	inline JString TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JString arg6) const
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
	inline jboolean TelephonyManager::isConcurrentVoiceAndDataSupported() const
	{
		return callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isDataEnabled() const
	{
		return callMethod<jboolean>(
			"isDataEnabled",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isHearingAidCompatibilitySupported() const
	{
		return callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isNetworkRoaming() const
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isSmsCapable() const
	{
		return callMethod<jboolean>(
			"isSmsCapable",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isTtyModeSupported() const
	{
		return callMethod<jboolean>(
			"isTtyModeSupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isVoiceCapable() const
	{
		return callMethod<jboolean>(
			"isVoiceCapable",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0) const
	{
		return callMethod<jboolean>(
			"isVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::isWorldPhone() const
	{
		return callMethod<jboolean>(
			"isWorldPhone",
			"()Z"
		);
	}
	inline void TelephonyManager::listen(android::telephony::PhoneStateListener arg0, jint arg1) const
	{
		callMethod<void>(
			"listen",
			"(Landroid/telephony/PhoneStateListener;I)V",
			arg0.object(),
			arg1
		);
	}
	inline android::telephony::NetworkScan TelephonyManager::requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2) const
	{
		return callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TelephonyManager::sendDialerSpecialCode(JString arg0) const
	{
		callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString TelephonyManager::sendEnvelopeWithStatus(JString arg0) const
	{
		return callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline void TelephonyManager::sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TelephonyManager::sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3) const
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
	inline void TelephonyManager::setDataEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDataEnabled",
			"(Z)V",
			arg0
		);
	}
	inline jboolean TelephonyManager::setLine1NumberForDisplay(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TelephonyManager::setNetworkSelectionModeAutomatic() const
	{
		callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V"
		);
	}
	inline jboolean TelephonyManager::setNetworkSelectionModeManual(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean TelephonyManager::setOperatorBrandOverride(JString arg0) const
	{
		return callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TelephonyManager::setPreferredNetworkTypeToGlobal() const
	{
		return callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z"
		);
	}
	inline void TelephonyManager::setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0) const
	{
		callMethod<void>(
			"setVisualVoicemailSmsFilterSettings",
			"(Landroid/telephony/VisualVoicemailSmsFilterSettings;)V",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::setVoiceMailNumber(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TelephonyManager::setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TelephonyManager::setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

