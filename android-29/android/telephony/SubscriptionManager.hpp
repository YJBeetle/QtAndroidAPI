#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}
namespace __jni_impl::android::telephony
{
	class SubscriptionInfo;
}
namespace __jni_impl::android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener;
}
namespace __jni_impl::android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener;
}

namespace __jni_impl::android::telephony
{
	class SubscriptionManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED();
		static jstring ACTION_DEFAULT_SUBSCRIPTION_CHANGED();
		static jstring ACTION_MANAGE_SUBSCRIPTION_PLANS();
		static jstring ACTION_REFRESH_SUBSCRIPTION_PLANS();
		static jint DATA_ROAMING_DISABLE();
		static jint DATA_ROAMING_ENABLE();
		static jint DEFAULT_SUBSCRIPTION_ID();
		static jstring EXTRA_SUBSCRIPTION_INDEX();
		static jint INVALID_SIM_SLOT_INDEX();
		static jint INVALID_SUBSCRIPTION_ID();
		static jint SUBSCRIPTION_TYPE_LOCAL_SIM();
		static jint SUBSCRIPTION_TYPE_REMOTE_SIM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::android::content::Context arg0);
		static jint getDefaultDataSubscriptionId();
		static jint getDefaultSmsSubscriptionId();
		static jint getDefaultSubscriptionId();
		static jint getDefaultVoiceSubscriptionId();
		static jint getSlotIndex(jint arg0);
		static jboolean isUsableSubscriptionId(jint arg0);
		static jboolean isValidSubscriptionId(jint arg0);
		void addOnOpportunisticSubscriptionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1);
		void addOnSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		void addSubscriptionsIntoGroup(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::ParcelUuid arg1);
		jboolean canManageSubscription(__jni_impl::android::telephony::SubscriptionInfo arg0);
		QAndroidJniObject createSubscriptionGroup(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getAccessibleSubscriptionInfoList();
		QAndroidJniObject getActiveSubscriptionInfo(jint arg0);
		jint getActiveSubscriptionInfoCount();
		jint getActiveSubscriptionInfoCountMax();
		QAndroidJniObject getActiveSubscriptionInfoForSimSlotIndex(jint arg0);
		QAndroidJniObject getActiveSubscriptionInfoList();
		QAndroidJniObject getOpportunisticSubscriptions();
		jintArray getSubscriptionIds(jint arg0);
		QAndroidJniObject getSubscriptionPlans(jint arg0);
		QAndroidJniObject getSubscriptionsInGroup(__jni_impl::android::os::ParcelUuid arg0);
		jboolean isActiveSubscriptionId(jint arg0);
		jboolean isNetworkRoaming(jint arg0);
		void removeOnOpportunisticSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0);
		void removeOnSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		void removeSubscriptionsFromGroup(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::ParcelUuid arg1);
		jboolean setOpportunistic(jboolean arg0, jint arg1);
		void setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionPlans(jint arg0, __jni_impl::__JniBaseClass arg1);
		void switchToSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../os/ParcelUuid.hpp"
