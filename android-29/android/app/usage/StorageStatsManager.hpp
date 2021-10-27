#pragma once

#ifndef ANDROID_APP_USAGE_STORAGESTATSMANAGER
#define ANDROID_APP_USAGE_STORAGESTATSMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::usage
{
	class ExternalStorageStats;
}
namespace __jni_impl::android::app::usage
{
	class StorageStats;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::app::usage
{
	class StorageStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getFreeBytes(__jni_impl::java::util::UUID arg0);
		jlong getTotalBytes(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject queryExternalStatsForUser(__jni_impl::java::util::UUID arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject queryStatsForPackage(__jni_impl::java::util::UUID arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2);
		QAndroidJniObject queryStatsForPackage(__jni_impl::java::util::UUID arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2);
		QAndroidJniObject queryStatsForUid(__jni_impl::java::util::UUID arg0, jint arg1);
		QAndroidJniObject queryStatsForUser(__jni_impl::java::util::UUID arg0, __jni_impl::android::os::UserHandle arg1);
	};
} // namespace __jni_impl::android::app::usage

#include "ExternalStorageStats.hpp"
#include "StorageStats.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../java/util/UUID.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	
	// Constructors
	void StorageStatsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.StorageStatsManager",
			"(V)V");
	}
	
	// Methods
	jlong StorageStatsManager::getFreeBytes(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFreeBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageStatsManager::getTotalBytes(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryExternalStatsForUser(__jni_impl::java::util::UUID arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"queryExternalStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/ExternalStorageStats;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForPackage(__jni_impl::java::util::UUID arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"queryStatsForPackage",
			"(Ljava/util/UUID;Ljava/lang/String;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForPackage(__jni_impl::java::util::UUID arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"queryStatsForPackage",
			"(Ljava/util/UUID;Ljava/lang/String;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForUid(__jni_impl::java::util::UUID arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryStatsForUid",
			"(Ljava/util/UUID;I)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForUser(__jni_impl::java::util::UUID arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"queryStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class StorageStatsManager : public __jni_impl::android::app::usage::StorageStatsManager
	{
	public:
		StorageStatsManager(QAndroidJniObject obj) { __thiz = obj; }
		StorageStatsManager()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_STORAGESTATSMANAGER

