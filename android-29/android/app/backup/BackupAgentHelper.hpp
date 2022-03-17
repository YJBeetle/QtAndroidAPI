#pragma once

#include "./BackupDataInput.def.hpp"
#include "./BackupDataOutput.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./BackupAgentHelper.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	inline BackupAgentHelper::BackupAgentHelper()
		: android::app::backup::BackupAgent(
			"android.app.backup.BackupAgentHelper",
			"()V"
		) {}
	
	// Methods
	inline void BackupAgentHelper::addHelper(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"addHelper",
			"(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void BackupAgentHelper::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void BackupAgentHelper::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::app::backup

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "./BackupAgent.hpp"

