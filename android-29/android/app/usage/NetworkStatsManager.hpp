#pragma once

#ifndef ANDROID_APP_USAGE_NETWORKSTATSMANAGER
#define ANDROID_APP_USAGE_NETWORKSTATSMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::usage
{
	class NetworkStats;
}
namespace __jni_impl::android::app::usage
{
	class NetworkStats_Bucket;
}
namespace __jni_impl::android::app::usage
{
	class NetworkStatsManager_UsageCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::app::usage
{
	class NetworkStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject queryDetails(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject queryDetails(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject queryDetailsForUid(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4);
		QAndroidJniObject queryDetailsForUid(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4);
		QAndroidJniObject queryDetailsForUidTag(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5);
		QAndroidJniObject queryDetailsForUidTag(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5);
		QAndroidJniObject queryDetailsForUidTagState(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject queryDetailsForUidTagState(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject querySummary(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummary(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForDevice(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForDevice(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForUser(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForUser(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		void registerUsageCallback(jint arg0, jstring arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3);
		void registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3);
		void registerUsageCallback(jint arg0, jstring arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3, __jni_impl::android::os::Handler arg4);
		void registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3, __jni_impl::android::os::Handler arg4);
		void unregisterUsageCallback(__jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg0);
	};
} // namespace __jni_impl::android::app::usage

#include "NetworkStats.hpp"
#include "NetworkStats_Bucket.hpp"
#include "NetworkStatsManager_UsageCallback.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	
	// Constructors
	void NetworkStatsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.NetworkStatsManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NetworkStatsManager::queryDetails(jint arg0, jstring arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"queryDetails",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetails(jint arg0, const QString &arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"queryDetails",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUid(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUid",
			"(ILjava/lang/String;JJI)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUid(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUid",
			"(ILjava/lang/String;JJI)Landroid/app/usage/NetworkStats;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUidTag(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUidTag",
			"(ILjava/lang/String;JJII)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUidTag(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUidTag",
			"(ILjava/lang/String;JJII)Landroid/app/usage/NetworkStats;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUidTagState(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUidTagState",
			"(ILjava/lang/String;JJIII)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject NetworkStatsManager::queryDetailsForUidTagState(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6)
	{
		return __thiz.callObjectMethod(
			"queryDetailsForUidTagState",
			"(ILjava/lang/String;JJIII)Landroid/app/usage/NetworkStats;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummary(jint arg0, jstring arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummary",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummary(jint arg0, const QString &arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummary",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummaryForDevice(jint arg0, jstring arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummaryForDevice",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummaryForDevice(jint arg0, const QString &arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummaryForDevice",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummaryForUser(jint arg0, jstring arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummaryForUser",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject NetworkStatsManager::querySummaryForUser(jint arg0, const QString &arg1, jlong arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"querySummaryForUser",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, jstring arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3)
	{
		__thiz.callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3)
	{
		__thiz.callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, jstring arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3, __jni_impl::android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;Landroid/os/Handler;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg3, __jni_impl::android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;Landroid/os/Handler;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void NetworkStatsManager::unregisterUsageCallback(__jni_impl::android::app::usage::NetworkStatsManager_UsageCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterUsageCallback",
			"(Landroid/app/usage/NetworkStatsManager$UsageCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class NetworkStatsManager : public __jni_impl::android::app::usage::NetworkStatsManager
	{
	public:
		NetworkStatsManager(QAndroidJniObject obj) { __thiz = obj; }
		NetworkStatsManager()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_NETWORKSTATSMANAGER

