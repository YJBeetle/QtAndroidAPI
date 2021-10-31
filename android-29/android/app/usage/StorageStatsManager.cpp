#include "./ExternalStorageStats.hpp"
#include "./StorageStats.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../java/util/UUID.hpp"
#include "./StorageStatsManager.hpp"

namespace android::app::usage
{
	// Fields
	
	StorageStatsManager::StorageStatsManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong StorageStatsManager::getFreeBytes(java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFreeBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageStatsManager::getTotalBytes(java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryExternalStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"queryExternalStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/ExternalStorageStats;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForPackage(java::util::UUID arg0, jstring arg1, android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"queryStatsForPackage",
			"(Ljava/util/UUID;Ljava/lang/String;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForUid(java::util::UUID arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"queryStatsForUid",
			"(Ljava/util/UUID;I)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StorageStatsManager::queryStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"queryStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::app::usage