#include "./SubscriptionInfo.hpp"
#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.hpp"
#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jstring SubscriptionManager::ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_DEFAULT_SUBSCRIPTION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_MANAGE_SUBSCRIPTION_PLANS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_MANAGE_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_REFRESH_SUBSCRIPTION_PLANS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_REFRESH_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionManager::DATA_ROAMING_DISABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_DISABLE"
		);
	}
	jint SubscriptionManager::DATA_ROAMING_ENABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_ENABLE"
		);
	}
	jint SubscriptionManager::DEFAULT_SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DEFAULT_SUBSCRIPTION_ID"
		);
	}
	jstring SubscriptionManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionManager::INVALID_SIM_SLOT_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SIM_SLOT_INDEX"
		);
	}
	jint SubscriptionManager::INVALID_SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SUBSCRIPTION_ID"
		);
	}
	jint SubscriptionManager::SUBSCRIPTION_TYPE_LOCAL_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_LOCAL_SIM"
		);
	}
	jint SubscriptionManager::SUBSCRIPTION_TYPE_REMOTE_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_REMOTE_SIM"
		);
	}
	
	// Constructors
	void SubscriptionManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SubscriptionManager::from(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionManager",
			"from",
			"(Landroid/content/Context;)Landroid/telephony/SubscriptionManager;",
			arg0.__jniObject().object()
		);
	}
	jint SubscriptionManager::getDefaultDataSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultDataSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSmsSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultVoiceSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultVoiceSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getSlotIndex(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getSlotIndex",
			"(I)I",
			arg0
		);
	}
	jboolean SubscriptionManager::isUsableSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isUsableSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	jboolean SubscriptionManager::isValidSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isValidSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	void SubscriptionManager::addOnOpportunisticSubscriptionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1)
	{
		__thiz.callMethod<void>(
			"addOnOpportunisticSubscriptionsChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SubscriptionManager::addOnSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0)
	{
		__thiz.callMethod<void>(
			"addOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SubscriptionManager::addSubscriptionsIntoGroup(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::ParcelUuid arg1)
	{
		__thiz.callMethod<void>(
			"addSubscriptionsIntoGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean SubscriptionManager::canManageSubscription(__jni_impl::android::telephony::SubscriptionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canManageSubscription",
			"(Landroid/telephony/SubscriptionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SubscriptionManager::createSubscriptionGroup(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"createSubscriptionGroup",
			"(Ljava/util/List;)Landroid/os/ParcelUuid;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SubscriptionManager::getAccessibleSubscriptionInfoList()
	{
		return __thiz.callObjectMethod(
			"getAccessibleSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SubscriptionManager::getActiveSubscriptionInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveSubscriptionInfo",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCount()
	{
		return __thiz.callMethod<jint>(
			"getActiveSubscriptionInfoCount",
			"()I"
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCountMax()
	{
		return __thiz.callMethod<jint>(
			"getActiveSubscriptionInfoCountMax",
			"()I"
		);
	}
	QAndroidJniObject SubscriptionManager::getActiveSubscriptionInfoForSimSlotIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveSubscriptionInfoForSimSlotIndex",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	QAndroidJniObject SubscriptionManager::getActiveSubscriptionInfoList()
	{
		return __thiz.callObjectMethod(
			"getActiveSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SubscriptionManager::getOpportunisticSubscriptions()
	{
		return __thiz.callObjectMethod(
			"getOpportunisticSubscriptions",
			"()Ljava/util/List;"
		);
	}
	jintArray SubscriptionManager::getSubscriptionIds(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubscriptionIds",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	QAndroidJniObject SubscriptionManager::getSubscriptionPlans(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubscriptionPlans",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject SubscriptionManager::getSubscriptionsInGroup(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"getSubscriptionsInGroup",
			"(Landroid/os/ParcelUuid;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jboolean SubscriptionManager::isActiveSubscriptionId(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isActiveSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	jboolean SubscriptionManager::isNetworkRoaming(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNetworkRoaming",
			"(I)Z",
			arg0
		);
	}
	void SubscriptionManager::removeOnOpportunisticSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0)
	{
		__thiz.callMethod<void>(
			"removeOnOpportunisticSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SubscriptionManager::removeOnSubscriptionsChangedListener(__jni_impl::android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0)
	{
		__thiz.callMethod<void>(
			"removeOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SubscriptionManager::removeSubscriptionsFromGroup(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::ParcelUuid arg1)
	{
		__thiz.callMethod<void>(
			"removeSubscriptionsFromGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean SubscriptionManager::setOpportunistic(jboolean arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setOpportunistic",
			"(ZI)Z",
			arg0,
			arg1
		);
	}
	void SubscriptionManager::setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setSubscriptionOverrideCongested",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setSubscriptionOverrideUnmetered",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionPlans(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setSubscriptionPlans",
			"(ILjava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SubscriptionManager::switchToSubscription(jint arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionManager : public __jni_impl::android::telephony::SubscriptionManager
	{
	public:
		SubscriptionManager(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony

