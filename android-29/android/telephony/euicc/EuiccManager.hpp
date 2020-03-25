#pragma once

#ifndef ANDROID_TELEPHONY_EUICC_EUICCMANAGER
#define ANDROID_TELEPHONY_EUICC_EUICCMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::telephony::euicc
{
	class DownloadableSubscription;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telephony::euicc
{
	class EuiccInfo;
}

namespace __jni_impl::android::telephony::euicc
{
	class EuiccManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS();
		static QAndroidJniObject ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_ERROR();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_OK();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR();
		static QAndroidJniObject EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE();
		static QAndroidJniObject EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION();
		static QAndroidJniObject META_DATA_CARRIER_ICON();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isEnabled();
		QAndroidJniObject getEid();
		QAndroidJniObject createForCardId(jint arg0);
		void downloadSubscription(__jni_impl::android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, __jni_impl::android::app::PendingIntent arg2);
		void startResolutionActivity(__jni_impl::android::app::Activity arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::android::app::PendingIntent arg3);
		QAndroidJniObject getEuiccInfo();
		void deleteSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1);
		void updateSubscriptionNickname(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		void switchToSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1);
	};
} // namespace __jni_impl::android::telephony::euicc

#include "../../content/Context.hpp"
#include "DownloadableSubscription.hpp"
#include "../../app/PendingIntent.hpp"
#include "../../app/Activity.hpp"
#include "../../content/Intent.hpp"
#include "EuiccInfo.hpp"

namespace __jni_impl::android::telephony::euicc
{
	// Fields
	QAndroidJniObject EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;");
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR");
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK");
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR");
	}
	QAndroidJniObject EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EuiccManager::META_DATA_CARRIER_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void EuiccManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.EuiccManager",
			"(V)V");
	}
	
	// Methods
	jboolean EuiccManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	QAndroidJniObject EuiccManager::getEid()
	{
		return __thiz.callObjectMethod(
			"getEid",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject EuiccManager::createForCardId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createForCardId",
			"(I)Landroid/telephony/euicc/EuiccManager;",
			arg0);
	}
	void EuiccManager::downloadSubscription(__jni_impl::android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void EuiccManager::startResolutionActivity(__jni_impl::android::app::Activity arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"startResolutionActivity",
			"(Landroid/app/Activity;ILandroid/content/Intent;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject EuiccManager::getEuiccInfo()
	{
		return __thiz.callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;");
	}
	void EuiccManager::deleteSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void EuiccManager::updateSubscriptionNickname(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"updateSubscriptionNickname",
			"(ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void EuiccManager::switchToSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony::euicc

namespace android::telephony::euicc
{
	class EuiccManager : public __jni_impl::android::telephony::euicc::EuiccManager
	{
	public:
		EuiccManager(QAndroidJniObject obj) { __thiz = obj; }
		EuiccManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony::euicc

#endif // ANDROID_TELEPHONY_EUICC_EUICCMANAGER

