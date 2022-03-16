#pragma once

#include "./RestoreObserver.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../../JString.hpp"
#include "./BackupManager.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	inline BackupManager::BackupManager(android::content::Context arg0)
		: JObject(
			"android.app.backup.BackupManager",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void BackupManager::dataChanged(JString arg0)
	{
		callStaticMethod<void>(
			"android.app.backup.BackupManager",
			"dataChanged",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void BackupManager::dataChanged() const
	{
		callMethod<void>(
			"dataChanged",
			"()V"
		);
	}
	inline jint BackupManager::requestRestore(android::app::backup::RestoreObserver arg0) const
	{
		return callMethod<jint>(
			"requestRestore",
			"(Landroid/app/backup/RestoreObserver;)I",
			arg0.object()
		);
	}
} // namespace android::app::backup

// Base class headers

