#pragma once

#include "../../app/Activity.def.hpp"
#include "../../app/PendingIntent.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./DownloadableSubscription.def.hpp"
#include "./EuiccInfo.def.hpp"
#include "../../../JString.hpp"
#include "./EuiccManager.def.hpp"

namespace android::telephony::euicc
{
	// Fields
	inline JString EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::ACTION_START_EUICC_ACTIVATION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_START_EUICC_ACTIVATION",
			"Ljava/lang/String;"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR"
		);
	}
	inline jint EuiccManager::ERROR_ADDRESS_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_ADDRESS_MISSING"
		);
	}
	inline jint EuiccManager::ERROR_CARRIER_LOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CARRIER_LOCKED"
		);
	}
	inline jint EuiccManager::ERROR_CERTIFICATE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CERTIFICATE_ERROR"
		);
	}
	inline jint EuiccManager::ERROR_CONNECTION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_CONNECTION_ERROR"
		);
	}
	inline jint EuiccManager::ERROR_DISALLOWED_BY_PPR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_DISALLOWED_BY_PPR"
		);
	}
	inline jint EuiccManager::ERROR_EUICC_INSUFFICIENT_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_EUICC_INSUFFICIENT_MEMORY"
		);
	}
	inline jint EuiccManager::ERROR_EUICC_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_EUICC_MISSING"
		);
	}
	inline jint EuiccManager::ERROR_INCOMPATIBLE_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INCOMPATIBLE_CARRIER"
		);
	}
	inline jint EuiccManager::ERROR_INSTALL_PROFILE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INSTALL_PROFILE"
		);
	}
	inline jint EuiccManager::ERROR_INVALID_ACTIVATION_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_ACTIVATION_CODE"
		);
	}
	inline jint EuiccManager::ERROR_INVALID_CONFIRMATION_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_CONFIRMATION_CODE"
		);
	}
	inline jint EuiccManager::ERROR_INVALID_RESPONSE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_INVALID_RESPONSE"
		);
	}
	inline jint EuiccManager::ERROR_NO_PROFILES_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_NO_PROFILES_AVAILABLE"
		);
	}
	inline jint EuiccManager::ERROR_OPERATION_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_OPERATION_BUSY"
		);
	}
	inline jint EuiccManager::ERROR_SIM_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_SIM_MISSING"
		);
	}
	inline jint EuiccManager::ERROR_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_TIME_OUT"
		);
	}
	inline jint EuiccManager::ERROR_UNSUPPORTED_VERSION()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"ERROR_UNSUPPORTED_VERSION"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_OPERATION_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_OPERATION_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_REASON_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_REASON_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_SUBJECT_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_SUBJECT_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_USE_QR_SCANNER()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_USE_QR_SCANNER",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::META_DATA_CARRIER_ICON()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;"
		);
	}
	inline jint EuiccManager::OPERATION_APDU()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_APDU"
		);
	}
	inline jint EuiccManager::OPERATION_DOWNLOAD()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_DOWNLOAD"
		);
	}
	inline jint EuiccManager::OPERATION_EUICC_CARD()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_EUICC_CARD"
		);
	}
	inline jint EuiccManager::OPERATION_EUICC_GSMA()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_EUICC_GSMA"
		);
	}
	inline jint EuiccManager::OPERATION_HTTP()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_HTTP"
		);
	}
	inline jint EuiccManager::OPERATION_METADATA()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_METADATA"
		);
	}
	inline jint EuiccManager::OPERATION_SIM_SLOT()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SIM_SLOT"
		);
	}
	inline jint EuiccManager::OPERATION_SMDX()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SMDX"
		);
	}
	inline jint EuiccManager::OPERATION_SMDX_SUBJECT_REASON_CODE()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SMDX_SUBJECT_REASON_CODE"
		);
	}
	inline jint EuiccManager::OPERATION_SWITCH()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SWITCH"
		);
	}
	inline jint EuiccManager::OPERATION_SYSTEM()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"OPERATION_SYSTEM"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::euicc::EuiccManager EuiccManager::createForCardId(jint arg0) const
	{
		return callObjectMethod(
			"createForCardId",
			"(I)Landroid/telephony/euicc/EuiccManager;",
			arg0
		);
	}
	inline void EuiccManager::deleteSubscription(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void EuiccManager::downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString EuiccManager::getEid() const
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	inline android::telephony::euicc::EuiccInfo EuiccManager::getEuiccInfo() const
	{
		return callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;"
		);
	}
	inline jboolean EuiccManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void EuiccManager::startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3) const
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
	inline void EuiccManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void EuiccManager::updateSubscriptionNickname(jint arg0, JString arg1, android::app::PendingIntent arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::euicc;
#endif
