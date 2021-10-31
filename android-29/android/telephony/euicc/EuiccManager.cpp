#include "../../app/Activity.hpp"
#include "../../app/PendingIntent.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./DownloadableSubscription.hpp"
#include "./EuiccInfo.hpp"
#include "./EuiccManager.hpp"

namespace android::telephony::euicc
{
	// Fields
	jstring EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR"
		);
	}
	jstring EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::META_DATA_CARRIER_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	EuiccManager::EuiccManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject EuiccManager::createForCardId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createForCardId",
			"(I)Landroid/telephony/euicc/EuiccManager;",
			arg0
		);
	}
	void EuiccManager::deleteSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void EuiccManager::downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring EuiccManager::getEid()
	{
		return __thiz.callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EuiccManager::getEuiccInfo()
	{
		return __thiz.callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;"
		);
	}
	jboolean EuiccManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void EuiccManager::startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"startResolutionActivity",
			"(Landroid/app/Activity;ILandroid/content/Intent;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void EuiccManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void EuiccManager::updateSubscriptionNickname(jint arg0, jstring arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"updateSubscriptionNickname",
			"(ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::telephony::euicc

