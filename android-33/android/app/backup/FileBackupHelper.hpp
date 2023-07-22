#pragma once

#include "../../../JArray.hpp"
#include "./BackupDataInputStream.def.hpp"
#include "./BackupDataOutput.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "./FileBackupHelper.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	inline FileBackupHelper::FileBackupHelper(android::content::Context arg0, JArray arg1)
		: JObject(
			"android.app.backup.FileBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline void FileBackupHelper::performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FileBackupHelper::restoreEntity(android::app::backup::BackupDataInputStream arg0) const
	{
		callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.object()
		);
	}
	inline void FileBackupHelper::writeNewStateDescription(android::os::ParcelFileDescriptor arg0) const
	{
		callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		);
	}
} // namespace android::app::backup

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::backup;
#endif
