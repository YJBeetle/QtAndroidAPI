#include "../../app/Activity.hpp"
#include "../../app/PendingIntent.hpp"
#include "../../content/Intent.hpp"
#include "./DownloadableSubscription.hpp"
#include "./EuiccInfo.hpp"
#include "../../../JString.hpp"
#include "./EuiccManager.hpp"

namespace android::telephony::euicc
{
	// Fields
	JString EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::ACTION_START_EUICC_ACTIVATION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_START_EUICC_ACTIVATION",
			"Ljava/lang/String;"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR"
		);
	}
	jint EuiccManager::ERROR_ADDRESS_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_ADDRESS_MISSING"
		);
	}
	jint EuiccManager::ERROR_CARRIER_LOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CARRIER_LOCKED"
		);
	}
	jint EuiccManager::ERROR_CERTIFICATE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CERTIFICATE_ERROR"
		);
	}
	jint EuiccManager::ERROR_CONNECTION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CONNECTION_ERROR"
		);
	}
	jint EuiccManager::ERROR_DISALLOWED_BY_PPR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_DISALLOWED_BY_PPR"
		);
	}
	jint EuiccManager::ERROR_EUICC_INSUFFICIENT_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_EUICC_INSUFFICIENT_MEMORY"
		);
	}
	jint EuiccManager::ERROR_EUICC_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_EUICC_MISSING"
		);
	}
	jint EuiccManager::ERROR_INCOMPATIBLE_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INCOMPATIBLE_CARRIER"
		);
	}
	jint EuiccManager::ERROR_INSTALL_PROFILE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INSTALL_PROFILE"
		);
	}
	jint EuiccManager::ERROR_INVALID_ACTIVATION_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_ACTIVATION_CODE"
		);
	}
	jint EuiccManager::ERROR_INVALID_CONFIRMATION_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_CONFIRMATION_CODE"
		);
	}
	jint EuiccManager::ERROR_INVALID_RESPONSE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_RESPONSE"
		);
	}
	jint EuiccManager::ERROR_NO_PROFILES_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_NO_PROFILES_AVAILABLE"
		);
	}
	jint EuiccManager::ERROR_OPERATION_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_OPERATION_BUSY"
		);
	}
	jint EuiccManager::ERROR_SIM_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_SIM_MISSING"
		);
	}
	jint EuiccManager::ERROR_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_TIME_OUT"
		);
	}
	jint EuiccManager::ERROR_UNSUPPORTED_VERSION()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_UNSUPPORTED_VERSION"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_OPERATION_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_OPERATION_CODE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_REASON_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_REASON_CODE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_SUBJECT_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_SUBJECT_CODE",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::EXTRA_USE_QR_SCANNER()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_USE_QR_SCANNER",
			"Ljava/lang/String;"
		);
	}
	JString EuiccManager::META_DATA_CARRIER_ICON()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;"
		);
	}
	jint EuiccManager::OPERATION_APDU()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_APDU"
		);
	}
	jint EuiccManager::OPERATION_DOWNLOAD()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_DOWNLOAD"
		);
	}
	jint EuiccManager::OPERATION_EUICC_CARD()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_EUICC_CARD"
		);
	}
	jint EuiccManager::OPERATION_EUICC_GSMA()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_EUICC_GSMA"
		);
	}
	jint EuiccManager::OPERATION_HTTP()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_HTTP"
		);
	}
	jint EuiccManager::OPERATION_METADATA()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_METADATA"
		);
	}
	jint EuiccManager::OPERATION_SIM_SLOT()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SIM_SLOT"
		);
	}
	jint EuiccManager::OPERATION_SMDX()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SMDX"
		);
	}
	jint EuiccManager::OPERATION_SMDX_SUBJECT_REASON_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SMDX_SUBJECT_REASON_CODE"
		);
	}
	jint EuiccManager::OPERATION_SWITCH()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SWITCH"
		);
	}
	jint EuiccManager::OPERATION_SYSTEM()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SYSTEM"
		);
	}
	
	// QAndroidJniObject forward
	EuiccManager::EuiccManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::euicc::EuiccManager EuiccManager::createForCardId(jint arg0)
	{
		return callObjectMethod(
			"createForCardId",
			"(I)Landroid/telephony/euicc/EuiccManager;",
			arg0
		);
	}
	void EuiccManager::deleteSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	void EuiccManager::downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JString EuiccManager::getEid()
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	android::telephony::euicc::EuiccInfo EuiccManager::getEuiccInfo()
	{
		return callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;"
		);
	}
	jboolean EuiccManager::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void EuiccManager::startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"startResolutionActivity",
			"(Landroid/app/Activity;ILandroid/content/Intent;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void EuiccManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	void EuiccManager::updateSubscriptionNickname(jint arg0, JString arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"updateSubscriptionNickname",
			"(ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::telephony::euicc

