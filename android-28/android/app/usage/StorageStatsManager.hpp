#pragma once

#include "./ExternalStorageStats.def.hpp"
#include "./StorageStats.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.def.hpp"
#include "./StorageStatsManager.def.hpp"

namespace android::app::usage
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong StorageStatsManager::getFreeBytes(java::util::UUID arg0) const
	{
		return callMethod<jlong>(
			"getFreeBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	inline jlong StorageStatsManager::getTotalBytes(java::util::UUID arg0) const
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	inline android::app::usage::ExternalStorageStats StorageStatsManager::queryExternalStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"queryExternalStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/ExternalStorageStats;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::usage::StorageStats StorageStatsManager::queryStatsForPackage(java::util::UUID arg0, JString arg1, android::os::UserHandle arg2) const
	{
		return callObjectMethod(
			"queryStatsForPackage",
			"(Ljava/util/UUID;Ljava/lang/String;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::usage::StorageStats StorageStatsManager::queryStatsForUid(java::util::UUID arg0, jint arg1) const
	{
		return callObjectMethod(
			"queryStatsForUid",
			"(Ljava/util/UUID;I)Landroid/app/usage/StorageStats;",
			arg0.object(),
			arg1
		);
	}
	inline android::app::usage::StorageStats StorageStatsManager::queryStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"queryStatsForUser",
			"(Ljava/util/UUID;Landroid/os/UserHandle;)Landroid/app/usage/StorageStats;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
