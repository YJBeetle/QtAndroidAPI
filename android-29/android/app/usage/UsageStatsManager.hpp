#pragma once

#ifndef ANDROID_APP_USAGE_USAGESTATSMANAGER
#define ANDROID_APP_USAGE_USAGESTATSMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::usage
{
	class UsageEvents;
}

namespace __jni_impl::android::app::usage
{
	class UsageStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint INTERVAL_BEST();
		static jint INTERVAL_DAILY();
		static jint INTERVAL_MONTHLY();
		static jint INTERVAL_WEEKLY();
		static jint INTERVAL_YEARLY();
		static jint STANDBY_BUCKET_ACTIVE();
		static jint STANDBY_BUCKET_FREQUENT();
		static jint STANDBY_BUCKET_RARE();
		static jint STANDBY_BUCKET_WORKING_SET();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getAppStandbyBucket();
		jboolean isAppInactive(jstring arg0);
		jboolean isAppInactive(const QString &arg0);
		QAndroidJniObject queryAndAggregateUsageStats(jlong arg0, jlong arg1);
		QAndroidJniObject queryConfigurations(jint arg0, jlong arg1, jlong arg2);
		QAndroidJniObject queryEventStats(jint arg0, jlong arg1, jlong arg2);
		QAndroidJniObject queryEvents(jlong arg0, jlong arg1);
		QAndroidJniObject queryEventsForSelf(jlong arg0, jlong arg1);
		QAndroidJniObject queryUsageStats(jint arg0, jlong arg1, jlong arg2);
	};
} // namespace __jni_impl::android::app::usage

#include "UsageEvents.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	jint UsageStatsManager::INTERVAL_BEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_BEST"
		);
	}
	jint UsageStatsManager::INTERVAL_DAILY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_DAILY"
		);
	}
	jint UsageStatsManager::INTERVAL_MONTHLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_MONTHLY"
		);
	}
	jint UsageStatsManager::INTERVAL_WEEKLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_WEEKLY"
		);
	}
	jint UsageStatsManager::INTERVAL_YEARLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_YEARLY"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_ACTIVE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_FREQUENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_FREQUENT"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_RARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_RARE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_WORKING_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_WORKING_SET"
		);
	}
	
	// Constructors
	void UsageStatsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageStatsManager",
			"(V)V");
	}
	
	// Methods
	jint UsageStatsManager::getAppStandbyBucket()
	{
		return __thiz.callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	jboolean UsageStatsManager::isAppInactive(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAppInactive",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UsageStatsManager::isAppInactive(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAppInactive",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject UsageStatsManager::queryAndAggregateUsageStats(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"queryAndAggregateUsageStats",
			"(JJ)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UsageStatsManager::queryConfigurations(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"queryConfigurations",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject UsageStatsManager::queryEventStats(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"queryEventStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject UsageStatsManager::queryEvents(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"queryEvents",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UsageStatsManager::queryEventsForSelf(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"queryEventsForSelf",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UsageStatsManager::queryUsageStats(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"queryUsageStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class UsageStatsManager : public __jni_impl::android::app::usage::UsageStatsManager
	{
	public:
		UsageStatsManager(QAndroidJniObject obj) { __thiz = obj; }
		UsageStatsManager()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_USAGESTATSMANAGER

